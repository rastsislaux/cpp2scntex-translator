/*******************************************************************************
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Camilo Sanchez (Camiloasc1) 2020 Martin Mirchev (Marti2203)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
 * NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * ****************************************************************************
 */

// $antlr-format alignTrailingComments true, columnLimit 150, minEmptyLines 1, maxEmptyLinesToKeep 1, reflowComments false, useTab false
// $antlr-format allowShortRulesOnASingleLine false, allowShortBlocksOnASingleLine true, alignSemicolons hanging, alignColons hanging

parser grammar cpp;

options {
    tokenVocab = cpplexer;
    language = Cpp;
}

// Insert here @header for C++ parser.

/*Basic concepts*/

translationUnit
    returns [std::string resultDocText]
    :
    (ds=declarationseq {
        $resultDocText = $ds.resultDocText;
    })?
    EOF
    ;

/*Expressions*/

primaryExpression
    : literal+
    | This
    | LeftParen expression RightParen
    | idExpression
    | lambdaExpression
    ;

idExpression
    : unqualifiedId
    | qualifiedId
    ;

unqualifiedId
    : Identifier
    | operatorFunctionId
    | conversionFunctionId
    | literalOperatorId
    | Tilde (className | decltypeSpecifier)
    | templateId
    ;

qualifiedId
    : nestedNameSpecifier Template? unqualifiedId
    ;

nestedNameSpecifier
    : (theTypeName | namespaceName | decltypeSpecifier)? Doublecolon
    | nestedNameSpecifier ( Identifier | Template? simpleTemplateId) Doublecolon
    ;

lambdaExpression
    : lambdaIntroducer lambdaDeclarator? compoundStatement
    ;

lambdaIntroducer
    : LeftBracket lambdaCapture? RightBracket
    ;

lambdaCapture
    : captureList
    | captureDefault (Comma captureList)?
    ;

captureDefault
    : And
    | Assign
    ;

captureList
    : capture (Comma capture)* Ellipsis?
    ;

capture
    : simpleCapture
    | initcapture
    ;

simpleCapture
    : And? Identifier
    | This
    ;

initcapture
    : And? Identifier initializer
    ;

lambdaDeclarator
    : LeftParen parameterDeclarationClause? RightParen Mutable? exceptionSpecification? attributeSpecifierSeq? trailingReturnType?
    ;

postfixExpression
    : primaryExpression
    | postfixExpression LeftBracket (expression | bracedInitList) RightBracket
    | postfixExpression LeftParen expressionList? RightParen
    | (simpleTypeSpecifier | typeNameSpecifier) (
        LeftParen expressionList? RightParen
        | bracedInitList
    )
    | postfixExpression (Dot | Arrow) (Template? idExpression | pseudoDestructorName)
    | postfixExpression (PlusPlus | MinusMinus)
    | (Dynamic_cast | Static_cast | Reinterpret_cast | Const_cast) Less theTypeId Greater LeftParen expression RightParen
    | typeIdOfTheTypeId LeftParen (expression | theTypeId) RightParen
    ;

/*
 add a middle layer to eliminate duplicated function declarations
 */

typeIdOfTheTypeId
    : Typeid_
    ;

expressionList
    : initializerList
    ;

pseudoDestructorName
    : nestedNameSpecifier? (theTypeName Doublecolon)? Tilde theTypeName
    | nestedNameSpecifier Template simpleTemplateId Doublecolon Tilde theTypeName
    | Tilde decltypeSpecifier
    ;

unaryExpression
    : postfixExpression
    | (PlusPlus | MinusMinus | unaryOperator | Sizeof) unaryExpression
    | Sizeof (LeftParen theTypeId RightParen | Ellipsis LeftParen Identifier RightParen)
    | Alignof LeftParen theTypeId RightParen
    | noExceptExpression
    | newExpression_
    | deleteExpression
    ;

unaryOperator
    : Or
    | Star
    | And
    | Plus
    | Tilde
    | Minus
    | Not
    ;

newExpression_
    : Doublecolon? New newPlacement? (newTypeId | LeftParen theTypeId RightParen) newInitializer_?
    ;

newPlacement
    : LeftParen expressionList RightParen
    ;

newTypeId
    : typeSpecifierSeq newDeclarator_?
    ;

newDeclarator_
    : pointerOperator newDeclarator_?
    | noPointerNewDeclarator
    ;

noPointerNewDeclarator
    : LeftBracket expression RightBracket attributeSpecifierSeq?
    | noPointerNewDeclarator LeftBracket constantExpression RightBracket attributeSpecifierSeq?
    ;

newInitializer_
    : LeftParen expressionList? RightParen
    | bracedInitList
    ;

deleteExpression
    : Doublecolon? Delete (LeftBracket RightBracket)? castExpression
    ;

noExceptExpression
    : Noexcept LeftParen expression RightParen
    ;

castExpression
    : unaryExpression
    | LeftParen theTypeId RightParen castExpression
    ;

pointerMemberExpression
    : castExpression ((DotStar | ArrowStar) castExpression)*
    ;

multiplicativeExpression
    : pointerMemberExpression ((Star | Div | Mod) pointerMemberExpression)*
    ;

additiveExpression
    : multiplicativeExpression ((Plus | Minus) multiplicativeExpression)*
    ;

shiftExpression
    : additiveExpression (shiftOperator additiveExpression)*
    ;

shiftOperator
    : Greater Greater
    | Less Less
    ;

relationalExpression
    : shiftExpression ((Less | Greater | LessEqual | GreaterEqual) shiftExpression)*
    ;

equalityExpression
    : relationalExpression ((Equal | NotEqual) relationalExpression)*
    ;

andExpression
    : equalityExpression (And equalityExpression)*
    ;

exclusiveOrExpression
    : andExpression (Caret andExpression)*
    ;

inclusiveOrExpression
    : exclusiveOrExpression (Or exclusiveOrExpression)*
    ;

logicalAndExpression
    : inclusiveOrExpression (AndAnd inclusiveOrExpression)*
    ;

logicalOrExpression
    : logicalAndExpression (OrOr logicalAndExpression)*
    ;

conditionalExpression
    : logicalOrExpression (Question expression Colon assignmentExpression)?
    ;

assignmentExpression
    : conditionalExpression
    | logicalOrExpression assignmentOperator initializerClause
    | throwExpression
    ;

assignmentOperator
    : Assign
    | StarAssign
    | DivAssign
    | ModAssign
    | PlusAssign
    | MinusAssign
    | RightShiftAssign
    | LeftShiftAssign
    | AndAssign
    | XorAssign
    | OrAssign
    ;

expression
    : assignmentExpression (Comma assignmentExpression)*
    ;

constantExpression
    : conditionalExpression
    ;

/*Statements*/

statement
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    :
    (
        labeledStatement
        | (declstmt=declarationStatement {
            $resultDocStream << $declstmt.resultDocText;
          })
        | attributeSpecifierSeq? (
            expressionStatement
            | compoundStatement
            | selectionStatement
            | iterationStatement
            | jumpStatement
            | tryBlock
        )
    )
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

labeledStatement
    : attributeSpecifierSeq? (Identifier | Case constantExpression | Default) Colon statement
    ;

expressionStatement
    : expression? Semi
    ;

compoundStatement
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    : LeftBrace (stmtseq=statementSeq {
        $resultDocStream << $stmtseq.resultDocText;
    })? RightBrace
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

statementSeq
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    : (stmt=statement {
        $resultDocStream << $stmt.resultDocText;
    })+
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

selectionStatement
    : If LeftParen condition RightParen statement (Else statement)?
    | Switch LeftParen condition RightParen statement
    ;

condition
    : expression
    | attributeSpecifierSeq? declSpecifierSeq declarator (
        Assign initializerClause
        | bracedInitList
    )
    ;

iterationStatement
    : While LeftParen condition RightParen statement
    | Do statement While LeftParen expression RightParen Semi
    | For LeftParen (
        forInitStatement condition? Semi expression?
        | forRangeDeclaration Colon forRangeInitializer
    ) RightParen statement
    ;

forInitStatement
    : expressionStatement
    | simpleDeclaration
    ;

forRangeDeclaration
    : attributeSpecifierSeq? declSpecifierSeq declarator
    ;

forRangeInitializer
    : expression
    | bracedInitList
    ;

jumpStatement
    : (Break | Continue | Return (expression | bracedInitList)? | Goto Identifier) Semi
    ;

declarationStatement
    returns [std::string resultDocText]
    : (decl=blockDeclaration {
        $resultDocText = $decl.resultDocText;
    })
    ;

/*Declarations*/

declarationseq
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    :
    (decl=declaration {
        $resultDocStream << $decl.resultDocText;
    })+
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

declaration
    returns [std::string resultDocText]
    : (bd=blockDeclaration {
        $resultDocText = $bd.resultDocText;
    })
    | functionDefinition
    | templateDeclaration
    | explicitInstantiation
    | explicitSpecialization
    | linkageSpecification
    | namespaceDefinition
    | emptyDeclaration_
    | attributeDeclaration
    ;

blockDeclaration
    returns [std::string resultDocText]
    : (decl=simpleDeclaration {
        $resultDocText = $decl.resultDocText;
    })
    | asmDefinition
    | namespaceAliasDefinition
    | usingDeclaration
    | usingDirective
    | staticAssertDeclaration
    | aliasDeclaration
    | opaqueEnumDeclaration
    ;

aliasDeclaration
    : Using Identifier attributeSpecifierSeq? Assign theTypeId Semi
    ;

simpleDeclaration
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    : (
        (comment=docComment {
            $resultDocStream << $comment.commentText;
        })*
        (dsq=declSpecifierSeq {
            $resultDocStream << $dsq.resultDocText;
        })? (idl=initDeclaratorList {
            $resultDocStream << $idl.resultDocText;
        })? Semi
        (comment=docComment {
            $resultDocStream << $comment.commentText;
        })*
        | attributeSpecifierSeq declSpecifierSeq? initDeclaratorList Semi
    )
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

staticAssertDeclaration
    : Static_assert LeftParen constantExpression Comma StringLiteral RightParen Semi
    ;

emptyDeclaration_
    : Semi
    ;

attributeDeclaration
    : attributeSpecifierSeq Semi
    ;

declSpecifier
    returns [std::string resultDocText]
    : storageClassSpecifier
    | (ts=typeSpecifier {
        $resultDocText = $ts.resultDocText;
    })
    | functionSpecifier
    | Friend
    | Typedef
    | Constexpr
    ;

declSpecifierSeq
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    : (ds=declSpecifier {
        $resultDocStream << $ds.resultDocText;
    })+? attributeSpecifierSeq?
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

storageClassSpecifier
    : Register
    | Static
    | Thread_local
    | Extern
    | Mutable
    ;

functionSpecifier
    : Inline
    | Virtual
    | Explicit
    ;

typedefName
    : Identifier
    ;

typeSpecifier
    returns [std::string resultDocText]
    : trailingTypeSpecifier
    | (cs=classSpecifier {
        $resultDocText = $cs.resultDocText;
    })
    | enumSpecifier
    ;

trailingTypeSpecifier
    : simpleTypeSpecifier
    | elaboratedTypeSpecifier
    | typeNameSpecifier
    | cvQualifier
    ;

typeSpecifierSeq
    : typeSpecifier+ attributeSpecifierSeq?
    ;

trailingTypeSpecifierSeq
    : trailingTypeSpecifier+ attributeSpecifierSeq?
    ;

simpleTypeLengthModifier
    : Short
    | Long
    ;

simpleTypeSignednessModifier
    : Unsigned
    | Signed
    ;

simpleTypeSpecifier
    : nestedNameSpecifier? theTypeName
    | nestedNameSpecifier Template simpleTemplateId
    | Char
    | Char16
    | Char32
    | Wchar
    | Bool
    | Short
    | Int
    | Long
    | Float
    | Signed
    | Unsigned
    | Float
    | Double
    | Void
    | Auto
    | decltypeSpecifier
    ;

theTypeName
    : className
    | enumName
    | typedefName
    | simpleTemplateId
    ;

decltypeSpecifier
    : Decltype LeftParen (expression | Auto) RightParen
    ;

elaboratedTypeSpecifier
    : classKey (
        attributeSpecifierSeq? nestedNameSpecifier? Identifier
        | simpleTemplateId
        | nestedNameSpecifier Template? simpleTemplateId
    )
    | Enum nestedNameSpecifier? Identifier
    ;

enumName
    : Identifier
    ;

enumSpecifier
    : enumHead LeftBrace (enumeratorList Comma?)? RightBrace
    ;

enumHead
    : enumkey attributeSpecifierSeq? (nestedNameSpecifier? Identifier)? enumbase?
    ;

opaqueEnumDeclaration
    : enumkey attributeSpecifierSeq? Identifier enumbase? Semi
    ;

enumkey
    : Enum (Class | Struct)?
    ;

enumbase
    : Colon typeSpecifierSeq
    ;

enumeratorList
    : enumeratorDefinition (Comma enumeratorDefinition)*
    ;

enumeratorDefinition
    : enumerator (Assign constantExpression)?
    ;

enumerator
    : Identifier
    ;

namespaceName
    : originalNamespaceName
    | namespaceAlias
    ;

originalNamespaceName
    : Identifier
    ;

namespaceDefinition
    : Inline? Namespace (Identifier | originalNamespaceName)? LeftBrace namespaceBody = declarationseq? RightBrace
    ;

namespaceAlias
    : Identifier
    ;

namespaceAliasDefinition
    : Namespace Identifier Assign qualifiednamespacespecifier Semi
    ;

qualifiednamespacespecifier
    : nestedNameSpecifier? namespaceName
    ;

usingDeclaration
    : Using (Typename_? nestedNameSpecifier | Doublecolon) unqualifiedId Semi
    ;

usingDirective
    : attributeSpecifierSeq? Using Namespace nestedNameSpecifier? namespaceName Semi
    ;

asmDefinition
    : Asm LeftParen StringLiteral RightParen Semi
    ;

linkageSpecification
    : Extern StringLiteral (LeftBrace declarationseq? RightBrace | declaration)
    ;

attributeSpecifierSeq
    : attributeSpecifier+
    ;

attributeSpecifier
    : LeftBracket LeftBracket attributeList? RightBracket RightBracket
    | alignmentspecifier
    ;

alignmentspecifier
    : Alignas LeftParen (theTypeId | constantExpression) Ellipsis? RightParen
    ;

attributeList
    : attribute (Comma attribute)* Ellipsis?
    ;

attribute
    : (attributeNamespace Doublecolon)? Identifier attributeArgumentClause?
    ;

attributeNamespace
    : Identifier
    ;

attributeArgumentClause
    : LeftParen balancedTokenSeq? RightParen
    ;

balancedTokenSeq
    : balancedtoken+
    ;

balancedtoken
    : LeftParen balancedTokenSeq RightParen
    | LeftBracket balancedTokenSeq RightBracket
    | LeftBrace balancedTokenSeq RightBrace
    | ~(LeftParen | RightParen | LeftBrace | RightBrace | LeftBracket | RightBracket)+
    ;

/*Declarators*/

initDeclaratorList
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    : (idecl=initDeclarator {
        $resultDocStream << $idecl.resultDocText;
    }) (Comma (idecl=initDeclarator {
                      $resultDocStream << $idecl.resultDocText;
                  }))*
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

initDeclarator
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    : (decl=declarator {
        $resultDocStream << "\n\\scnidtf{" << $decl.text << "}\n";

        auto parent = _localctx->decl->parent;
        while (parent != nullptr && !dynamic_cast<FunctionDefinitionContext *>(parent)) {
          parent = parent->parent;
        }
        std::string methodName;
        if (parent != nullptr) {
            methodName = dynamic_cast<FunctionDefinitionContext *>(parent)->methodName;
        }

        $resultDocStream << "\\scniselement{" << methodName << "}\n";
    }) initializer?
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

declarator
    : pointerDeclarator
    | noPointerDeclarator parametersAndQualifiers trailingReturnType
    ;

pointerDeclarator
    : (pointerOperator Const?)* noPointerDeclarator
    ;

noPointerDeclarator
    : declaratorid attributeSpecifierSeq?
    | noPointerDeclarator (
        parametersAndQualifiers
        | LeftBracket constantExpression? RightBracket attributeSpecifierSeq?
    )
    | LeftParen pointerDeclarator RightParen
    ;

parametersAndQualifiers
    : LeftParen parameterDeclarationClause? RightParen cvqualifierseq? refqualifier? exceptionSpecification? attributeSpecifierSeq?
    ;

trailingReturnType
    : Arrow trailingTypeSpecifierSeq abstractDeclarator?
    ;

pointerOperator
    : (And | AndAnd) attributeSpecifierSeq?
    | nestedNameSpecifier? Star attributeSpecifierSeq? cvqualifierseq?
    ;

cvqualifierseq
    : cvQualifier+
    ;

cvQualifier
    : Const
    | Volatile
    ;

refqualifier
    : And
    | AndAnd
    ;

declaratorid
    : Ellipsis? idExpression
    ;

theTypeId
    : typeSpecifierSeq abstractDeclarator?
    ;

abstractDeclarator
    : pointerAbstractDeclarator
    | noPointerAbstractDeclarator? parametersAndQualifiers trailingReturnType
    | abstractPackDeclarator
    ;

pointerAbstractDeclarator
    : noPointerAbstractDeclarator
    | pointerOperator+ noPointerAbstractDeclarator?
    ;

noPointerAbstractDeclarator
    : noPointerAbstractDeclarator (
        parametersAndQualifiers
        | noPointerAbstractDeclarator LeftBracket constantExpression? RightBracket attributeSpecifierSeq?
    )
    | parametersAndQualifiers
    | LeftBracket constantExpression? RightBracket attributeSpecifierSeq?
    | LeftParen pointerAbstractDeclarator RightParen
    ;

abstractPackDeclarator
    : pointerOperator* noPointerAbstractPackDeclarator
    ;

noPointerAbstractPackDeclarator
    : noPointerAbstractPackDeclarator (
        parametersAndQualifiers
        | LeftBracket constantExpression? RightBracket attributeSpecifierSeq?
    )
    | Ellipsis
    ;

parameterDeclarationClause
    : parameterDeclarationList (Comma? Ellipsis)?
    ;

parameterDeclarationList
    : parameterDeclaration (Comma parameterDeclaration)*
    ;

parameterDeclaration
    : attributeSpecifierSeq? declSpecifierSeq (declarator | abstractDeclarator?) (
        Assign initializerClause
    )?
    ;

functionDefinition
    returns [std::string resultDocText]
    locals [
        std::stringstream resultDocStream,
        std::string methodName
    ]
    :
    (comment=docComment {
        $resultDocStream << $comment.commentText;
    })*
    attributeSpecifierSeq? declSpecifierSeq? (decl=declarator {
        size_t bracketPos = $decl.text.find('(');

        if (bracketPos != std::string::npos) {
            $methodName = $decl.text.substr(0, bracketPos);
        } else {
            $methodName = $decl.text;
        }

        $resultDocStream << "\n\\scnidtf{" + $methodName + "}\n";
    }) virtualSpecifierSeq?
    (comment=docComment {
        $resultDocStream << $comment.commentText;
    })*
    (body=functionBody {
        $resultDocStream << $body.resultDocText;
    })
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

functionBody
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    :
    (
        constructorInitializer? (stmt=compoundStatement {
            $resultDocStream << $stmt.resultDocText;
        })
        | functionTryBlock
        | Assign (Default | Delete) Semi
    )
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

initializer
    : braceOrEqualInitializer
    | LeftParen expressionList RightParen
    ;

braceOrEqualInitializer
    : Assign initializerClause
    | bracedInitList
    ;

initializerClause
    : assignmentExpression
    | bracedInitList
    ;

initializerList
    : initializerClause Ellipsis? (Comma initializerClause Ellipsis?)*
    ;

bracedInitList
    : LeftBrace (initializerList Comma?)? RightBrace
    ;

/*Classes*/

className
    : Identifier
    | simpleTemplateId
    ;

classSpecifier
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    : classHead LeftBrace (ms=memberSpecification {
        $resultDocStream << $ms.resultDocText;
    })? RightBrace
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

classHead
    : classKey attributeSpecifierSeq? (classHeadName classVirtSpecifier?)? baseClause?
    | Union attributeSpecifierSeq? ( classHeadName classVirtSpecifier?)?
    ;

classHeadName
    : nestedNameSpecifier? className
    ;

classVirtSpecifier
    : Final
    ;

classKey
    : Class
    | Struct
    ;

memberSpecification
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    : ((md=memberdeclaration {
        $resultDocStream << $md.resultDocText;
    }) | accessSpecifier Colon)+
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

memberdeclaration
    returns [std::string resultDocText]
    locals [std::stringstream resultDocStream]
    :
    (
        attributeSpecifierSeq? declSpecifierSeq? memberDeclaratorList? Semi
        | (fd=functionDefinition {
            $resultDocStream << $fd.resultDocText;
        })
        | usingDeclaration
        | staticAssertDeclaration
        | templateDeclaration
        | aliasDeclaration
        | emptyDeclaration_
    )
    {
        $resultDocText = $resultDocStream.str();
    }
    ;

memberDeclaratorList
    : memberDeclarator (Comma memberDeclarator)*
    ;

memberDeclarator
    : declarator (
        virtualSpecifierSeq
        | pureSpecifier
        | virtualSpecifierSeq pureSpecifier
        | braceOrEqualInitializer
    )
    | declarator
    | Identifier? attributeSpecifierSeq? Colon constantExpression
    ;

virtualSpecifierSeq
    : virtualSpecifier+
    ;

virtualSpecifier
    : Override
    | Final
    ;

/*
 purespecifier: Assign '0'//Conflicts with the lexer ;
 */

pureSpecifier
    : Assign IntegerLiteral
    ;

/*Derived classes*/

baseClause
    : Colon baseSpecifierList
    ;

baseSpecifierList
    : baseSpecifier Ellipsis? (Comma baseSpecifier Ellipsis?)*
    ;

baseSpecifier
    : attributeSpecifierSeq? (
        baseTypeSpecifier
        | Virtual accessSpecifier? baseTypeSpecifier
        | accessSpecifier Virtual? baseTypeSpecifier
    )
    ;

classOrDeclType
    : nestedNameSpecifier? className
    | decltypeSpecifier
    ;

baseTypeSpecifier
    : classOrDeclType
    ;

accessSpecifier
    : Private
    | Protected
    | Public
    ;

/*Special member functions*/

conversionFunctionId
    : Operator conversionTypeId
    ;

conversionTypeId
    : typeSpecifierSeq conversionDeclarator?
    ;

conversionDeclarator
    : pointerOperator conversionDeclarator?
    ;

constructorInitializer
    : Colon memInitializerList
    ;

memInitializerList
    : memInitializer Ellipsis? (Comma memInitializer Ellipsis?)*
    ;

memInitializer
    : meminitializerid (LeftParen expressionList? RightParen | bracedInitList)
    ;

meminitializerid
    : classOrDeclType
    | Identifier
    ;

/*Overloading*/

operatorFunctionId
    : Operator theOperator
    ;

literalOperatorId
    : Operator (StringLiteral Identifier | UserDefinedStringLiteral)
    ;

/*Templates*/

templateDeclaration
    : Template Less templateparameterList Greater declaration
    ;

templateparameterList
    : templateParameter (Comma templateParameter)*
    ;

templateParameter
    : typeParameter
    | parameterDeclaration
    ;

typeParameter
    : ((Template Less templateparameterList Greater)? Class | Typename_) (
        Ellipsis? Identifier?
        | Identifier? Assign theTypeId
    )
    ;

simpleTemplateId
    : templateName Less templateArgumentList? Greater
    ;

templateId
    : simpleTemplateId
    | (operatorFunctionId | literalOperatorId) Less templateArgumentList? Greater
    ;

templateName
    : Identifier
    ;

templateArgumentList
    : templateArgument Ellipsis? (Comma templateArgument Ellipsis?)*
    ;

templateArgument
    : theTypeId
    | constantExpression
    | idExpression
    ;

typeNameSpecifier
    : Typename_ nestedNameSpecifier (Identifier | Template? simpleTemplateId)
    ;

explicitInstantiation
    : Extern? Template declaration
    ;

explicitSpecialization
    : Template Less Greater declaration
    ;

/*Exception handling*/

tryBlock
    : Try compoundStatement handlerSeq
    ;

functionTryBlock
    : Try constructorInitializer? compoundStatement handlerSeq
    ;

handlerSeq
    : handler+
    ;

handler
    : Catch LeftParen exceptionDeclaration RightParen compoundStatement
    ;

exceptionDeclaration
    : attributeSpecifierSeq? typeSpecifierSeq (declarator | abstractDeclarator)?
    | Ellipsis
    ;

throwExpression
    : Throw assignmentExpression?
    ;

exceptionSpecification
    : dynamicExceptionSpecification
    | noeExceptSpecification
    ;

dynamicExceptionSpecification
    : Throw LeftParen typeIdList? RightParen
    ;

typeIdList
    : theTypeId Ellipsis? (Comma theTypeId Ellipsis?)*
    ;

noeExceptSpecification
    : Noexcept LeftParen constantExpression RightParen
    | Noexcept
    ;

/*Preprocessing directives*/

/*Lexer*/

theOperator
    : New (LeftBracket RightBracket)?
    | Delete (LeftBracket RightBracket)?
    | Plus
    | Minus
    | Star
    | Div
    | Mod
    | Caret
    | And
    | Or
    | Tilde
    | Not
    | Assign
    | Greater
    | Less
    | GreaterEqual
    | PlusAssign
    | MinusAssign
    | StarAssign
    | ModAssign
    | XorAssign
    | AndAssign
    | OrAssign
    | Less Less
    | Greater Greater
    | RightShiftAssign
    | LeftShiftAssign
    | Equal
    | NotEqual
    | LessEqual
    | AndAnd
    | OrOr
    | PlusPlus
    | MinusMinus
    | Comma
    | ArrowStar
    | Arrow
    | LeftParen RightParen
    | LeftBracket RightBracket
    ;

literal
    : IntegerLiteral
    | CharacterLiteral
    | FloatingLiteral
    | StringLiteral
    | BooleanLiteral
    | PointerLiteral
    | UserDefinedLiteral
    ;

 docComment
     returns [std::string commentText]
     : (comment=DocLineComment {
        $commentText = $comment.text.substr(3);
     })
     | (comment=DocBlockComment {
        $commentText = $comment.text;
        $commentText = $commentText.substr(3, $commentText.length() - 5);
     })
     ;

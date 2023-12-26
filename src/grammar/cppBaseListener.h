
#include "../translator/identifiers-tree/sc_scn_prefix_tree.h"
#include "../translator/file-structs/sc_scn_file_structs_tree.h"
#include "../translator/log/sc_log.hpp"


// Generated from src/grammar/cpp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cppListener.h"


/**
 * This class provides an empty implementation of cppListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  cppBaseListener : public cppListener {
public:

  virtual void enterTranslationUnit(cpp::TranslationUnitContext * /*ctx*/) override { }
  virtual void exitTranslationUnit(cpp::TranslationUnitContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(cpp::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(cpp::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterIdExpression(cpp::IdExpressionContext * /*ctx*/) override { }
  virtual void exitIdExpression(cpp::IdExpressionContext * /*ctx*/) override { }

  virtual void enterUnqualifiedId(cpp::UnqualifiedIdContext * /*ctx*/) override { }
  virtual void exitUnqualifiedId(cpp::UnqualifiedIdContext * /*ctx*/) override { }

  virtual void enterQualifiedId(cpp::QualifiedIdContext * /*ctx*/) override { }
  virtual void exitQualifiedId(cpp::QualifiedIdContext * /*ctx*/) override { }

  virtual void enterNestedNameSpecifier(cpp::NestedNameSpecifierContext * /*ctx*/) override { }
  virtual void exitNestedNameSpecifier(cpp::NestedNameSpecifierContext * /*ctx*/) override { }

  virtual void enterLambdaExpression(cpp::LambdaExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaExpression(cpp::LambdaExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaIntroducer(cpp::LambdaIntroducerContext * /*ctx*/) override { }
  virtual void exitLambdaIntroducer(cpp::LambdaIntroducerContext * /*ctx*/) override { }

  virtual void enterLambdaCapture(cpp::LambdaCaptureContext * /*ctx*/) override { }
  virtual void exitLambdaCapture(cpp::LambdaCaptureContext * /*ctx*/) override { }

  virtual void enterCaptureDefault(cpp::CaptureDefaultContext * /*ctx*/) override { }
  virtual void exitCaptureDefault(cpp::CaptureDefaultContext * /*ctx*/) override { }

  virtual void enterCaptureList(cpp::CaptureListContext * /*ctx*/) override { }
  virtual void exitCaptureList(cpp::CaptureListContext * /*ctx*/) override { }

  virtual void enterCapture(cpp::CaptureContext * /*ctx*/) override { }
  virtual void exitCapture(cpp::CaptureContext * /*ctx*/) override { }

  virtual void enterSimpleCapture(cpp::SimpleCaptureContext * /*ctx*/) override { }
  virtual void exitSimpleCapture(cpp::SimpleCaptureContext * /*ctx*/) override { }

  virtual void enterInitcapture(cpp::InitcaptureContext * /*ctx*/) override { }
  virtual void exitInitcapture(cpp::InitcaptureContext * /*ctx*/) override { }

  virtual void enterLambdaDeclarator(cpp::LambdaDeclaratorContext * /*ctx*/) override { }
  virtual void exitLambdaDeclarator(cpp::LambdaDeclaratorContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(cpp::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(cpp::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterTypeIdOfTheTypeId(cpp::TypeIdOfTheTypeIdContext * /*ctx*/) override { }
  virtual void exitTypeIdOfTheTypeId(cpp::TypeIdOfTheTypeIdContext * /*ctx*/) override { }

  virtual void enterExpressionList(cpp::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(cpp::ExpressionListContext * /*ctx*/) override { }

  virtual void enterPseudoDestructorName(cpp::PseudoDestructorNameContext * /*ctx*/) override { }
  virtual void exitPseudoDestructorName(cpp::PseudoDestructorNameContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(cpp::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(cpp::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(cpp::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(cpp::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterNewExpression_(cpp::NewExpression_Context * /*ctx*/) override { }
  virtual void exitNewExpression_(cpp::NewExpression_Context * /*ctx*/) override { }

  virtual void enterNewPlacement(cpp::NewPlacementContext * /*ctx*/) override { }
  virtual void exitNewPlacement(cpp::NewPlacementContext * /*ctx*/) override { }

  virtual void enterNewTypeId(cpp::NewTypeIdContext * /*ctx*/) override { }
  virtual void exitNewTypeId(cpp::NewTypeIdContext * /*ctx*/) override { }

  virtual void enterNewDeclarator_(cpp::NewDeclarator_Context * /*ctx*/) override { }
  virtual void exitNewDeclarator_(cpp::NewDeclarator_Context * /*ctx*/) override { }

  virtual void enterNoPointerNewDeclarator(cpp::NoPointerNewDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerNewDeclarator(cpp::NoPointerNewDeclaratorContext * /*ctx*/) override { }

  virtual void enterNewInitializer_(cpp::NewInitializer_Context * /*ctx*/) override { }
  virtual void exitNewInitializer_(cpp::NewInitializer_Context * /*ctx*/) override { }

  virtual void enterDeleteExpression(cpp::DeleteExpressionContext * /*ctx*/) override { }
  virtual void exitDeleteExpression(cpp::DeleteExpressionContext * /*ctx*/) override { }

  virtual void enterNoExceptExpression(cpp::NoExceptExpressionContext * /*ctx*/) override { }
  virtual void exitNoExceptExpression(cpp::NoExceptExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(cpp::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(cpp::CastExpressionContext * /*ctx*/) override { }

  virtual void enterPointerMemberExpression(cpp::PointerMemberExpressionContext * /*ctx*/) override { }
  virtual void exitPointerMemberExpression(cpp::PointerMemberExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(cpp::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(cpp::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(cpp::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(cpp::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterShiftExpression(cpp::ShiftExpressionContext * /*ctx*/) override { }
  virtual void exitShiftExpression(cpp::ShiftExpressionContext * /*ctx*/) override { }

  virtual void enterShiftOperator(cpp::ShiftOperatorContext * /*ctx*/) override { }
  virtual void exitShiftOperator(cpp::ShiftOperatorContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(cpp::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(cpp::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(cpp::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(cpp::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(cpp::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(cpp::AndExpressionContext * /*ctx*/) override { }

  virtual void enterExclusiveOrExpression(cpp::ExclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitExclusiveOrExpression(cpp::ExclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterInclusiveOrExpression(cpp::InclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitInclusiveOrExpression(cpp::InclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(cpp::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(cpp::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(cpp::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(cpp::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(cpp::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(cpp::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(cpp::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(cpp::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(cpp::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(cpp::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterExpression(cpp::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(cpp::ExpressionContext * /*ctx*/) override { }

  virtual void enterConstantExpression(cpp::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(cpp::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterStatement(cpp::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(cpp::StatementContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(cpp::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(cpp::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(cpp::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(cpp::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(cpp::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(cpp::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterStatementSeq(cpp::StatementSeqContext * /*ctx*/) override { }
  virtual void exitStatementSeq(cpp::StatementSeqContext * /*ctx*/) override { }

  virtual void enterSelectionStatement(cpp::SelectionStatementContext * /*ctx*/) override { }
  virtual void exitSelectionStatement(cpp::SelectionStatementContext * /*ctx*/) override { }

  virtual void enterCondition(cpp::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(cpp::ConditionContext * /*ctx*/) override { }

  virtual void enterIterationStatement(cpp::IterationStatementContext * /*ctx*/) override { }
  virtual void exitIterationStatement(cpp::IterationStatementContext * /*ctx*/) override { }

  virtual void enterForInitStatement(cpp::ForInitStatementContext * /*ctx*/) override { }
  virtual void exitForInitStatement(cpp::ForInitStatementContext * /*ctx*/) override { }

  virtual void enterForRangeDeclaration(cpp::ForRangeDeclarationContext * /*ctx*/) override { }
  virtual void exitForRangeDeclaration(cpp::ForRangeDeclarationContext * /*ctx*/) override { }

  virtual void enterForRangeInitializer(cpp::ForRangeInitializerContext * /*ctx*/) override { }
  virtual void exitForRangeInitializer(cpp::ForRangeInitializerContext * /*ctx*/) override { }

  virtual void enterJumpStatement(cpp::JumpStatementContext * /*ctx*/) override { }
  virtual void exitJumpStatement(cpp::JumpStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(cpp::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(cpp::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationseq(cpp::DeclarationseqContext * /*ctx*/) override { }
  virtual void exitDeclarationseq(cpp::DeclarationseqContext * /*ctx*/) override { }

  virtual void enterDeclaration(cpp::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(cpp::DeclarationContext * /*ctx*/) override { }

  virtual void enterBlockDeclaration(cpp::BlockDeclarationContext * /*ctx*/) override { }
  virtual void exitBlockDeclaration(cpp::BlockDeclarationContext * /*ctx*/) override { }

  virtual void enterAliasDeclaration(cpp::AliasDeclarationContext * /*ctx*/) override { }
  virtual void exitAliasDeclaration(cpp::AliasDeclarationContext * /*ctx*/) override { }

  virtual void enterSimpleDeclaration(cpp::SimpleDeclarationContext * /*ctx*/) override { }
  virtual void exitSimpleDeclaration(cpp::SimpleDeclarationContext * /*ctx*/) override { }

  virtual void enterStaticAssertDeclaration(cpp::StaticAssertDeclarationContext * /*ctx*/) override { }
  virtual void exitStaticAssertDeclaration(cpp::StaticAssertDeclarationContext * /*ctx*/) override { }

  virtual void enterEmptyDeclaration_(cpp::EmptyDeclaration_Context * /*ctx*/) override { }
  virtual void exitEmptyDeclaration_(cpp::EmptyDeclaration_Context * /*ctx*/) override { }

  virtual void enterAttributeDeclaration(cpp::AttributeDeclarationContext * /*ctx*/) override { }
  virtual void exitAttributeDeclaration(cpp::AttributeDeclarationContext * /*ctx*/) override { }

  virtual void enterDeclSpecifier(cpp::DeclSpecifierContext * /*ctx*/) override { }
  virtual void exitDeclSpecifier(cpp::DeclSpecifierContext * /*ctx*/) override { }

  virtual void enterDeclSpecifierSeq(cpp::DeclSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitDeclSpecifierSeq(cpp::DeclSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterStorageClassSpecifier(cpp::StorageClassSpecifierContext * /*ctx*/) override { }
  virtual void exitStorageClassSpecifier(cpp::StorageClassSpecifierContext * /*ctx*/) override { }

  virtual void enterFunctionSpecifier(cpp::FunctionSpecifierContext * /*ctx*/) override { }
  virtual void exitFunctionSpecifier(cpp::FunctionSpecifierContext * /*ctx*/) override { }

  virtual void enterTypedefName(cpp::TypedefNameContext * /*ctx*/) override { }
  virtual void exitTypedefName(cpp::TypedefNameContext * /*ctx*/) override { }

  virtual void enterTypeSpecifier(cpp::TypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeSpecifier(cpp::TypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTrailingTypeSpecifier(cpp::TrailingTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTrailingTypeSpecifier(cpp::TrailingTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeSpecifierSeq(cpp::TypeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitTypeSpecifierSeq(cpp::TypeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterTrailingTypeSpecifierSeq(cpp::TrailingTypeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitTrailingTypeSpecifierSeq(cpp::TrailingTypeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterSimpleTypeLengthModifier(cpp::SimpleTypeLengthModifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeLengthModifier(cpp::SimpleTypeLengthModifierContext * /*ctx*/) override { }

  virtual void enterSimpleTypeSignednessModifier(cpp::SimpleTypeSignednessModifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeSignednessModifier(cpp::SimpleTypeSignednessModifierContext * /*ctx*/) override { }

  virtual void enterSimpleTypeSpecifier(cpp::SimpleTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeSpecifier(cpp::SimpleTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTheTypeName(cpp::TheTypeNameContext * /*ctx*/) override { }
  virtual void exitTheTypeName(cpp::TheTypeNameContext * /*ctx*/) override { }

  virtual void enterDecltypeSpecifier(cpp::DecltypeSpecifierContext * /*ctx*/) override { }
  virtual void exitDecltypeSpecifier(cpp::DecltypeSpecifierContext * /*ctx*/) override { }

  virtual void enterElaboratedTypeSpecifier(cpp::ElaboratedTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitElaboratedTypeSpecifier(cpp::ElaboratedTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumName(cpp::EnumNameContext * /*ctx*/) override { }
  virtual void exitEnumName(cpp::EnumNameContext * /*ctx*/) override { }

  virtual void enterEnumSpecifier(cpp::EnumSpecifierContext * /*ctx*/) override { }
  virtual void exitEnumSpecifier(cpp::EnumSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumHead(cpp::EnumHeadContext * /*ctx*/) override { }
  virtual void exitEnumHead(cpp::EnumHeadContext * /*ctx*/) override { }

  virtual void enterOpaqueEnumDeclaration(cpp::OpaqueEnumDeclarationContext * /*ctx*/) override { }
  virtual void exitOpaqueEnumDeclaration(cpp::OpaqueEnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumkey(cpp::EnumkeyContext * /*ctx*/) override { }
  virtual void exitEnumkey(cpp::EnumkeyContext * /*ctx*/) override { }

  virtual void enterEnumbase(cpp::EnumbaseContext * /*ctx*/) override { }
  virtual void exitEnumbase(cpp::EnumbaseContext * /*ctx*/) override { }

  virtual void enterEnumeratorList(cpp::EnumeratorListContext * /*ctx*/) override { }
  virtual void exitEnumeratorList(cpp::EnumeratorListContext * /*ctx*/) override { }

  virtual void enterEnumeratorDefinition(cpp::EnumeratorDefinitionContext * /*ctx*/) override { }
  virtual void exitEnumeratorDefinition(cpp::EnumeratorDefinitionContext * /*ctx*/) override { }

  virtual void enterEnumerator(cpp::EnumeratorContext * /*ctx*/) override { }
  virtual void exitEnumerator(cpp::EnumeratorContext * /*ctx*/) override { }

  virtual void enterNamespaceName(cpp::NamespaceNameContext * /*ctx*/) override { }
  virtual void exitNamespaceName(cpp::NamespaceNameContext * /*ctx*/) override { }

  virtual void enterOriginalNamespaceName(cpp::OriginalNamespaceNameContext * /*ctx*/) override { }
  virtual void exitOriginalNamespaceName(cpp::OriginalNamespaceNameContext * /*ctx*/) override { }

  virtual void enterNamespaceDefinition(cpp::NamespaceDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceDefinition(cpp::NamespaceDefinitionContext * /*ctx*/) override { }

  virtual void enterNamespaceAlias(cpp::NamespaceAliasContext * /*ctx*/) override { }
  virtual void exitNamespaceAlias(cpp::NamespaceAliasContext * /*ctx*/) override { }

  virtual void enterNamespaceAliasDefinition(cpp::NamespaceAliasDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceAliasDefinition(cpp::NamespaceAliasDefinitionContext * /*ctx*/) override { }

  virtual void enterQualifiednamespacespecifier(cpp::QualifiednamespacespecifierContext * /*ctx*/) override { }
  virtual void exitQualifiednamespacespecifier(cpp::QualifiednamespacespecifierContext * /*ctx*/) override { }

  virtual void enterUsingDeclaration(cpp::UsingDeclarationContext * /*ctx*/) override { }
  virtual void exitUsingDeclaration(cpp::UsingDeclarationContext * /*ctx*/) override { }

  virtual void enterUsingDirective(cpp::UsingDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingDirective(cpp::UsingDirectiveContext * /*ctx*/) override { }

  virtual void enterAsmDefinition(cpp::AsmDefinitionContext * /*ctx*/) override { }
  virtual void exitAsmDefinition(cpp::AsmDefinitionContext * /*ctx*/) override { }

  virtual void enterLinkageSpecification(cpp::LinkageSpecificationContext * /*ctx*/) override { }
  virtual void exitLinkageSpecification(cpp::LinkageSpecificationContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifierSeq(cpp::AttributeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifierSeq(cpp::AttributeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifier(cpp::AttributeSpecifierContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifier(cpp::AttributeSpecifierContext * /*ctx*/) override { }

  virtual void enterAlignmentspecifier(cpp::AlignmentspecifierContext * /*ctx*/) override { }
  virtual void exitAlignmentspecifier(cpp::AlignmentspecifierContext * /*ctx*/) override { }

  virtual void enterAttributeList(cpp::AttributeListContext * /*ctx*/) override { }
  virtual void exitAttributeList(cpp::AttributeListContext * /*ctx*/) override { }

  virtual void enterAttribute(cpp::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(cpp::AttributeContext * /*ctx*/) override { }

  virtual void enterAttributeNamespace(cpp::AttributeNamespaceContext * /*ctx*/) override { }
  virtual void exitAttributeNamespace(cpp::AttributeNamespaceContext * /*ctx*/) override { }

  virtual void enterAttributeArgumentClause(cpp::AttributeArgumentClauseContext * /*ctx*/) override { }
  virtual void exitAttributeArgumentClause(cpp::AttributeArgumentClauseContext * /*ctx*/) override { }

  virtual void enterBalancedTokenSeq(cpp::BalancedTokenSeqContext * /*ctx*/) override { }
  virtual void exitBalancedTokenSeq(cpp::BalancedTokenSeqContext * /*ctx*/) override { }

  virtual void enterBalancedtoken(cpp::BalancedtokenContext * /*ctx*/) override { }
  virtual void exitBalancedtoken(cpp::BalancedtokenContext * /*ctx*/) override { }

  virtual void enterInitDeclaratorList(cpp::InitDeclaratorListContext * /*ctx*/) override { }
  virtual void exitInitDeclaratorList(cpp::InitDeclaratorListContext * /*ctx*/) override { }

  virtual void enterInitDeclarator(cpp::InitDeclaratorContext * /*ctx*/) override { }
  virtual void exitInitDeclarator(cpp::InitDeclaratorContext * /*ctx*/) override { }

  virtual void enterDeclarator(cpp::DeclaratorContext * /*ctx*/) override { }
  virtual void exitDeclarator(cpp::DeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerDeclarator(cpp::PointerDeclaratorContext * /*ctx*/) override { }
  virtual void exitPointerDeclarator(cpp::PointerDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerDeclarator(cpp::NoPointerDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerDeclarator(cpp::NoPointerDeclaratorContext * /*ctx*/) override { }

  virtual void enterParametersAndQualifiers(cpp::ParametersAndQualifiersContext * /*ctx*/) override { }
  virtual void exitParametersAndQualifiers(cpp::ParametersAndQualifiersContext * /*ctx*/) override { }

  virtual void enterTrailingReturnType(cpp::TrailingReturnTypeContext * /*ctx*/) override { }
  virtual void exitTrailingReturnType(cpp::TrailingReturnTypeContext * /*ctx*/) override { }

  virtual void enterPointerOperator(cpp::PointerOperatorContext * /*ctx*/) override { }
  virtual void exitPointerOperator(cpp::PointerOperatorContext * /*ctx*/) override { }

  virtual void enterCvqualifierseq(cpp::CvqualifierseqContext * /*ctx*/) override { }
  virtual void exitCvqualifierseq(cpp::CvqualifierseqContext * /*ctx*/) override { }

  virtual void enterCvQualifier(cpp::CvQualifierContext * /*ctx*/) override { }
  virtual void exitCvQualifier(cpp::CvQualifierContext * /*ctx*/) override { }

  virtual void enterRefqualifier(cpp::RefqualifierContext * /*ctx*/) override { }
  virtual void exitRefqualifier(cpp::RefqualifierContext * /*ctx*/) override { }

  virtual void enterDeclaratorid(cpp::DeclaratoridContext * /*ctx*/) override { }
  virtual void exitDeclaratorid(cpp::DeclaratoridContext * /*ctx*/) override { }

  virtual void enterTheTypeId(cpp::TheTypeIdContext * /*ctx*/) override { }
  virtual void exitTheTypeId(cpp::TheTypeIdContext * /*ctx*/) override { }

  virtual void enterAbstractDeclarator(cpp::AbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractDeclarator(cpp::AbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerAbstractDeclarator(cpp::PointerAbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitPointerAbstractDeclarator(cpp::PointerAbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerAbstractDeclarator(cpp::NoPointerAbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerAbstractDeclarator(cpp::NoPointerAbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterAbstractPackDeclarator(cpp::AbstractPackDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractPackDeclarator(cpp::AbstractPackDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerAbstractPackDeclarator(cpp::NoPointerAbstractPackDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerAbstractPackDeclarator(cpp::NoPointerAbstractPackDeclaratorContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationClause(cpp::ParameterDeclarationClauseContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationClause(cpp::ParameterDeclarationClauseContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationList(cpp::ParameterDeclarationListContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationList(cpp::ParameterDeclarationListContext * /*ctx*/) override { }

  virtual void enterParameterDeclaration(cpp::ParameterDeclarationContext * /*ctx*/) override { }
  virtual void exitParameterDeclaration(cpp::ParameterDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(cpp::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(cpp::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionBody(cpp::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(cpp::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterInitializer(cpp::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(cpp::InitializerContext * /*ctx*/) override { }

  virtual void enterBraceOrEqualInitializer(cpp::BraceOrEqualInitializerContext * /*ctx*/) override { }
  virtual void exitBraceOrEqualInitializer(cpp::BraceOrEqualInitializerContext * /*ctx*/) override { }

  virtual void enterInitializerClause(cpp::InitializerClauseContext * /*ctx*/) override { }
  virtual void exitInitializerClause(cpp::InitializerClauseContext * /*ctx*/) override { }

  virtual void enterInitializerList(cpp::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(cpp::InitializerListContext * /*ctx*/) override { }

  virtual void enterBracedInitList(cpp::BracedInitListContext * /*ctx*/) override { }
  virtual void exitBracedInitList(cpp::BracedInitListContext * /*ctx*/) override { }

  virtual void enterClassName(cpp::ClassNameContext * /*ctx*/) override { }
  virtual void exitClassName(cpp::ClassNameContext * /*ctx*/) override { }

  virtual void enterClassSpecifier(cpp::ClassSpecifierContext * /*ctx*/) override { }
  virtual void exitClassSpecifier(cpp::ClassSpecifierContext * /*ctx*/) override { }

  virtual void enterClassHead(cpp::ClassHeadContext * /*ctx*/) override { }
  virtual void exitClassHead(cpp::ClassHeadContext * /*ctx*/) override { }

  virtual void enterClassHeadName(cpp::ClassHeadNameContext * /*ctx*/) override { }
  virtual void exitClassHeadName(cpp::ClassHeadNameContext * /*ctx*/) override { }

  virtual void enterClassVirtSpecifier(cpp::ClassVirtSpecifierContext * /*ctx*/) override { }
  virtual void exitClassVirtSpecifier(cpp::ClassVirtSpecifierContext * /*ctx*/) override { }

  virtual void enterClassKey(cpp::ClassKeyContext * /*ctx*/) override { }
  virtual void exitClassKey(cpp::ClassKeyContext * /*ctx*/) override { }

  virtual void enterMemberSpecification(cpp::MemberSpecificationContext * /*ctx*/) override { }
  virtual void exitMemberSpecification(cpp::MemberSpecificationContext * /*ctx*/) override { }

  virtual void enterMemberdeclaration(cpp::MemberdeclarationContext * /*ctx*/) override { }
  virtual void exitMemberdeclaration(cpp::MemberdeclarationContext * /*ctx*/) override { }

  virtual void enterMemberDeclaratorList(cpp::MemberDeclaratorListContext * /*ctx*/) override { }
  virtual void exitMemberDeclaratorList(cpp::MemberDeclaratorListContext * /*ctx*/) override { }

  virtual void enterMemberDeclarator(cpp::MemberDeclaratorContext * /*ctx*/) override { }
  virtual void exitMemberDeclarator(cpp::MemberDeclaratorContext * /*ctx*/) override { }

  virtual void enterVirtualSpecifierSeq(cpp::VirtualSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitVirtualSpecifierSeq(cpp::VirtualSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterVirtualSpecifier(cpp::VirtualSpecifierContext * /*ctx*/) override { }
  virtual void exitVirtualSpecifier(cpp::VirtualSpecifierContext * /*ctx*/) override { }

  virtual void enterPureSpecifier(cpp::PureSpecifierContext * /*ctx*/) override { }
  virtual void exitPureSpecifier(cpp::PureSpecifierContext * /*ctx*/) override { }

  virtual void enterBaseClause(cpp::BaseClauseContext * /*ctx*/) override { }
  virtual void exitBaseClause(cpp::BaseClauseContext * /*ctx*/) override { }

  virtual void enterBaseSpecifierList(cpp::BaseSpecifierListContext * /*ctx*/) override { }
  virtual void exitBaseSpecifierList(cpp::BaseSpecifierListContext * /*ctx*/) override { }

  virtual void enterBaseSpecifier(cpp::BaseSpecifierContext * /*ctx*/) override { }
  virtual void exitBaseSpecifier(cpp::BaseSpecifierContext * /*ctx*/) override { }

  virtual void enterClassOrDeclType(cpp::ClassOrDeclTypeContext * /*ctx*/) override { }
  virtual void exitClassOrDeclType(cpp::ClassOrDeclTypeContext * /*ctx*/) override { }

  virtual void enterBaseTypeSpecifier(cpp::BaseTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitBaseTypeSpecifier(cpp::BaseTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterAccessSpecifier(cpp::AccessSpecifierContext * /*ctx*/) override { }
  virtual void exitAccessSpecifier(cpp::AccessSpecifierContext * /*ctx*/) override { }

  virtual void enterConversionFunctionId(cpp::ConversionFunctionIdContext * /*ctx*/) override { }
  virtual void exitConversionFunctionId(cpp::ConversionFunctionIdContext * /*ctx*/) override { }

  virtual void enterConversionTypeId(cpp::ConversionTypeIdContext * /*ctx*/) override { }
  virtual void exitConversionTypeId(cpp::ConversionTypeIdContext * /*ctx*/) override { }

  virtual void enterConversionDeclarator(cpp::ConversionDeclaratorContext * /*ctx*/) override { }
  virtual void exitConversionDeclarator(cpp::ConversionDeclaratorContext * /*ctx*/) override { }

  virtual void enterConstructorInitializer(cpp::ConstructorInitializerContext * /*ctx*/) override { }
  virtual void exitConstructorInitializer(cpp::ConstructorInitializerContext * /*ctx*/) override { }

  virtual void enterMemInitializerList(cpp::MemInitializerListContext * /*ctx*/) override { }
  virtual void exitMemInitializerList(cpp::MemInitializerListContext * /*ctx*/) override { }

  virtual void enterMemInitializer(cpp::MemInitializerContext * /*ctx*/) override { }
  virtual void exitMemInitializer(cpp::MemInitializerContext * /*ctx*/) override { }

  virtual void enterMeminitializerid(cpp::MeminitializeridContext * /*ctx*/) override { }
  virtual void exitMeminitializerid(cpp::MeminitializeridContext * /*ctx*/) override { }

  virtual void enterOperatorFunctionId(cpp::OperatorFunctionIdContext * /*ctx*/) override { }
  virtual void exitOperatorFunctionId(cpp::OperatorFunctionIdContext * /*ctx*/) override { }

  virtual void enterLiteralOperatorId(cpp::LiteralOperatorIdContext * /*ctx*/) override { }
  virtual void exitLiteralOperatorId(cpp::LiteralOperatorIdContext * /*ctx*/) override { }

  virtual void enterTemplateDeclaration(cpp::TemplateDeclarationContext * /*ctx*/) override { }
  virtual void exitTemplateDeclaration(cpp::TemplateDeclarationContext * /*ctx*/) override { }

  virtual void enterTemplateparameterList(cpp::TemplateparameterListContext * /*ctx*/) override { }
  virtual void exitTemplateparameterList(cpp::TemplateparameterListContext * /*ctx*/) override { }

  virtual void enterTemplateParameter(cpp::TemplateParameterContext * /*ctx*/) override { }
  virtual void exitTemplateParameter(cpp::TemplateParameterContext * /*ctx*/) override { }

  virtual void enterTypeParameter(cpp::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(cpp::TypeParameterContext * /*ctx*/) override { }

  virtual void enterSimpleTemplateId(cpp::SimpleTemplateIdContext * /*ctx*/) override { }
  virtual void exitSimpleTemplateId(cpp::SimpleTemplateIdContext * /*ctx*/) override { }

  virtual void enterTemplateId(cpp::TemplateIdContext * /*ctx*/) override { }
  virtual void exitTemplateId(cpp::TemplateIdContext * /*ctx*/) override { }

  virtual void enterTemplateName(cpp::TemplateNameContext * /*ctx*/) override { }
  virtual void exitTemplateName(cpp::TemplateNameContext * /*ctx*/) override { }

  virtual void enterTemplateArgumentList(cpp::TemplateArgumentListContext * /*ctx*/) override { }
  virtual void exitTemplateArgumentList(cpp::TemplateArgumentListContext * /*ctx*/) override { }

  virtual void enterTemplateArgument(cpp::TemplateArgumentContext * /*ctx*/) override { }
  virtual void exitTemplateArgument(cpp::TemplateArgumentContext * /*ctx*/) override { }

  virtual void enterTypeNameSpecifier(cpp::TypeNameSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeNameSpecifier(cpp::TypeNameSpecifierContext * /*ctx*/) override { }

  virtual void enterExplicitInstantiation(cpp::ExplicitInstantiationContext * /*ctx*/) override { }
  virtual void exitExplicitInstantiation(cpp::ExplicitInstantiationContext * /*ctx*/) override { }

  virtual void enterExplicitSpecialization(cpp::ExplicitSpecializationContext * /*ctx*/) override { }
  virtual void exitExplicitSpecialization(cpp::ExplicitSpecializationContext * /*ctx*/) override { }

  virtual void enterTryBlock(cpp::TryBlockContext * /*ctx*/) override { }
  virtual void exitTryBlock(cpp::TryBlockContext * /*ctx*/) override { }

  virtual void enterFunctionTryBlock(cpp::FunctionTryBlockContext * /*ctx*/) override { }
  virtual void exitFunctionTryBlock(cpp::FunctionTryBlockContext * /*ctx*/) override { }

  virtual void enterHandlerSeq(cpp::HandlerSeqContext * /*ctx*/) override { }
  virtual void exitHandlerSeq(cpp::HandlerSeqContext * /*ctx*/) override { }

  virtual void enterHandler(cpp::HandlerContext * /*ctx*/) override { }
  virtual void exitHandler(cpp::HandlerContext * /*ctx*/) override { }

  virtual void enterExceptionDeclaration(cpp::ExceptionDeclarationContext * /*ctx*/) override { }
  virtual void exitExceptionDeclaration(cpp::ExceptionDeclarationContext * /*ctx*/) override { }

  virtual void enterThrowExpression(cpp::ThrowExpressionContext * /*ctx*/) override { }
  virtual void exitThrowExpression(cpp::ThrowExpressionContext * /*ctx*/) override { }

  virtual void enterExceptionSpecification(cpp::ExceptionSpecificationContext * /*ctx*/) override { }
  virtual void exitExceptionSpecification(cpp::ExceptionSpecificationContext * /*ctx*/) override { }

  virtual void enterDynamicExceptionSpecification(cpp::DynamicExceptionSpecificationContext * /*ctx*/) override { }
  virtual void exitDynamicExceptionSpecification(cpp::DynamicExceptionSpecificationContext * /*ctx*/) override { }

  virtual void enterTypeIdList(cpp::TypeIdListContext * /*ctx*/) override { }
  virtual void exitTypeIdList(cpp::TypeIdListContext * /*ctx*/) override { }

  virtual void enterNoeExceptSpecification(cpp::NoeExceptSpecificationContext * /*ctx*/) override { }
  virtual void exitNoeExceptSpecification(cpp::NoeExceptSpecificationContext * /*ctx*/) override { }

  virtual void enterTheOperator(cpp::TheOperatorContext * /*ctx*/) override { }
  virtual void exitTheOperator(cpp::TheOperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(cpp::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(cpp::LiteralContext * /*ctx*/) override { }

  virtual void enterDocComment(cpp::DocCommentContext * /*ctx*/) override { }
  virtual void exitDocComment(cpp::DocCommentContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


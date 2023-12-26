
#include "../translator/identifiers-tree/sc_scn_prefix_tree.h"
#include "../translator/file-structs/sc_scn_file_structs_tree.h"
#include "../translator/log/sc_log.hpp"


// Generated from src/grammar/cpp.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "cpp.h"


/**
 * This interface defines an abstract listener for a parse tree produced by cpp.
 */
class  cppListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationUnit(cpp::TranslationUnitContext *ctx) = 0;
  virtual void exitTranslationUnit(cpp::TranslationUnitContext *ctx) = 0;

  virtual void enterPrimaryExpression(cpp::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(cpp::PrimaryExpressionContext *ctx) = 0;

  virtual void enterIdExpression(cpp::IdExpressionContext *ctx) = 0;
  virtual void exitIdExpression(cpp::IdExpressionContext *ctx) = 0;

  virtual void enterUnqualifiedId(cpp::UnqualifiedIdContext *ctx) = 0;
  virtual void exitUnqualifiedId(cpp::UnqualifiedIdContext *ctx) = 0;

  virtual void enterQualifiedId(cpp::QualifiedIdContext *ctx) = 0;
  virtual void exitQualifiedId(cpp::QualifiedIdContext *ctx) = 0;

  virtual void enterNestedNameSpecifier(cpp::NestedNameSpecifierContext *ctx) = 0;
  virtual void exitNestedNameSpecifier(cpp::NestedNameSpecifierContext *ctx) = 0;

  virtual void enterLambdaExpression(cpp::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(cpp::LambdaExpressionContext *ctx) = 0;

  virtual void enterLambdaIntroducer(cpp::LambdaIntroducerContext *ctx) = 0;
  virtual void exitLambdaIntroducer(cpp::LambdaIntroducerContext *ctx) = 0;

  virtual void enterLambdaCapture(cpp::LambdaCaptureContext *ctx) = 0;
  virtual void exitLambdaCapture(cpp::LambdaCaptureContext *ctx) = 0;

  virtual void enterCaptureDefault(cpp::CaptureDefaultContext *ctx) = 0;
  virtual void exitCaptureDefault(cpp::CaptureDefaultContext *ctx) = 0;

  virtual void enterCaptureList(cpp::CaptureListContext *ctx) = 0;
  virtual void exitCaptureList(cpp::CaptureListContext *ctx) = 0;

  virtual void enterCapture(cpp::CaptureContext *ctx) = 0;
  virtual void exitCapture(cpp::CaptureContext *ctx) = 0;

  virtual void enterSimpleCapture(cpp::SimpleCaptureContext *ctx) = 0;
  virtual void exitSimpleCapture(cpp::SimpleCaptureContext *ctx) = 0;

  virtual void enterInitcapture(cpp::InitcaptureContext *ctx) = 0;
  virtual void exitInitcapture(cpp::InitcaptureContext *ctx) = 0;

  virtual void enterLambdaDeclarator(cpp::LambdaDeclaratorContext *ctx) = 0;
  virtual void exitLambdaDeclarator(cpp::LambdaDeclaratorContext *ctx) = 0;

  virtual void enterPostfixExpression(cpp::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(cpp::PostfixExpressionContext *ctx) = 0;

  virtual void enterTypeIdOfTheTypeId(cpp::TypeIdOfTheTypeIdContext *ctx) = 0;
  virtual void exitTypeIdOfTheTypeId(cpp::TypeIdOfTheTypeIdContext *ctx) = 0;

  virtual void enterExpressionList(cpp::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(cpp::ExpressionListContext *ctx) = 0;

  virtual void enterPseudoDestructorName(cpp::PseudoDestructorNameContext *ctx) = 0;
  virtual void exitPseudoDestructorName(cpp::PseudoDestructorNameContext *ctx) = 0;

  virtual void enterUnaryExpression(cpp::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(cpp::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryOperator(cpp::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(cpp::UnaryOperatorContext *ctx) = 0;

  virtual void enterNewExpression_(cpp::NewExpression_Context *ctx) = 0;
  virtual void exitNewExpression_(cpp::NewExpression_Context *ctx) = 0;

  virtual void enterNewPlacement(cpp::NewPlacementContext *ctx) = 0;
  virtual void exitNewPlacement(cpp::NewPlacementContext *ctx) = 0;

  virtual void enterNewTypeId(cpp::NewTypeIdContext *ctx) = 0;
  virtual void exitNewTypeId(cpp::NewTypeIdContext *ctx) = 0;

  virtual void enterNewDeclarator_(cpp::NewDeclarator_Context *ctx) = 0;
  virtual void exitNewDeclarator_(cpp::NewDeclarator_Context *ctx) = 0;

  virtual void enterNoPointerNewDeclarator(cpp::NoPointerNewDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerNewDeclarator(cpp::NoPointerNewDeclaratorContext *ctx) = 0;

  virtual void enterNewInitializer_(cpp::NewInitializer_Context *ctx) = 0;
  virtual void exitNewInitializer_(cpp::NewInitializer_Context *ctx) = 0;

  virtual void enterDeleteExpression(cpp::DeleteExpressionContext *ctx) = 0;
  virtual void exitDeleteExpression(cpp::DeleteExpressionContext *ctx) = 0;

  virtual void enterNoExceptExpression(cpp::NoExceptExpressionContext *ctx) = 0;
  virtual void exitNoExceptExpression(cpp::NoExceptExpressionContext *ctx) = 0;

  virtual void enterCastExpression(cpp::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(cpp::CastExpressionContext *ctx) = 0;

  virtual void enterPointerMemberExpression(cpp::PointerMemberExpressionContext *ctx) = 0;
  virtual void exitPointerMemberExpression(cpp::PointerMemberExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(cpp::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(cpp::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(cpp::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(cpp::AdditiveExpressionContext *ctx) = 0;

  virtual void enterShiftExpression(cpp::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(cpp::ShiftExpressionContext *ctx) = 0;

  virtual void enterShiftOperator(cpp::ShiftOperatorContext *ctx) = 0;
  virtual void exitShiftOperator(cpp::ShiftOperatorContext *ctx) = 0;

  virtual void enterRelationalExpression(cpp::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(cpp::RelationalExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(cpp::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(cpp::EqualityExpressionContext *ctx) = 0;

  virtual void enterAndExpression(cpp::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(cpp::AndExpressionContext *ctx) = 0;

  virtual void enterExclusiveOrExpression(cpp::ExclusiveOrExpressionContext *ctx) = 0;
  virtual void exitExclusiveOrExpression(cpp::ExclusiveOrExpressionContext *ctx) = 0;

  virtual void enterInclusiveOrExpression(cpp::InclusiveOrExpressionContext *ctx) = 0;
  virtual void exitInclusiveOrExpression(cpp::InclusiveOrExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(cpp::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(cpp::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(cpp::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(cpp::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(cpp::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(cpp::ConditionalExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(cpp::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(cpp::AssignmentExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperator(cpp::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(cpp::AssignmentOperatorContext *ctx) = 0;

  virtual void enterExpression(cpp::ExpressionContext *ctx) = 0;
  virtual void exitExpression(cpp::ExpressionContext *ctx) = 0;

  virtual void enterConstantExpression(cpp::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(cpp::ConstantExpressionContext *ctx) = 0;

  virtual void enterStatement(cpp::StatementContext *ctx) = 0;
  virtual void exitStatement(cpp::StatementContext *ctx) = 0;

  virtual void enterLabeledStatement(cpp::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(cpp::LabeledStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(cpp::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(cpp::ExpressionStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(cpp::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(cpp::CompoundStatementContext *ctx) = 0;

  virtual void enterStatementSeq(cpp::StatementSeqContext *ctx) = 0;
  virtual void exitStatementSeq(cpp::StatementSeqContext *ctx) = 0;

  virtual void enterSelectionStatement(cpp::SelectionStatementContext *ctx) = 0;
  virtual void exitSelectionStatement(cpp::SelectionStatementContext *ctx) = 0;

  virtual void enterCondition(cpp::ConditionContext *ctx) = 0;
  virtual void exitCondition(cpp::ConditionContext *ctx) = 0;

  virtual void enterIterationStatement(cpp::IterationStatementContext *ctx) = 0;
  virtual void exitIterationStatement(cpp::IterationStatementContext *ctx) = 0;

  virtual void enterForInitStatement(cpp::ForInitStatementContext *ctx) = 0;
  virtual void exitForInitStatement(cpp::ForInitStatementContext *ctx) = 0;

  virtual void enterForRangeDeclaration(cpp::ForRangeDeclarationContext *ctx) = 0;
  virtual void exitForRangeDeclaration(cpp::ForRangeDeclarationContext *ctx) = 0;

  virtual void enterForRangeInitializer(cpp::ForRangeInitializerContext *ctx) = 0;
  virtual void exitForRangeInitializer(cpp::ForRangeInitializerContext *ctx) = 0;

  virtual void enterJumpStatement(cpp::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(cpp::JumpStatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(cpp::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(cpp::DeclarationStatementContext *ctx) = 0;

  virtual void enterDeclarationseq(cpp::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(cpp::DeclarationseqContext *ctx) = 0;

  virtual void enterDeclaration(cpp::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(cpp::DeclarationContext *ctx) = 0;

  virtual void enterBlockDeclaration(cpp::BlockDeclarationContext *ctx) = 0;
  virtual void exitBlockDeclaration(cpp::BlockDeclarationContext *ctx) = 0;

  virtual void enterAliasDeclaration(cpp::AliasDeclarationContext *ctx) = 0;
  virtual void exitAliasDeclaration(cpp::AliasDeclarationContext *ctx) = 0;

  virtual void enterSimpleDeclaration(cpp::SimpleDeclarationContext *ctx) = 0;
  virtual void exitSimpleDeclaration(cpp::SimpleDeclarationContext *ctx) = 0;

  virtual void enterStaticAssertDeclaration(cpp::StaticAssertDeclarationContext *ctx) = 0;
  virtual void exitStaticAssertDeclaration(cpp::StaticAssertDeclarationContext *ctx) = 0;

  virtual void enterEmptyDeclaration_(cpp::EmptyDeclaration_Context *ctx) = 0;
  virtual void exitEmptyDeclaration_(cpp::EmptyDeclaration_Context *ctx) = 0;

  virtual void enterAttributeDeclaration(cpp::AttributeDeclarationContext *ctx) = 0;
  virtual void exitAttributeDeclaration(cpp::AttributeDeclarationContext *ctx) = 0;

  virtual void enterDeclSpecifier(cpp::DeclSpecifierContext *ctx) = 0;
  virtual void exitDeclSpecifier(cpp::DeclSpecifierContext *ctx) = 0;

  virtual void enterDeclSpecifierSeq(cpp::DeclSpecifierSeqContext *ctx) = 0;
  virtual void exitDeclSpecifierSeq(cpp::DeclSpecifierSeqContext *ctx) = 0;

  virtual void enterStorageClassSpecifier(cpp::StorageClassSpecifierContext *ctx) = 0;
  virtual void exitStorageClassSpecifier(cpp::StorageClassSpecifierContext *ctx) = 0;

  virtual void enterFunctionSpecifier(cpp::FunctionSpecifierContext *ctx) = 0;
  virtual void exitFunctionSpecifier(cpp::FunctionSpecifierContext *ctx) = 0;

  virtual void enterTypedefName(cpp::TypedefNameContext *ctx) = 0;
  virtual void exitTypedefName(cpp::TypedefNameContext *ctx) = 0;

  virtual void enterTypeSpecifier(cpp::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(cpp::TypeSpecifierContext *ctx) = 0;

  virtual void enterTrailingTypeSpecifier(cpp::TrailingTypeSpecifierContext *ctx) = 0;
  virtual void exitTrailingTypeSpecifier(cpp::TrailingTypeSpecifierContext *ctx) = 0;

  virtual void enterTypeSpecifierSeq(cpp::TypeSpecifierSeqContext *ctx) = 0;
  virtual void exitTypeSpecifierSeq(cpp::TypeSpecifierSeqContext *ctx) = 0;

  virtual void enterTrailingTypeSpecifierSeq(cpp::TrailingTypeSpecifierSeqContext *ctx) = 0;
  virtual void exitTrailingTypeSpecifierSeq(cpp::TrailingTypeSpecifierSeqContext *ctx) = 0;

  virtual void enterSimpleTypeLengthModifier(cpp::SimpleTypeLengthModifierContext *ctx) = 0;
  virtual void exitSimpleTypeLengthModifier(cpp::SimpleTypeLengthModifierContext *ctx) = 0;

  virtual void enterSimpleTypeSignednessModifier(cpp::SimpleTypeSignednessModifierContext *ctx) = 0;
  virtual void exitSimpleTypeSignednessModifier(cpp::SimpleTypeSignednessModifierContext *ctx) = 0;

  virtual void enterSimpleTypeSpecifier(cpp::SimpleTypeSpecifierContext *ctx) = 0;
  virtual void exitSimpleTypeSpecifier(cpp::SimpleTypeSpecifierContext *ctx) = 0;

  virtual void enterTheTypeName(cpp::TheTypeNameContext *ctx) = 0;
  virtual void exitTheTypeName(cpp::TheTypeNameContext *ctx) = 0;

  virtual void enterDecltypeSpecifier(cpp::DecltypeSpecifierContext *ctx) = 0;
  virtual void exitDecltypeSpecifier(cpp::DecltypeSpecifierContext *ctx) = 0;

  virtual void enterElaboratedTypeSpecifier(cpp::ElaboratedTypeSpecifierContext *ctx) = 0;
  virtual void exitElaboratedTypeSpecifier(cpp::ElaboratedTypeSpecifierContext *ctx) = 0;

  virtual void enterEnumName(cpp::EnumNameContext *ctx) = 0;
  virtual void exitEnumName(cpp::EnumNameContext *ctx) = 0;

  virtual void enterEnumSpecifier(cpp::EnumSpecifierContext *ctx) = 0;
  virtual void exitEnumSpecifier(cpp::EnumSpecifierContext *ctx) = 0;

  virtual void enterEnumHead(cpp::EnumHeadContext *ctx) = 0;
  virtual void exitEnumHead(cpp::EnumHeadContext *ctx) = 0;

  virtual void enterOpaqueEnumDeclaration(cpp::OpaqueEnumDeclarationContext *ctx) = 0;
  virtual void exitOpaqueEnumDeclaration(cpp::OpaqueEnumDeclarationContext *ctx) = 0;

  virtual void enterEnumkey(cpp::EnumkeyContext *ctx) = 0;
  virtual void exitEnumkey(cpp::EnumkeyContext *ctx) = 0;

  virtual void enterEnumbase(cpp::EnumbaseContext *ctx) = 0;
  virtual void exitEnumbase(cpp::EnumbaseContext *ctx) = 0;

  virtual void enterEnumeratorList(cpp::EnumeratorListContext *ctx) = 0;
  virtual void exitEnumeratorList(cpp::EnumeratorListContext *ctx) = 0;

  virtual void enterEnumeratorDefinition(cpp::EnumeratorDefinitionContext *ctx) = 0;
  virtual void exitEnumeratorDefinition(cpp::EnumeratorDefinitionContext *ctx) = 0;

  virtual void enterEnumerator(cpp::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(cpp::EnumeratorContext *ctx) = 0;

  virtual void enterNamespaceName(cpp::NamespaceNameContext *ctx) = 0;
  virtual void exitNamespaceName(cpp::NamespaceNameContext *ctx) = 0;

  virtual void enterOriginalNamespaceName(cpp::OriginalNamespaceNameContext *ctx) = 0;
  virtual void exitOriginalNamespaceName(cpp::OriginalNamespaceNameContext *ctx) = 0;

  virtual void enterNamespaceDefinition(cpp::NamespaceDefinitionContext *ctx) = 0;
  virtual void exitNamespaceDefinition(cpp::NamespaceDefinitionContext *ctx) = 0;

  virtual void enterNamespaceAlias(cpp::NamespaceAliasContext *ctx) = 0;
  virtual void exitNamespaceAlias(cpp::NamespaceAliasContext *ctx) = 0;

  virtual void enterNamespaceAliasDefinition(cpp::NamespaceAliasDefinitionContext *ctx) = 0;
  virtual void exitNamespaceAliasDefinition(cpp::NamespaceAliasDefinitionContext *ctx) = 0;

  virtual void enterQualifiednamespacespecifier(cpp::QualifiednamespacespecifierContext *ctx) = 0;
  virtual void exitQualifiednamespacespecifier(cpp::QualifiednamespacespecifierContext *ctx) = 0;

  virtual void enterUsingDeclaration(cpp::UsingDeclarationContext *ctx) = 0;
  virtual void exitUsingDeclaration(cpp::UsingDeclarationContext *ctx) = 0;

  virtual void enterUsingDirective(cpp::UsingDirectiveContext *ctx) = 0;
  virtual void exitUsingDirective(cpp::UsingDirectiveContext *ctx) = 0;

  virtual void enterAsmDefinition(cpp::AsmDefinitionContext *ctx) = 0;
  virtual void exitAsmDefinition(cpp::AsmDefinitionContext *ctx) = 0;

  virtual void enterLinkageSpecification(cpp::LinkageSpecificationContext *ctx) = 0;
  virtual void exitLinkageSpecification(cpp::LinkageSpecificationContext *ctx) = 0;

  virtual void enterAttributeSpecifierSeq(cpp::AttributeSpecifierSeqContext *ctx) = 0;
  virtual void exitAttributeSpecifierSeq(cpp::AttributeSpecifierSeqContext *ctx) = 0;

  virtual void enterAttributeSpecifier(cpp::AttributeSpecifierContext *ctx) = 0;
  virtual void exitAttributeSpecifier(cpp::AttributeSpecifierContext *ctx) = 0;

  virtual void enterAlignmentspecifier(cpp::AlignmentspecifierContext *ctx) = 0;
  virtual void exitAlignmentspecifier(cpp::AlignmentspecifierContext *ctx) = 0;

  virtual void enterAttributeList(cpp::AttributeListContext *ctx) = 0;
  virtual void exitAttributeList(cpp::AttributeListContext *ctx) = 0;

  virtual void enterAttribute(cpp::AttributeContext *ctx) = 0;
  virtual void exitAttribute(cpp::AttributeContext *ctx) = 0;

  virtual void enterAttributeNamespace(cpp::AttributeNamespaceContext *ctx) = 0;
  virtual void exitAttributeNamespace(cpp::AttributeNamespaceContext *ctx) = 0;

  virtual void enterAttributeArgumentClause(cpp::AttributeArgumentClauseContext *ctx) = 0;
  virtual void exitAttributeArgumentClause(cpp::AttributeArgumentClauseContext *ctx) = 0;

  virtual void enterBalancedTokenSeq(cpp::BalancedTokenSeqContext *ctx) = 0;
  virtual void exitBalancedTokenSeq(cpp::BalancedTokenSeqContext *ctx) = 0;

  virtual void enterBalancedtoken(cpp::BalancedtokenContext *ctx) = 0;
  virtual void exitBalancedtoken(cpp::BalancedtokenContext *ctx) = 0;

  virtual void enterInitDeclaratorList(cpp::InitDeclaratorListContext *ctx) = 0;
  virtual void exitInitDeclaratorList(cpp::InitDeclaratorListContext *ctx) = 0;

  virtual void enterInitDeclarator(cpp::InitDeclaratorContext *ctx) = 0;
  virtual void exitInitDeclarator(cpp::InitDeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(cpp::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(cpp::DeclaratorContext *ctx) = 0;

  virtual void enterPointerDeclarator(cpp::PointerDeclaratorContext *ctx) = 0;
  virtual void exitPointerDeclarator(cpp::PointerDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerDeclarator(cpp::NoPointerDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerDeclarator(cpp::NoPointerDeclaratorContext *ctx) = 0;

  virtual void enterParametersAndQualifiers(cpp::ParametersAndQualifiersContext *ctx) = 0;
  virtual void exitParametersAndQualifiers(cpp::ParametersAndQualifiersContext *ctx) = 0;

  virtual void enterTrailingReturnType(cpp::TrailingReturnTypeContext *ctx) = 0;
  virtual void exitTrailingReturnType(cpp::TrailingReturnTypeContext *ctx) = 0;

  virtual void enterPointerOperator(cpp::PointerOperatorContext *ctx) = 0;
  virtual void exitPointerOperator(cpp::PointerOperatorContext *ctx) = 0;

  virtual void enterCvqualifierseq(cpp::CvqualifierseqContext *ctx) = 0;
  virtual void exitCvqualifierseq(cpp::CvqualifierseqContext *ctx) = 0;

  virtual void enterCvQualifier(cpp::CvQualifierContext *ctx) = 0;
  virtual void exitCvQualifier(cpp::CvQualifierContext *ctx) = 0;

  virtual void enterRefqualifier(cpp::RefqualifierContext *ctx) = 0;
  virtual void exitRefqualifier(cpp::RefqualifierContext *ctx) = 0;

  virtual void enterDeclaratorid(cpp::DeclaratoridContext *ctx) = 0;
  virtual void exitDeclaratorid(cpp::DeclaratoridContext *ctx) = 0;

  virtual void enterTheTypeId(cpp::TheTypeIdContext *ctx) = 0;
  virtual void exitTheTypeId(cpp::TheTypeIdContext *ctx) = 0;

  virtual void enterAbstractDeclarator(cpp::AbstractDeclaratorContext *ctx) = 0;
  virtual void exitAbstractDeclarator(cpp::AbstractDeclaratorContext *ctx) = 0;

  virtual void enterPointerAbstractDeclarator(cpp::PointerAbstractDeclaratorContext *ctx) = 0;
  virtual void exitPointerAbstractDeclarator(cpp::PointerAbstractDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerAbstractDeclarator(cpp::NoPointerAbstractDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerAbstractDeclarator(cpp::NoPointerAbstractDeclaratorContext *ctx) = 0;

  virtual void enterAbstractPackDeclarator(cpp::AbstractPackDeclaratorContext *ctx) = 0;
  virtual void exitAbstractPackDeclarator(cpp::AbstractPackDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerAbstractPackDeclarator(cpp::NoPointerAbstractPackDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerAbstractPackDeclarator(cpp::NoPointerAbstractPackDeclaratorContext *ctx) = 0;

  virtual void enterParameterDeclarationClause(cpp::ParameterDeclarationClauseContext *ctx) = 0;
  virtual void exitParameterDeclarationClause(cpp::ParameterDeclarationClauseContext *ctx) = 0;

  virtual void enterParameterDeclarationList(cpp::ParameterDeclarationListContext *ctx) = 0;
  virtual void exitParameterDeclarationList(cpp::ParameterDeclarationListContext *ctx) = 0;

  virtual void enterParameterDeclaration(cpp::ParameterDeclarationContext *ctx) = 0;
  virtual void exitParameterDeclaration(cpp::ParameterDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(cpp::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(cpp::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionBody(cpp::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(cpp::FunctionBodyContext *ctx) = 0;

  virtual void enterInitializer(cpp::InitializerContext *ctx) = 0;
  virtual void exitInitializer(cpp::InitializerContext *ctx) = 0;

  virtual void enterBraceOrEqualInitializer(cpp::BraceOrEqualInitializerContext *ctx) = 0;
  virtual void exitBraceOrEqualInitializer(cpp::BraceOrEqualInitializerContext *ctx) = 0;

  virtual void enterInitializerClause(cpp::InitializerClauseContext *ctx) = 0;
  virtual void exitInitializerClause(cpp::InitializerClauseContext *ctx) = 0;

  virtual void enterInitializerList(cpp::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(cpp::InitializerListContext *ctx) = 0;

  virtual void enterBracedInitList(cpp::BracedInitListContext *ctx) = 0;
  virtual void exitBracedInitList(cpp::BracedInitListContext *ctx) = 0;

  virtual void enterClassName(cpp::ClassNameContext *ctx) = 0;
  virtual void exitClassName(cpp::ClassNameContext *ctx) = 0;

  virtual void enterClassSpecifier(cpp::ClassSpecifierContext *ctx) = 0;
  virtual void exitClassSpecifier(cpp::ClassSpecifierContext *ctx) = 0;

  virtual void enterClassHead(cpp::ClassHeadContext *ctx) = 0;
  virtual void exitClassHead(cpp::ClassHeadContext *ctx) = 0;

  virtual void enterClassHeadName(cpp::ClassHeadNameContext *ctx) = 0;
  virtual void exitClassHeadName(cpp::ClassHeadNameContext *ctx) = 0;

  virtual void enterClassVirtSpecifier(cpp::ClassVirtSpecifierContext *ctx) = 0;
  virtual void exitClassVirtSpecifier(cpp::ClassVirtSpecifierContext *ctx) = 0;

  virtual void enterClassKey(cpp::ClassKeyContext *ctx) = 0;
  virtual void exitClassKey(cpp::ClassKeyContext *ctx) = 0;

  virtual void enterMemberSpecification(cpp::MemberSpecificationContext *ctx) = 0;
  virtual void exitMemberSpecification(cpp::MemberSpecificationContext *ctx) = 0;

  virtual void enterMemberdeclaration(cpp::MemberdeclarationContext *ctx) = 0;
  virtual void exitMemberdeclaration(cpp::MemberdeclarationContext *ctx) = 0;

  virtual void enterMemberDeclaratorList(cpp::MemberDeclaratorListContext *ctx) = 0;
  virtual void exitMemberDeclaratorList(cpp::MemberDeclaratorListContext *ctx) = 0;

  virtual void enterMemberDeclarator(cpp::MemberDeclaratorContext *ctx) = 0;
  virtual void exitMemberDeclarator(cpp::MemberDeclaratorContext *ctx) = 0;

  virtual void enterVirtualSpecifierSeq(cpp::VirtualSpecifierSeqContext *ctx) = 0;
  virtual void exitVirtualSpecifierSeq(cpp::VirtualSpecifierSeqContext *ctx) = 0;

  virtual void enterVirtualSpecifier(cpp::VirtualSpecifierContext *ctx) = 0;
  virtual void exitVirtualSpecifier(cpp::VirtualSpecifierContext *ctx) = 0;

  virtual void enterPureSpecifier(cpp::PureSpecifierContext *ctx) = 0;
  virtual void exitPureSpecifier(cpp::PureSpecifierContext *ctx) = 0;

  virtual void enterBaseClause(cpp::BaseClauseContext *ctx) = 0;
  virtual void exitBaseClause(cpp::BaseClauseContext *ctx) = 0;

  virtual void enterBaseSpecifierList(cpp::BaseSpecifierListContext *ctx) = 0;
  virtual void exitBaseSpecifierList(cpp::BaseSpecifierListContext *ctx) = 0;

  virtual void enterBaseSpecifier(cpp::BaseSpecifierContext *ctx) = 0;
  virtual void exitBaseSpecifier(cpp::BaseSpecifierContext *ctx) = 0;

  virtual void enterClassOrDeclType(cpp::ClassOrDeclTypeContext *ctx) = 0;
  virtual void exitClassOrDeclType(cpp::ClassOrDeclTypeContext *ctx) = 0;

  virtual void enterBaseTypeSpecifier(cpp::BaseTypeSpecifierContext *ctx) = 0;
  virtual void exitBaseTypeSpecifier(cpp::BaseTypeSpecifierContext *ctx) = 0;

  virtual void enterAccessSpecifier(cpp::AccessSpecifierContext *ctx) = 0;
  virtual void exitAccessSpecifier(cpp::AccessSpecifierContext *ctx) = 0;

  virtual void enterConversionFunctionId(cpp::ConversionFunctionIdContext *ctx) = 0;
  virtual void exitConversionFunctionId(cpp::ConversionFunctionIdContext *ctx) = 0;

  virtual void enterConversionTypeId(cpp::ConversionTypeIdContext *ctx) = 0;
  virtual void exitConversionTypeId(cpp::ConversionTypeIdContext *ctx) = 0;

  virtual void enterConversionDeclarator(cpp::ConversionDeclaratorContext *ctx) = 0;
  virtual void exitConversionDeclarator(cpp::ConversionDeclaratorContext *ctx) = 0;

  virtual void enterConstructorInitializer(cpp::ConstructorInitializerContext *ctx) = 0;
  virtual void exitConstructorInitializer(cpp::ConstructorInitializerContext *ctx) = 0;

  virtual void enterMemInitializerList(cpp::MemInitializerListContext *ctx) = 0;
  virtual void exitMemInitializerList(cpp::MemInitializerListContext *ctx) = 0;

  virtual void enterMemInitializer(cpp::MemInitializerContext *ctx) = 0;
  virtual void exitMemInitializer(cpp::MemInitializerContext *ctx) = 0;

  virtual void enterMeminitializerid(cpp::MeminitializeridContext *ctx) = 0;
  virtual void exitMeminitializerid(cpp::MeminitializeridContext *ctx) = 0;

  virtual void enterOperatorFunctionId(cpp::OperatorFunctionIdContext *ctx) = 0;
  virtual void exitOperatorFunctionId(cpp::OperatorFunctionIdContext *ctx) = 0;

  virtual void enterLiteralOperatorId(cpp::LiteralOperatorIdContext *ctx) = 0;
  virtual void exitLiteralOperatorId(cpp::LiteralOperatorIdContext *ctx) = 0;

  virtual void enterTemplateDeclaration(cpp::TemplateDeclarationContext *ctx) = 0;
  virtual void exitTemplateDeclaration(cpp::TemplateDeclarationContext *ctx) = 0;

  virtual void enterTemplateparameterList(cpp::TemplateparameterListContext *ctx) = 0;
  virtual void exitTemplateparameterList(cpp::TemplateparameterListContext *ctx) = 0;

  virtual void enterTemplateParameter(cpp::TemplateParameterContext *ctx) = 0;
  virtual void exitTemplateParameter(cpp::TemplateParameterContext *ctx) = 0;

  virtual void enterTypeParameter(cpp::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(cpp::TypeParameterContext *ctx) = 0;

  virtual void enterSimpleTemplateId(cpp::SimpleTemplateIdContext *ctx) = 0;
  virtual void exitSimpleTemplateId(cpp::SimpleTemplateIdContext *ctx) = 0;

  virtual void enterTemplateId(cpp::TemplateIdContext *ctx) = 0;
  virtual void exitTemplateId(cpp::TemplateIdContext *ctx) = 0;

  virtual void enterTemplateName(cpp::TemplateNameContext *ctx) = 0;
  virtual void exitTemplateName(cpp::TemplateNameContext *ctx) = 0;

  virtual void enterTemplateArgumentList(cpp::TemplateArgumentListContext *ctx) = 0;
  virtual void exitTemplateArgumentList(cpp::TemplateArgumentListContext *ctx) = 0;

  virtual void enterTemplateArgument(cpp::TemplateArgumentContext *ctx) = 0;
  virtual void exitTemplateArgument(cpp::TemplateArgumentContext *ctx) = 0;

  virtual void enterTypeNameSpecifier(cpp::TypeNameSpecifierContext *ctx) = 0;
  virtual void exitTypeNameSpecifier(cpp::TypeNameSpecifierContext *ctx) = 0;

  virtual void enterExplicitInstantiation(cpp::ExplicitInstantiationContext *ctx) = 0;
  virtual void exitExplicitInstantiation(cpp::ExplicitInstantiationContext *ctx) = 0;

  virtual void enterExplicitSpecialization(cpp::ExplicitSpecializationContext *ctx) = 0;
  virtual void exitExplicitSpecialization(cpp::ExplicitSpecializationContext *ctx) = 0;

  virtual void enterTryBlock(cpp::TryBlockContext *ctx) = 0;
  virtual void exitTryBlock(cpp::TryBlockContext *ctx) = 0;

  virtual void enterFunctionTryBlock(cpp::FunctionTryBlockContext *ctx) = 0;
  virtual void exitFunctionTryBlock(cpp::FunctionTryBlockContext *ctx) = 0;

  virtual void enterHandlerSeq(cpp::HandlerSeqContext *ctx) = 0;
  virtual void exitHandlerSeq(cpp::HandlerSeqContext *ctx) = 0;

  virtual void enterHandler(cpp::HandlerContext *ctx) = 0;
  virtual void exitHandler(cpp::HandlerContext *ctx) = 0;

  virtual void enterExceptionDeclaration(cpp::ExceptionDeclarationContext *ctx) = 0;
  virtual void exitExceptionDeclaration(cpp::ExceptionDeclarationContext *ctx) = 0;

  virtual void enterThrowExpression(cpp::ThrowExpressionContext *ctx) = 0;
  virtual void exitThrowExpression(cpp::ThrowExpressionContext *ctx) = 0;

  virtual void enterExceptionSpecification(cpp::ExceptionSpecificationContext *ctx) = 0;
  virtual void exitExceptionSpecification(cpp::ExceptionSpecificationContext *ctx) = 0;

  virtual void enterDynamicExceptionSpecification(cpp::DynamicExceptionSpecificationContext *ctx) = 0;
  virtual void exitDynamicExceptionSpecification(cpp::DynamicExceptionSpecificationContext *ctx) = 0;

  virtual void enterTypeIdList(cpp::TypeIdListContext *ctx) = 0;
  virtual void exitTypeIdList(cpp::TypeIdListContext *ctx) = 0;

  virtual void enterNoeExceptSpecification(cpp::NoeExceptSpecificationContext *ctx) = 0;
  virtual void exitNoeExceptSpecification(cpp::NoeExceptSpecificationContext *ctx) = 0;

  virtual void enterTheOperator(cpp::TheOperatorContext *ctx) = 0;
  virtual void exitTheOperator(cpp::TheOperatorContext *ctx) = 0;

  virtual void enterLiteral(cpp::LiteralContext *ctx) = 0;
  virtual void exitLiteral(cpp::LiteralContext *ctx) = 0;


};


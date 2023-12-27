
// Generated from src/grammar/cpp.g4 by ANTLR 4.7.1



#include "cpp.h"


using namespace antlrcpp;
using namespace antlr4;

cpp::cpp(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

cpp::~cpp() {
  delete _interpreter;
}

std::string cpp::getGrammarFileName() const {
  return "cpp.g4";
}

const std::vector<std::string>& cpp::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& cpp::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationUnitContext ------------------------------------------------------------------

cpp::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TranslationUnitContext::EOF() {
  return getToken(cpp::EOF, 0);
}

cpp::DeclarationseqContext* cpp::TranslationUnitContext::declarationseq() {
  return getRuleContext<cpp::DeclarationseqContext>(0);
}


size_t cpp::TranslationUnitContext::getRuleIndex() const {
  return cpp::RuleTranslationUnit;
}


cpp::TranslationUnitContext* cpp::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, cpp::RuleTranslationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::Alignas)
      | (1ULL << cpp::Asm)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Namespace)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Template - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128)))) != 0)) {
      setState(384);
      dynamic_cast<TranslationUnitContext *>(_localctx)->ds = declarationseq();

              dynamic_cast<TranslationUnitContext *>(_localctx)->resultDocText =  dynamic_cast<TranslationUnitContext *>(_localctx)->ds->resultDocText;
          
    }
    setState(389);
    match(cpp::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

cpp::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::LiteralContext *> cpp::PrimaryExpressionContext::literal() {
  return getRuleContexts<cpp::LiteralContext>();
}

cpp::LiteralContext* cpp::PrimaryExpressionContext::literal(size_t i) {
  return getRuleContext<cpp::LiteralContext>(i);
}

tree::TerminalNode* cpp::PrimaryExpressionContext::This() {
  return getToken(cpp::This, 0);
}

tree::TerminalNode* cpp::PrimaryExpressionContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ExpressionContext* cpp::PrimaryExpressionContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

tree::TerminalNode* cpp::PrimaryExpressionContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::IdExpressionContext* cpp::PrimaryExpressionContext::idExpression() {
  return getRuleContext<cpp::IdExpressionContext>(0);
}

cpp::LambdaExpressionContext* cpp::PrimaryExpressionContext::lambdaExpression() {
  return getRuleContext<cpp::LambdaExpressionContext>(0);
}


size_t cpp::PrimaryExpressionContext::getRuleIndex() const {
  return cpp::RulePrimaryExpression;
}


cpp::PrimaryExpressionContext* cpp::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, cpp::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(403);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::IntegerLiteral:
      case cpp::CharacterLiteral:
      case cpp::FloatingLiteral:
      case cpp::StringLiteral:
      case cpp::BooleanLiteral:
      case cpp::PointerLiteral:
      case cpp::UserDefinedLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(392); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(391);
                  literal();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(394); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case cpp::This: {
        enterOuterAlt(_localctx, 2);
        setState(396);
        match(cpp::This);
        break;
      }

      case cpp::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(397);
        match(cpp::LeftParen);
        setState(398);
        expression();
        setState(399);
        match(cpp::RightParen);
        break;
      }

      case cpp::Decltype:
      case cpp::Operator:
      case cpp::Tilde:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(401);
        idExpression();
        break;
      }

      case cpp::LeftBracket: {
        enterOuterAlt(_localctx, 5);
        setState(402);
        lambdaExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdExpressionContext ------------------------------------------------------------------

cpp::IdExpressionContext::IdExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::UnqualifiedIdContext* cpp::IdExpressionContext::unqualifiedId() {
  return getRuleContext<cpp::UnqualifiedIdContext>(0);
}

cpp::QualifiedIdContext* cpp::IdExpressionContext::qualifiedId() {
  return getRuleContext<cpp::QualifiedIdContext>(0);
}


size_t cpp::IdExpressionContext::getRuleIndex() const {
  return cpp::RuleIdExpression;
}


cpp::IdExpressionContext* cpp::idExpression() {
  IdExpressionContext *_localctx = _tracker.createInstance<IdExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, cpp::RuleIdExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(407);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(405);
      unqualifiedId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(406);
      qualifiedId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedIdContext ------------------------------------------------------------------

cpp::UnqualifiedIdContext::UnqualifiedIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::UnqualifiedIdContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::OperatorFunctionIdContext* cpp::UnqualifiedIdContext::operatorFunctionId() {
  return getRuleContext<cpp::OperatorFunctionIdContext>(0);
}

cpp::ConversionFunctionIdContext* cpp::UnqualifiedIdContext::conversionFunctionId() {
  return getRuleContext<cpp::ConversionFunctionIdContext>(0);
}

cpp::LiteralOperatorIdContext* cpp::UnqualifiedIdContext::literalOperatorId() {
  return getRuleContext<cpp::LiteralOperatorIdContext>(0);
}

tree::TerminalNode* cpp::UnqualifiedIdContext::Tilde() {
  return getToken(cpp::Tilde, 0);
}

cpp::ClassNameContext* cpp::UnqualifiedIdContext::className() {
  return getRuleContext<cpp::ClassNameContext>(0);
}

cpp::DecltypeSpecifierContext* cpp::UnqualifiedIdContext::decltypeSpecifier() {
  return getRuleContext<cpp::DecltypeSpecifierContext>(0);
}

cpp::TemplateIdContext* cpp::UnqualifiedIdContext::templateId() {
  return getRuleContext<cpp::TemplateIdContext>(0);
}


size_t cpp::UnqualifiedIdContext::getRuleIndex() const {
  return cpp::RuleUnqualifiedId;
}


cpp::UnqualifiedIdContext* cpp::unqualifiedId() {
  UnqualifiedIdContext *_localctx = _tracker.createInstance<UnqualifiedIdContext>(_ctx, getState());
  enterRule(_localctx, 6, cpp::RuleUnqualifiedId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(419);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(409);
      match(cpp::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(410);
      operatorFunctionId();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(411);
      conversionFunctionId();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(412);
      literalOperatorId();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(413);
      match(cpp::Tilde);
      setState(416);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case cpp::Identifier: {
          setState(414);
          className();
          break;
        }

        case cpp::Decltype: {
          setState(415);
          decltypeSpecifier();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(418);
      templateId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedIdContext ------------------------------------------------------------------

cpp::QualifiedIdContext::QualifiedIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::NestedNameSpecifierContext* cpp::QualifiedIdContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

cpp::UnqualifiedIdContext* cpp::QualifiedIdContext::unqualifiedId() {
  return getRuleContext<cpp::UnqualifiedIdContext>(0);
}

tree::TerminalNode* cpp::QualifiedIdContext::Template() {
  return getToken(cpp::Template, 0);
}


size_t cpp::QualifiedIdContext::getRuleIndex() const {
  return cpp::RuleQualifiedId;
}


cpp::QualifiedIdContext* cpp::qualifiedId() {
  QualifiedIdContext *_localctx = _tracker.createInstance<QualifiedIdContext>(_ctx, getState());
  enterRule(_localctx, 8, cpp::RuleQualifiedId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    nestedNameSpecifier(0);
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Template) {
      setState(422);
      match(cpp::Template);
    }
    setState(425);
    unqualifiedId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedNameSpecifierContext ------------------------------------------------------------------

cpp::NestedNameSpecifierContext::NestedNameSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NestedNameSpecifierContext::Doublecolon() {
  return getToken(cpp::Doublecolon, 0);
}

cpp::TheTypeNameContext* cpp::NestedNameSpecifierContext::theTypeName() {
  return getRuleContext<cpp::TheTypeNameContext>(0);
}

cpp::NamespaceNameContext* cpp::NestedNameSpecifierContext::namespaceName() {
  return getRuleContext<cpp::NamespaceNameContext>(0);
}

cpp::DecltypeSpecifierContext* cpp::NestedNameSpecifierContext::decltypeSpecifier() {
  return getRuleContext<cpp::DecltypeSpecifierContext>(0);
}

cpp::NestedNameSpecifierContext* cpp::NestedNameSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* cpp::NestedNameSpecifierContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::SimpleTemplateIdContext* cpp::NestedNameSpecifierContext::simpleTemplateId() {
  return getRuleContext<cpp::SimpleTemplateIdContext>(0);
}

tree::TerminalNode* cpp::NestedNameSpecifierContext::Template() {
  return getToken(cpp::Template, 0);
}


size_t cpp::NestedNameSpecifierContext::getRuleIndex() const {
  return cpp::RuleNestedNameSpecifier;
}



cpp::NestedNameSpecifierContext* cpp::nestedNameSpecifier() {
   return nestedNameSpecifier(0);
}

cpp::NestedNameSpecifierContext* cpp::nestedNameSpecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cpp::NestedNameSpecifierContext *_localctx = _tracker.createInstance<NestedNameSpecifierContext>(_ctx, parentState);
  cpp::NestedNameSpecifierContext *previousContext = _localctx;
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, cpp::RuleNestedNameSpecifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(431);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(428);
      theTypeName();
      break;
    }

    case 2: {
      setState(429);
      namespaceName();
      break;
    }

    case 3: {
      setState(430);
      decltypeSpecifier();
      break;
    }

    }
    setState(433);
    match(cpp::Doublecolon);
    _ctx->stop = _input->LT(-1);
    setState(446);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NestedNameSpecifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNestedNameSpecifier);
        setState(435);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(441);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(436);
          match(cpp::Identifier);
          break;
        }

        case 2: {
          setState(438);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == cpp::Template) {
            setState(437);
            match(cpp::Template);
          }
          setState(440);
          simpleTemplateId();
          break;
        }

        }
        setState(443);
        match(cpp::Doublecolon); 
      }
      setState(448);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

cpp::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::LambdaIntroducerContext* cpp::LambdaExpressionContext::lambdaIntroducer() {
  return getRuleContext<cpp::LambdaIntroducerContext>(0);
}

cpp::CompoundStatementContext* cpp::LambdaExpressionContext::compoundStatement() {
  return getRuleContext<cpp::CompoundStatementContext>(0);
}

cpp::LambdaDeclaratorContext* cpp::LambdaExpressionContext::lambdaDeclarator() {
  return getRuleContext<cpp::LambdaDeclaratorContext>(0);
}


size_t cpp::LambdaExpressionContext::getRuleIndex() const {
  return cpp::RuleLambdaExpression;
}


cpp::LambdaExpressionContext* cpp::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, cpp::RuleLambdaExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    lambdaIntroducer();
    setState(451);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::LeftParen) {
      setState(450);
      lambdaDeclarator();
    }
    setState(453);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaIntroducerContext ------------------------------------------------------------------

cpp::LambdaIntroducerContext::LambdaIntroducerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::LambdaIntroducerContext::LeftBracket() {
  return getToken(cpp::LeftBracket, 0);
}

tree::TerminalNode* cpp::LambdaIntroducerContext::RightBracket() {
  return getToken(cpp::RightBracket, 0);
}

cpp::LambdaCaptureContext* cpp::LambdaIntroducerContext::lambdaCapture() {
  return getRuleContext<cpp::LambdaCaptureContext>(0);
}


size_t cpp::LambdaIntroducerContext::getRuleIndex() const {
  return cpp::RuleLambdaIntroducer;
}


cpp::LambdaIntroducerContext* cpp::lambdaIntroducer() {
  LambdaIntroducerContext *_localctx = _tracker.createInstance<LambdaIntroducerContext>(_ctx, getState());
  enterRule(_localctx, 14, cpp::RuleLambdaIntroducer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(cpp::LeftBracket);
    setState(457);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (cpp::This - 69))
      | (1ULL << (cpp::And - 69))
      | (1ULL << (cpp::Assign - 69))
      | (1ULL << (cpp::Identifier - 69)))) != 0)) {
      setState(456);
      lambdaCapture();
    }
    setState(459);
    match(cpp::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaCaptureContext ------------------------------------------------------------------

cpp::LambdaCaptureContext::LambdaCaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::CaptureListContext* cpp::LambdaCaptureContext::captureList() {
  return getRuleContext<cpp::CaptureListContext>(0);
}

cpp::CaptureDefaultContext* cpp::LambdaCaptureContext::captureDefault() {
  return getRuleContext<cpp::CaptureDefaultContext>(0);
}

tree::TerminalNode* cpp::LambdaCaptureContext::Comma() {
  return getToken(cpp::Comma, 0);
}


size_t cpp::LambdaCaptureContext::getRuleIndex() const {
  return cpp::RuleLambdaCapture;
}


cpp::LambdaCaptureContext* cpp::lambdaCapture() {
  LambdaCaptureContext *_localctx = _tracker.createInstance<LambdaCaptureContext>(_ctx, getState());
  enterRule(_localctx, 16, cpp::RuleLambdaCapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(467);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(461);
      captureList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(462);
      captureDefault();
      setState(465);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Comma) {
        setState(463);
        match(cpp::Comma);
        setState(464);
        captureList();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaptureDefaultContext ------------------------------------------------------------------

cpp::CaptureDefaultContext::CaptureDefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::CaptureDefaultContext::And() {
  return getToken(cpp::And, 0);
}

tree::TerminalNode* cpp::CaptureDefaultContext::Assign() {
  return getToken(cpp::Assign, 0);
}


size_t cpp::CaptureDefaultContext::getRuleIndex() const {
  return cpp::RuleCaptureDefault;
}


cpp::CaptureDefaultContext* cpp::captureDefault() {
  CaptureDefaultContext *_localctx = _tracker.createInstance<CaptureDefaultContext>(_ctx, getState());
  enterRule(_localctx, 18, cpp::RuleCaptureDefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    _la = _input->LA(1);
    if (!(_la == cpp::And

    || _la == cpp::Assign)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaptureListContext ------------------------------------------------------------------

cpp::CaptureListContext::CaptureListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::CaptureContext *> cpp::CaptureListContext::capture() {
  return getRuleContexts<cpp::CaptureContext>();
}

cpp::CaptureContext* cpp::CaptureListContext::capture(size_t i) {
  return getRuleContext<cpp::CaptureContext>(i);
}

std::vector<tree::TerminalNode *> cpp::CaptureListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::CaptureListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}

tree::TerminalNode* cpp::CaptureListContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}


size_t cpp::CaptureListContext::getRuleIndex() const {
  return cpp::RuleCaptureList;
}


cpp::CaptureListContext* cpp::captureList() {
  CaptureListContext *_localctx = _tracker.createInstance<CaptureListContext>(_ctx, getState());
  enterRule(_localctx, 20, cpp::RuleCaptureList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    capture();
    setState(476);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(472);
      match(cpp::Comma);
      setState(473);
      capture();
      setState(478);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(480);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(479);
      match(cpp::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaptureContext ------------------------------------------------------------------

cpp::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::SimpleCaptureContext* cpp::CaptureContext::simpleCapture() {
  return getRuleContext<cpp::SimpleCaptureContext>(0);
}

cpp::InitcaptureContext* cpp::CaptureContext::initcapture() {
  return getRuleContext<cpp::InitcaptureContext>(0);
}


size_t cpp::CaptureContext::getRuleIndex() const {
  return cpp::RuleCapture;
}


cpp::CaptureContext* cpp::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 22, cpp::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(484);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(482);
      simpleCapture();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(483);
      initcapture();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleCaptureContext ------------------------------------------------------------------

cpp::SimpleCaptureContext::SimpleCaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::SimpleCaptureContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

tree::TerminalNode* cpp::SimpleCaptureContext::And() {
  return getToken(cpp::And, 0);
}

tree::TerminalNode* cpp::SimpleCaptureContext::This() {
  return getToken(cpp::This, 0);
}


size_t cpp::SimpleCaptureContext::getRuleIndex() const {
  return cpp::RuleSimpleCapture;
}


cpp::SimpleCaptureContext* cpp::simpleCapture() {
  SimpleCaptureContext *_localctx = _tracker.createInstance<SimpleCaptureContext>(_ctx, getState());
  enterRule(_localctx, 24, cpp::RuleSimpleCapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(491);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::And:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(487);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::And) {
          setState(486);
          match(cpp::And);
        }
        setState(489);
        match(cpp::Identifier);
        break;
      }

      case cpp::This: {
        enterOuterAlt(_localctx, 2);
        setState(490);
        match(cpp::This);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitcaptureContext ------------------------------------------------------------------

cpp::InitcaptureContext::InitcaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::InitcaptureContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::InitializerContext* cpp::InitcaptureContext::initializer() {
  return getRuleContext<cpp::InitializerContext>(0);
}

tree::TerminalNode* cpp::InitcaptureContext::And() {
  return getToken(cpp::And, 0);
}


size_t cpp::InitcaptureContext::getRuleIndex() const {
  return cpp::RuleInitcapture;
}


cpp::InitcaptureContext* cpp::initcapture() {
  InitcaptureContext *_localctx = _tracker.createInstance<InitcaptureContext>(_ctx, getState());
  enterRule(_localctx, 26, cpp::RuleInitcapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::And) {
      setState(493);
      match(cpp::And);
    }
    setState(496);
    match(cpp::Identifier);
    setState(497);
    initializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaDeclaratorContext ------------------------------------------------------------------

cpp::LambdaDeclaratorContext::LambdaDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::LambdaDeclaratorContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::LambdaDeclaratorContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::ParameterDeclarationClauseContext* cpp::LambdaDeclaratorContext::parameterDeclarationClause() {
  return getRuleContext<cpp::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode* cpp::LambdaDeclaratorContext::Mutable() {
  return getToken(cpp::Mutable, 0);
}

cpp::ExceptionSpecificationContext* cpp::LambdaDeclaratorContext::exceptionSpecification() {
  return getRuleContext<cpp::ExceptionSpecificationContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::LambdaDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::TrailingReturnTypeContext* cpp::LambdaDeclaratorContext::trailingReturnType() {
  return getRuleContext<cpp::TrailingReturnTypeContext>(0);
}


size_t cpp::LambdaDeclaratorContext::getRuleIndex() const {
  return cpp::RuleLambdaDeclarator;
}


cpp::LambdaDeclaratorContext* cpp::lambdaDeclarator() {
  LambdaDeclaratorContext *_localctx = _tracker.createInstance<LambdaDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 28, cpp::RuleLambdaDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    match(cpp::LeftParen);
    setState(501);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & ((1ULL << (cpp::Alignas - 10))
      | (1ULL << (cpp::Auto - 10))
      | (1ULL << (cpp::Bool - 10))
      | (1ULL << (cpp::Char - 10))
      | (1ULL << (cpp::Char16 - 10))
      | (1ULL << (cpp::Char32 - 10))
      | (1ULL << (cpp::Class - 10))
      | (1ULL << (cpp::Const - 10))
      | (1ULL << (cpp::Constexpr - 10))
      | (1ULL << (cpp::Decltype - 10))
      | (1ULL << (cpp::Double - 10))
      | (1ULL << (cpp::Enum - 10))
      | (1ULL << (cpp::Explicit - 10))
      | (1ULL << (cpp::Extern - 10))
      | (1ULL << (cpp::Float - 10))
      | (1ULL << (cpp::Friend - 10))
      | (1ULL << (cpp::Inline - 10))
      | (1ULL << (cpp::Int - 10))
      | (1ULL << (cpp::Long - 10))
      | (1ULL << (cpp::Mutable - 10))
      | (1ULL << (cpp::Register - 10))
      | (1ULL << (cpp::Short - 10))
      | (1ULL << (cpp::Signed - 10))
      | (1ULL << (cpp::Static - 10))
      | (1ULL << (cpp::Struct - 10))
      | (1ULL << (cpp::Thread_local - 10)))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (cpp::Typedef - 74))
      | (1ULL << (cpp::Typename_ - 74))
      | (1ULL << (cpp::Union - 74))
      | (1ULL << (cpp::Unsigned - 74))
      | (1ULL << (cpp::Virtual - 74))
      | (1ULL << (cpp::Void - 74))
      | (1ULL << (cpp::Volatile - 74))
      | (1ULL << (cpp::Wchar - 74))
      | (1ULL << (cpp::LeftBracket - 74))
      | (1ULL << (cpp::Doublecolon - 74))
      | (1ULL << (cpp::Identifier - 74)))) != 0)) {
      setState(500);
      parameterDeclarationClause();
    }
    setState(503);
    match(cpp::RightParen);
    setState(505);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Mutable) {
      setState(504);
      match(cpp::Mutable);
    }
    setState(508);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Noexcept

    || _la == cpp::Throw) {
      setState(507);
      exceptionSpecification();
    }
    setState(511);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(510);
      attributeSpecifierSeq();
    }
    setState(514);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Arrow) {
      setState(513);
      trailingReturnType();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

cpp::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::PrimaryExpressionContext* cpp::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<cpp::PrimaryExpressionContext>(0);
}

cpp::SimpleTypeSpecifierContext* cpp::PostfixExpressionContext::simpleTypeSpecifier() {
  return getRuleContext<cpp::SimpleTypeSpecifierContext>(0);
}

cpp::TypeNameSpecifierContext* cpp::PostfixExpressionContext::typeNameSpecifier() {
  return getRuleContext<cpp::TypeNameSpecifierContext>(0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::BracedInitListContext* cpp::PostfixExpressionContext::bracedInitList() {
  return getRuleContext<cpp::BracedInitListContext>(0);
}

cpp::ExpressionListContext* cpp::PostfixExpressionContext::expressionList() {
  return getRuleContext<cpp::ExpressionListContext>(0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Less() {
  return getToken(cpp::Less, 0);
}

cpp::TheTypeIdContext* cpp::PostfixExpressionContext::theTypeId() {
  return getRuleContext<cpp::TheTypeIdContext>(0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Greater() {
  return getToken(cpp::Greater, 0);
}

cpp::ExpressionContext* cpp::PostfixExpressionContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Dynamic_cast() {
  return getToken(cpp::Dynamic_cast, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Static_cast() {
  return getToken(cpp::Static_cast, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Reinterpret_cast() {
  return getToken(cpp::Reinterpret_cast, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Const_cast() {
  return getToken(cpp::Const_cast, 0);
}

cpp::TypeIdOfTheTypeIdContext* cpp::PostfixExpressionContext::typeIdOfTheTypeId() {
  return getRuleContext<cpp::TypeIdOfTheTypeIdContext>(0);
}

cpp::PostfixExpressionContext* cpp::PostfixExpressionContext::postfixExpression() {
  return getRuleContext<cpp::PostfixExpressionContext>(0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::LeftBracket() {
  return getToken(cpp::LeftBracket, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::RightBracket() {
  return getToken(cpp::RightBracket, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Dot() {
  return getToken(cpp::Dot, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Arrow() {
  return getToken(cpp::Arrow, 0);
}

cpp::IdExpressionContext* cpp::PostfixExpressionContext::idExpression() {
  return getRuleContext<cpp::IdExpressionContext>(0);
}

cpp::PseudoDestructorNameContext* cpp::PostfixExpressionContext::pseudoDestructorName() {
  return getRuleContext<cpp::PseudoDestructorNameContext>(0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::Template() {
  return getToken(cpp::Template, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::PlusPlus() {
  return getToken(cpp::PlusPlus, 0);
}

tree::TerminalNode* cpp::PostfixExpressionContext::MinusMinus() {
  return getToken(cpp::MinusMinus, 0);
}


size_t cpp::PostfixExpressionContext::getRuleIndex() const {
  return cpp::RulePostfixExpression;
}



cpp::PostfixExpressionContext* cpp::postfixExpression() {
   return postfixExpression(0);
}

cpp::PostfixExpressionContext* cpp::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cpp::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  cpp::PostfixExpressionContext *previousContext = _localctx;
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, cpp::RulePostfixExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(546);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(517);
      primaryExpression();
      break;
    }

    case 2: {
      setState(520);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case cpp::Auto:
        case cpp::Bool:
        case cpp::Char:
        case cpp::Char16:
        case cpp::Char32:
        case cpp::Decltype:
        case cpp::Double:
        case cpp::Float:
        case cpp::Int:
        case cpp::Long:
        case cpp::Short:
        case cpp::Signed:
        case cpp::Unsigned:
        case cpp::Void:
        case cpp::Wchar:
        case cpp::Doublecolon:
        case cpp::Identifier: {
          setState(518);
          simpleTypeSpecifier();
          break;
        }

        case cpp::Typename_: {
          setState(519);
          typeNameSpecifier();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(528);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case cpp::LeftParen: {
          setState(522);
          match(cpp::LeftParen);
          setState(524);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
            | (1ULL << cpp::CharacterLiteral)
            | (1ULL << cpp::FloatingLiteral)
            | (1ULL << cpp::StringLiteral)
            | (1ULL << cpp::BooleanLiteral)
            | (1ULL << cpp::PointerLiteral)
            | (1ULL << cpp::UserDefinedLiteral)
            | (1ULL << cpp::Alignof)
            | (1ULL << cpp::Auto)
            | (1ULL << cpp::Bool)
            | (1ULL << cpp::Char)
            | (1ULL << cpp::Char16)
            | (1ULL << cpp::Char32)
            | (1ULL << cpp::Const_cast)
            | (1ULL << cpp::Decltype)
            | (1ULL << cpp::Delete)
            | (1ULL << cpp::Double)
            | (1ULL << cpp::Dynamic_cast)
            | (1ULL << cpp::Float)
            | (1ULL << cpp::Int)
            | (1ULL << cpp::Long)
            | (1ULL << cpp::New)
            | (1ULL << cpp::Noexcept)
            | (1ULL << cpp::Operator)
            | (1ULL << cpp::Reinterpret_cast)
            | (1ULL << cpp::Short)
            | (1ULL << cpp::Signed)
            | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
            | (1ULL << (cpp::This - 65))
            | (1ULL << (cpp::Throw - 65))
            | (1ULL << (cpp::Typeid_ - 65))
            | (1ULL << (cpp::Typename_ - 65))
            | (1ULL << (cpp::Unsigned - 65))
            | (1ULL << (cpp::Void - 65))
            | (1ULL << (cpp::Wchar - 65))
            | (1ULL << (cpp::LeftParen - 65))
            | (1ULL << (cpp::LeftBracket - 65))
            | (1ULL << (cpp::LeftBrace - 65))
            | (1ULL << (cpp::Plus - 65))
            | (1ULL << (cpp::Minus - 65))
            | (1ULL << (cpp::Star - 65))
            | (1ULL << (cpp::And - 65))
            | (1ULL << (cpp::Or - 65))
            | (1ULL << (cpp::Tilde - 65))
            | (1ULL << (cpp::Not - 65))
            | (1ULL << (cpp::PlusPlus - 65))
            | (1ULL << (cpp::MinusMinus - 65))
            | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
            setState(523);
            expressionList();
          }
          setState(526);
          match(cpp::RightParen);
          break;
        }

        case cpp::LeftBrace: {
          setState(527);
          bracedInitList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      setState(530);
      _la = _input->LA(1);
      if (!(((((_la - 24) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 24)) & ((1ULL << (cpp::Const_cast - 24))
        | (1ULL << (cpp::Dynamic_cast - 24))
        | (1ULL << (cpp::Reinterpret_cast - 24))
        | (1ULL << (cpp::Static_cast - 24)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(531);
      match(cpp::Less);
      setState(532);
      theTypeId();
      setState(533);
      match(cpp::Greater);
      setState(534);
      match(cpp::LeftParen);
      setState(535);
      expression();
      setState(536);
      match(cpp::RightParen);
      break;
    }

    case 4: {
      setState(538);
      typeIdOfTheTypeId();
      setState(539);
      match(cpp::LeftParen);
      setState(542);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(540);
        expression();
        break;
      }

      case 2: {
        setState(541);
        theTypeId();
        break;
      }

      }
      setState(544);
      match(cpp::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(575);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(573);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(548);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(549);
          match(cpp::LeftBracket);
          setState(552);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case cpp::IntegerLiteral:
            case cpp::CharacterLiteral:
            case cpp::FloatingLiteral:
            case cpp::StringLiteral:
            case cpp::BooleanLiteral:
            case cpp::PointerLiteral:
            case cpp::UserDefinedLiteral:
            case cpp::Alignof:
            case cpp::Auto:
            case cpp::Bool:
            case cpp::Char:
            case cpp::Char16:
            case cpp::Char32:
            case cpp::Const_cast:
            case cpp::Decltype:
            case cpp::Delete:
            case cpp::Double:
            case cpp::Dynamic_cast:
            case cpp::Float:
            case cpp::Int:
            case cpp::Long:
            case cpp::New:
            case cpp::Noexcept:
            case cpp::Operator:
            case cpp::Reinterpret_cast:
            case cpp::Short:
            case cpp::Signed:
            case cpp::Sizeof:
            case cpp::Static_cast:
            case cpp::This:
            case cpp::Throw:
            case cpp::Typeid_:
            case cpp::Typename_:
            case cpp::Unsigned:
            case cpp::Void:
            case cpp::Wchar:
            case cpp::LeftParen:
            case cpp::LeftBracket:
            case cpp::Plus:
            case cpp::Minus:
            case cpp::Star:
            case cpp::And:
            case cpp::Or:
            case cpp::Tilde:
            case cpp::Not:
            case cpp::PlusPlus:
            case cpp::MinusMinus:
            case cpp::Doublecolon:
            case cpp::Identifier: {
              setState(550);
              expression();
              break;
            }

            case cpp::LeftBrace: {
              setState(551);
              bracedInitList();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(554);
          match(cpp::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(556);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(557);
          match(cpp::LeftParen);
          setState(559);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
            | (1ULL << cpp::CharacterLiteral)
            | (1ULL << cpp::FloatingLiteral)
            | (1ULL << cpp::StringLiteral)
            | (1ULL << cpp::BooleanLiteral)
            | (1ULL << cpp::PointerLiteral)
            | (1ULL << cpp::UserDefinedLiteral)
            | (1ULL << cpp::Alignof)
            | (1ULL << cpp::Auto)
            | (1ULL << cpp::Bool)
            | (1ULL << cpp::Char)
            | (1ULL << cpp::Char16)
            | (1ULL << cpp::Char32)
            | (1ULL << cpp::Const_cast)
            | (1ULL << cpp::Decltype)
            | (1ULL << cpp::Delete)
            | (1ULL << cpp::Double)
            | (1ULL << cpp::Dynamic_cast)
            | (1ULL << cpp::Float)
            | (1ULL << cpp::Int)
            | (1ULL << cpp::Long)
            | (1ULL << cpp::New)
            | (1ULL << cpp::Noexcept)
            | (1ULL << cpp::Operator)
            | (1ULL << cpp::Reinterpret_cast)
            | (1ULL << cpp::Short)
            | (1ULL << cpp::Signed)
            | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
            | (1ULL << (cpp::This - 65))
            | (1ULL << (cpp::Throw - 65))
            | (1ULL << (cpp::Typeid_ - 65))
            | (1ULL << (cpp::Typename_ - 65))
            | (1ULL << (cpp::Unsigned - 65))
            | (1ULL << (cpp::Void - 65))
            | (1ULL << (cpp::Wchar - 65))
            | (1ULL << (cpp::LeftParen - 65))
            | (1ULL << (cpp::LeftBracket - 65))
            | (1ULL << (cpp::LeftBrace - 65))
            | (1ULL << (cpp::Plus - 65))
            | (1ULL << (cpp::Minus - 65))
            | (1ULL << (cpp::Star - 65))
            | (1ULL << (cpp::And - 65))
            | (1ULL << (cpp::Or - 65))
            | (1ULL << (cpp::Tilde - 65))
            | (1ULL << (cpp::Not - 65))
            | (1ULL << (cpp::PlusPlus - 65))
            | (1ULL << (cpp::MinusMinus - 65))
            | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
            setState(558);
            expressionList();
          }
          setState(561);
          match(cpp::RightParen);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(562);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(563);
          _la = _input->LA(1);
          if (!(_la == cpp::Arrow

          || _la == cpp::Dot)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(569);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
          case 1: {
            setState(565);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == cpp::Template) {
              setState(564);
              match(cpp::Template);
            }
            setState(567);
            idExpression();
            break;
          }

          case 2: {
            setState(568);
            pseudoDestructorName();
            break;
          }

          }
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(571);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(572);
          _la = _input->LA(1);
          if (!(_la == cpp::PlusPlus

          || _la == cpp::MinusMinus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        } 
      }
      setState(577);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeIdOfTheTypeIdContext ------------------------------------------------------------------

cpp::TypeIdOfTheTypeIdContext::TypeIdOfTheTypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TypeIdOfTheTypeIdContext::Typeid_() {
  return getToken(cpp::Typeid_, 0);
}


size_t cpp::TypeIdOfTheTypeIdContext::getRuleIndex() const {
  return cpp::RuleTypeIdOfTheTypeId;
}


cpp::TypeIdOfTheTypeIdContext* cpp::typeIdOfTheTypeId() {
  TypeIdOfTheTypeIdContext *_localctx = _tracker.createInstance<TypeIdOfTheTypeIdContext>(_ctx, getState());
  enterRule(_localctx, 32, cpp::RuleTypeIdOfTheTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(cpp::Typeid_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

cpp::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::InitializerListContext* cpp::ExpressionListContext::initializerList() {
  return getRuleContext<cpp::InitializerListContext>(0);
}


size_t cpp::ExpressionListContext::getRuleIndex() const {
  return cpp::RuleExpressionList;
}


cpp::ExpressionListContext* cpp::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 34, cpp::RuleExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    initializerList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudoDestructorNameContext ------------------------------------------------------------------

cpp::PseudoDestructorNameContext::PseudoDestructorNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::PseudoDestructorNameContext::Tilde() {
  return getToken(cpp::Tilde, 0);
}

std::vector<cpp::TheTypeNameContext *> cpp::PseudoDestructorNameContext::theTypeName() {
  return getRuleContexts<cpp::TheTypeNameContext>();
}

cpp::TheTypeNameContext* cpp::PseudoDestructorNameContext::theTypeName(size_t i) {
  return getRuleContext<cpp::TheTypeNameContext>(i);
}

cpp::NestedNameSpecifierContext* cpp::PseudoDestructorNameContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* cpp::PseudoDestructorNameContext::Doublecolon() {
  return getToken(cpp::Doublecolon, 0);
}

tree::TerminalNode* cpp::PseudoDestructorNameContext::Template() {
  return getToken(cpp::Template, 0);
}

cpp::SimpleTemplateIdContext* cpp::PseudoDestructorNameContext::simpleTemplateId() {
  return getRuleContext<cpp::SimpleTemplateIdContext>(0);
}

cpp::DecltypeSpecifierContext* cpp::PseudoDestructorNameContext::decltypeSpecifier() {
  return getRuleContext<cpp::DecltypeSpecifierContext>(0);
}


size_t cpp::PseudoDestructorNameContext::getRuleIndex() const {
  return cpp::RulePseudoDestructorName;
}


cpp::PseudoDestructorNameContext* cpp::pseudoDestructorName() {
  PseudoDestructorNameContext *_localctx = _tracker.createInstance<PseudoDestructorNameContext>(_ctx, getState());
  enterRule(_localctx, 36, cpp::RulePseudoDestructorName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(601);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(583);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(582);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(588);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Identifier) {
        setState(585);
        theTypeName();
        setState(586);
        match(cpp::Doublecolon);
      }
      setState(590);
      match(cpp::Tilde);
      setState(591);
      theTypeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(592);
      nestedNameSpecifier(0);
      setState(593);
      match(cpp::Template);
      setState(594);
      simpleTemplateId();
      setState(595);
      match(cpp::Doublecolon);
      setState(596);
      match(cpp::Tilde);
      setState(597);
      theTypeName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(599);
      match(cpp::Tilde);
      setState(600);
      decltypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

cpp::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::PostfixExpressionContext* cpp::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<cpp::PostfixExpressionContext>(0);
}

cpp::UnaryExpressionContext* cpp::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<cpp::UnaryExpressionContext>(0);
}

tree::TerminalNode* cpp::UnaryExpressionContext::PlusPlus() {
  return getToken(cpp::PlusPlus, 0);
}

tree::TerminalNode* cpp::UnaryExpressionContext::MinusMinus() {
  return getToken(cpp::MinusMinus, 0);
}

cpp::UnaryOperatorContext* cpp::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<cpp::UnaryOperatorContext>(0);
}

tree::TerminalNode* cpp::UnaryExpressionContext::Sizeof() {
  return getToken(cpp::Sizeof, 0);
}

tree::TerminalNode* cpp::UnaryExpressionContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::TheTypeIdContext* cpp::UnaryExpressionContext::theTypeId() {
  return getRuleContext<cpp::TheTypeIdContext>(0);
}

tree::TerminalNode* cpp::UnaryExpressionContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

tree::TerminalNode* cpp::UnaryExpressionContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}

tree::TerminalNode* cpp::UnaryExpressionContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

tree::TerminalNode* cpp::UnaryExpressionContext::Alignof() {
  return getToken(cpp::Alignof, 0);
}

cpp::NoExceptExpressionContext* cpp::UnaryExpressionContext::noExceptExpression() {
  return getRuleContext<cpp::NoExceptExpressionContext>(0);
}

cpp::NewExpression_Context* cpp::UnaryExpressionContext::newExpression_() {
  return getRuleContext<cpp::NewExpression_Context>(0);
}

cpp::DeleteExpressionContext* cpp::UnaryExpressionContext::deleteExpression() {
  return getRuleContext<cpp::DeleteExpressionContext>(0);
}


size_t cpp::UnaryExpressionContext::getRuleIndex() const {
  return cpp::RuleUnaryExpression;
}


cpp::UnaryExpressionContext* cpp::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, cpp::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(630);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(603);
      postfixExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(608);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case cpp::PlusPlus: {
          setState(604);
          match(cpp::PlusPlus);
          break;
        }

        case cpp::MinusMinus: {
          setState(605);
          match(cpp::MinusMinus);
          break;
        }

        case cpp::Plus:
        case cpp::Minus:
        case cpp::Star:
        case cpp::And:
        case cpp::Or:
        case cpp::Tilde:
        case cpp::Not: {
          setState(606);
          unaryOperator();
          break;
        }

        case cpp::Sizeof: {
          setState(607);
          match(cpp::Sizeof);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(610);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(611);
      match(cpp::Sizeof);
      setState(620);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case cpp::LeftParen: {
          setState(612);
          match(cpp::LeftParen);
          setState(613);
          theTypeId();
          setState(614);
          match(cpp::RightParen);
          break;
        }

        case cpp::Ellipsis: {
          setState(616);
          match(cpp::Ellipsis);
          setState(617);
          match(cpp::LeftParen);
          setState(618);
          match(cpp::Identifier);
          setState(619);
          match(cpp::RightParen);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(622);
      match(cpp::Alignof);
      setState(623);
      match(cpp::LeftParen);
      setState(624);
      theTypeId();
      setState(625);
      match(cpp::RightParen);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(627);
      noExceptExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(628);
      newExpression_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(629);
      deleteExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

cpp::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::UnaryOperatorContext::Or() {
  return getToken(cpp::Or, 0);
}

tree::TerminalNode* cpp::UnaryOperatorContext::Star() {
  return getToken(cpp::Star, 0);
}

tree::TerminalNode* cpp::UnaryOperatorContext::And() {
  return getToken(cpp::And, 0);
}

tree::TerminalNode* cpp::UnaryOperatorContext::Plus() {
  return getToken(cpp::Plus, 0);
}

tree::TerminalNode* cpp::UnaryOperatorContext::Tilde() {
  return getToken(cpp::Tilde, 0);
}

tree::TerminalNode* cpp::UnaryOperatorContext::Minus() {
  return getToken(cpp::Minus, 0);
}

tree::TerminalNode* cpp::UnaryOperatorContext::Not() {
  return getToken(cpp::Not, 0);
}


size_t cpp::UnaryOperatorContext::getRuleIndex() const {
  return cpp::RuleUnaryOperator;
}


cpp::UnaryOperatorContext* cpp::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 40, cpp::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(632);
    _la = _input->LA(1);
    if (!(((((_la - 91) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 91)) & ((1ULL << (cpp::Plus - 91))
      | (1ULL << (cpp::Minus - 91))
      | (1ULL << (cpp::Star - 91))
      | (1ULL << (cpp::And - 91))
      | (1ULL << (cpp::Or - 91))
      | (1ULL << (cpp::Tilde - 91))
      | (1ULL << (cpp::Not - 91)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewExpression_Context ------------------------------------------------------------------

cpp::NewExpression_Context::NewExpression_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NewExpression_Context::New() {
  return getToken(cpp::New, 0);
}

cpp::NewTypeIdContext* cpp::NewExpression_Context::newTypeId() {
  return getRuleContext<cpp::NewTypeIdContext>(0);
}

tree::TerminalNode* cpp::NewExpression_Context::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::TheTypeIdContext* cpp::NewExpression_Context::theTypeId() {
  return getRuleContext<cpp::TheTypeIdContext>(0);
}

tree::TerminalNode* cpp::NewExpression_Context::RightParen() {
  return getToken(cpp::RightParen, 0);
}

tree::TerminalNode* cpp::NewExpression_Context::Doublecolon() {
  return getToken(cpp::Doublecolon, 0);
}

cpp::NewPlacementContext* cpp::NewExpression_Context::newPlacement() {
  return getRuleContext<cpp::NewPlacementContext>(0);
}

cpp::NewInitializer_Context* cpp::NewExpression_Context::newInitializer_() {
  return getRuleContext<cpp::NewInitializer_Context>(0);
}


size_t cpp::NewExpression_Context::getRuleIndex() const {
  return cpp::RuleNewExpression_;
}


cpp::NewExpression_Context* cpp::newExpression_() {
  NewExpression_Context *_localctx = _tracker.createInstance<NewExpression_Context>(_ctx, getState());
  enterRule(_localctx, 42, cpp::RuleNewExpression_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Doublecolon) {
      setState(634);
      match(cpp::Doublecolon);
    }
    setState(637);
    match(cpp::New);
    setState(639);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(638);
      newPlacement();
      break;
    }

    }
    setState(646);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Auto:
      case cpp::Bool:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Class:
      case cpp::Const:
      case cpp::Decltype:
      case cpp::Double:
      case cpp::Enum:
      case cpp::Float:
      case cpp::Int:
      case cpp::Long:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Struct:
      case cpp::Typename_:
      case cpp::Union:
      case cpp::Unsigned:
      case cpp::Void:
      case cpp::Volatile:
      case cpp::Wchar:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        setState(641);
        newTypeId();
        break;
      }

      case cpp::LeftParen: {
        setState(642);
        match(cpp::LeftParen);
        setState(643);
        theTypeId();
        setState(644);
        match(cpp::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(649);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::LeftParen

    || _la == cpp::LeftBrace) {
      setState(648);
      newInitializer_();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewPlacementContext ------------------------------------------------------------------

cpp::NewPlacementContext::NewPlacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NewPlacementContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ExpressionListContext* cpp::NewPlacementContext::expressionList() {
  return getRuleContext<cpp::ExpressionListContext>(0);
}

tree::TerminalNode* cpp::NewPlacementContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}


size_t cpp::NewPlacementContext::getRuleIndex() const {
  return cpp::RuleNewPlacement;
}


cpp::NewPlacementContext* cpp::newPlacement() {
  NewPlacementContext *_localctx = _tracker.createInstance<NewPlacementContext>(_ctx, getState());
  enterRule(_localctx, 44, cpp::RuleNewPlacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    match(cpp::LeftParen);
    setState(652);
    expressionList();
    setState(653);
    match(cpp::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewTypeIdContext ------------------------------------------------------------------

cpp::NewTypeIdContext::NewTypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TypeSpecifierSeqContext* cpp::NewTypeIdContext::typeSpecifierSeq() {
  return getRuleContext<cpp::TypeSpecifierSeqContext>(0);
}

cpp::NewDeclarator_Context* cpp::NewTypeIdContext::newDeclarator_() {
  return getRuleContext<cpp::NewDeclarator_Context>(0);
}


size_t cpp::NewTypeIdContext::getRuleIndex() const {
  return cpp::RuleNewTypeId;
}


cpp::NewTypeIdContext* cpp::newTypeId() {
  NewTypeIdContext *_localctx = _tracker.createInstance<NewTypeIdContext>(_ctx, getState());
  enterRule(_localctx, 46, cpp::RuleNewTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(655);
    typeSpecifierSeq();
    setState(657);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(656);
      newDeclarator_();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewDeclarator_Context ------------------------------------------------------------------

cpp::NewDeclarator_Context::NewDeclarator_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::PointerOperatorContext* cpp::NewDeclarator_Context::pointerOperator() {
  return getRuleContext<cpp::PointerOperatorContext>(0);
}

cpp::NewDeclarator_Context* cpp::NewDeclarator_Context::newDeclarator_() {
  return getRuleContext<cpp::NewDeclarator_Context>(0);
}

cpp::NoPointerNewDeclaratorContext* cpp::NewDeclarator_Context::noPointerNewDeclarator() {
  return getRuleContext<cpp::NoPointerNewDeclaratorContext>(0);
}


size_t cpp::NewDeclarator_Context::getRuleIndex() const {
  return cpp::RuleNewDeclarator_;
}


cpp::NewDeclarator_Context* cpp::newDeclarator_() {
  NewDeclarator_Context *_localctx = _tracker.createInstance<NewDeclarator_Context>(_ctx, getState());
  enterRule(_localctx, 48, cpp::RuleNewDeclarator_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(664);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Decltype:
      case cpp::Star:
      case cpp::And:
      case cpp::AndAnd:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(659);
        pointerOperator();
        setState(661);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
        case 1: {
          setState(660);
          newDeclarator_();
          break;
        }

        }
        break;
      }

      case cpp::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(663);
        noPointerNewDeclarator(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerNewDeclaratorContext ------------------------------------------------------------------

cpp::NoPointerNewDeclaratorContext::NoPointerNewDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NoPointerNewDeclaratorContext::LeftBracket() {
  return getToken(cpp::LeftBracket, 0);
}

cpp::ExpressionContext* cpp::NoPointerNewDeclaratorContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

tree::TerminalNode* cpp::NoPointerNewDeclaratorContext::RightBracket() {
  return getToken(cpp::RightBracket, 0);
}

cpp::AttributeSpecifierSeqContext* cpp::NoPointerNewDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::NoPointerNewDeclaratorContext* cpp::NoPointerNewDeclaratorContext::noPointerNewDeclarator() {
  return getRuleContext<cpp::NoPointerNewDeclaratorContext>(0);
}

cpp::ConstantExpressionContext* cpp::NoPointerNewDeclaratorContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}


size_t cpp::NoPointerNewDeclaratorContext::getRuleIndex() const {
  return cpp::RuleNoPointerNewDeclarator;
}



cpp::NoPointerNewDeclaratorContext* cpp::noPointerNewDeclarator() {
   return noPointerNewDeclarator(0);
}

cpp::NoPointerNewDeclaratorContext* cpp::noPointerNewDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cpp::NoPointerNewDeclaratorContext *_localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(_ctx, parentState);
  cpp::NoPointerNewDeclaratorContext *previousContext = _localctx;
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, cpp::RuleNoPointerNewDeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(667);
    match(cpp::LeftBracket);
    setState(668);
    expression();
    setState(669);
    match(cpp::RightBracket);
    setState(671);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      setState(670);
      attributeSpecifierSeq();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(682);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerNewDeclarator);
        setState(673);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(674);
        match(cpp::LeftBracket);
        setState(675);
        constantExpression();
        setState(676);
        match(cpp::RightBracket);
        setState(678);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
        case 1: {
          setState(677);
          attributeSpecifierSeq();
          break;
        }

        } 
      }
      setState(684);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewInitializer_Context ------------------------------------------------------------------

cpp::NewInitializer_Context::NewInitializer_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NewInitializer_Context::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::NewInitializer_Context::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::ExpressionListContext* cpp::NewInitializer_Context::expressionList() {
  return getRuleContext<cpp::ExpressionListContext>(0);
}

cpp::BracedInitListContext* cpp::NewInitializer_Context::bracedInitList() {
  return getRuleContext<cpp::BracedInitListContext>(0);
}


size_t cpp::NewInitializer_Context::getRuleIndex() const {
  return cpp::RuleNewInitializer_;
}


cpp::NewInitializer_Context* cpp::newInitializer_() {
  NewInitializer_Context *_localctx = _tracker.createInstance<NewInitializer_Context>(_ctx, getState());
  enterRule(_localctx, 52, cpp::RuleNewInitializer_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(691);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(685);
        match(cpp::LeftParen);
        setState(687);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
          | (1ULL << cpp::CharacterLiteral)
          | (1ULL << cpp::FloatingLiteral)
          | (1ULL << cpp::StringLiteral)
          | (1ULL << cpp::BooleanLiteral)
          | (1ULL << cpp::PointerLiteral)
          | (1ULL << cpp::UserDefinedLiteral)
          | (1ULL << cpp::Alignof)
          | (1ULL << cpp::Auto)
          | (1ULL << cpp::Bool)
          | (1ULL << cpp::Char)
          | (1ULL << cpp::Char16)
          | (1ULL << cpp::Char32)
          | (1ULL << cpp::Const_cast)
          | (1ULL << cpp::Decltype)
          | (1ULL << cpp::Delete)
          | (1ULL << cpp::Double)
          | (1ULL << cpp::Dynamic_cast)
          | (1ULL << cpp::Float)
          | (1ULL << cpp::Int)
          | (1ULL << cpp::Long)
          | (1ULL << cpp::New)
          | (1ULL << cpp::Noexcept)
          | (1ULL << cpp::Operator)
          | (1ULL << cpp::Reinterpret_cast)
          | (1ULL << cpp::Short)
          | (1ULL << cpp::Signed)
          | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
          | (1ULL << (cpp::This - 65))
          | (1ULL << (cpp::Throw - 65))
          | (1ULL << (cpp::Typeid_ - 65))
          | (1ULL << (cpp::Typename_ - 65))
          | (1ULL << (cpp::Unsigned - 65))
          | (1ULL << (cpp::Void - 65))
          | (1ULL << (cpp::Wchar - 65))
          | (1ULL << (cpp::LeftParen - 65))
          | (1ULL << (cpp::LeftBracket - 65))
          | (1ULL << (cpp::LeftBrace - 65))
          | (1ULL << (cpp::Plus - 65))
          | (1ULL << (cpp::Minus - 65))
          | (1ULL << (cpp::Star - 65))
          | (1ULL << (cpp::And - 65))
          | (1ULL << (cpp::Or - 65))
          | (1ULL << (cpp::Tilde - 65))
          | (1ULL << (cpp::Not - 65))
          | (1ULL << (cpp::PlusPlus - 65))
          | (1ULL << (cpp::MinusMinus - 65))
          | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
          setState(686);
          expressionList();
        }
        setState(689);
        match(cpp::RightParen);
        break;
      }

      case cpp::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(690);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteExpressionContext ------------------------------------------------------------------

cpp::DeleteExpressionContext::DeleteExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::DeleteExpressionContext::Delete() {
  return getToken(cpp::Delete, 0);
}

cpp::CastExpressionContext* cpp::DeleteExpressionContext::castExpression() {
  return getRuleContext<cpp::CastExpressionContext>(0);
}

tree::TerminalNode* cpp::DeleteExpressionContext::Doublecolon() {
  return getToken(cpp::Doublecolon, 0);
}

tree::TerminalNode* cpp::DeleteExpressionContext::LeftBracket() {
  return getToken(cpp::LeftBracket, 0);
}

tree::TerminalNode* cpp::DeleteExpressionContext::RightBracket() {
  return getToken(cpp::RightBracket, 0);
}


size_t cpp::DeleteExpressionContext::getRuleIndex() const {
  return cpp::RuleDeleteExpression;
}


cpp::DeleteExpressionContext* cpp::deleteExpression() {
  DeleteExpressionContext *_localctx = _tracker.createInstance<DeleteExpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, cpp::RuleDeleteExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(694);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Doublecolon) {
      setState(693);
      match(cpp::Doublecolon);
    }
    setState(696);
    match(cpp::Delete);
    setState(699);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(697);
      match(cpp::LeftBracket);
      setState(698);
      match(cpp::RightBracket);
      break;
    }

    }
    setState(701);
    castExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoExceptExpressionContext ------------------------------------------------------------------

cpp::NoExceptExpressionContext::NoExceptExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NoExceptExpressionContext::Noexcept() {
  return getToken(cpp::Noexcept, 0);
}

tree::TerminalNode* cpp::NoExceptExpressionContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ExpressionContext* cpp::NoExceptExpressionContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

tree::TerminalNode* cpp::NoExceptExpressionContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}


size_t cpp::NoExceptExpressionContext::getRuleIndex() const {
  return cpp::RuleNoExceptExpression;
}


cpp::NoExceptExpressionContext* cpp::noExceptExpression() {
  NoExceptExpressionContext *_localctx = _tracker.createInstance<NoExceptExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, cpp::RuleNoExceptExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(703);
    match(cpp::Noexcept);
    setState(704);
    match(cpp::LeftParen);
    setState(705);
    expression();
    setState(706);
    match(cpp::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

cpp::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::UnaryExpressionContext* cpp::CastExpressionContext::unaryExpression() {
  return getRuleContext<cpp::UnaryExpressionContext>(0);
}

tree::TerminalNode* cpp::CastExpressionContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::TheTypeIdContext* cpp::CastExpressionContext::theTypeId() {
  return getRuleContext<cpp::TheTypeIdContext>(0);
}

tree::TerminalNode* cpp::CastExpressionContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::CastExpressionContext* cpp::CastExpressionContext::castExpression() {
  return getRuleContext<cpp::CastExpressionContext>(0);
}


size_t cpp::CastExpressionContext::getRuleIndex() const {
  return cpp::RuleCastExpression;
}


cpp::CastExpressionContext* cpp::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, cpp::RuleCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(714);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(708);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(709);
      match(cpp::LeftParen);
      setState(710);
      theTypeId();
      setState(711);
      match(cpp::RightParen);
      setState(712);
      castExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerMemberExpressionContext ------------------------------------------------------------------

cpp::PointerMemberExpressionContext::PointerMemberExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::CastExpressionContext *> cpp::PointerMemberExpressionContext::castExpression() {
  return getRuleContexts<cpp::CastExpressionContext>();
}

cpp::CastExpressionContext* cpp::PointerMemberExpressionContext::castExpression(size_t i) {
  return getRuleContext<cpp::CastExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::PointerMemberExpressionContext::DotStar() {
  return getTokens(cpp::DotStar);
}

tree::TerminalNode* cpp::PointerMemberExpressionContext::DotStar(size_t i) {
  return getToken(cpp::DotStar, i);
}

std::vector<tree::TerminalNode *> cpp::PointerMemberExpressionContext::ArrowStar() {
  return getTokens(cpp::ArrowStar);
}

tree::TerminalNode* cpp::PointerMemberExpressionContext::ArrowStar(size_t i) {
  return getToken(cpp::ArrowStar, i);
}


size_t cpp::PointerMemberExpressionContext::getRuleIndex() const {
  return cpp::RulePointerMemberExpression;
}


cpp::PointerMemberExpressionContext* cpp::pointerMemberExpression() {
  PointerMemberExpressionContext *_localctx = _tracker.createInstance<PointerMemberExpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, cpp::RulePointerMemberExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(716);
    castExpression();
    setState(721);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::ArrowStar

    || _la == cpp::DotStar) {
      setState(717);
      _la = _input->LA(1);
      if (!(_la == cpp::ArrowStar

      || _la == cpp::DotStar)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(718);
      castExpression();
      setState(723);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

cpp::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::PointerMemberExpressionContext *> cpp::MultiplicativeExpressionContext::pointerMemberExpression() {
  return getRuleContexts<cpp::PointerMemberExpressionContext>();
}

cpp::PointerMemberExpressionContext* cpp::MultiplicativeExpressionContext::pointerMemberExpression(size_t i) {
  return getRuleContext<cpp::PointerMemberExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::MultiplicativeExpressionContext::Star() {
  return getTokens(cpp::Star);
}

tree::TerminalNode* cpp::MultiplicativeExpressionContext::Star(size_t i) {
  return getToken(cpp::Star, i);
}

std::vector<tree::TerminalNode *> cpp::MultiplicativeExpressionContext::Div() {
  return getTokens(cpp::Div);
}

tree::TerminalNode* cpp::MultiplicativeExpressionContext::Div(size_t i) {
  return getToken(cpp::Div, i);
}

std::vector<tree::TerminalNode *> cpp::MultiplicativeExpressionContext::Mod() {
  return getTokens(cpp::Mod);
}

tree::TerminalNode* cpp::MultiplicativeExpressionContext::Mod(size_t i) {
  return getToken(cpp::Mod, i);
}


size_t cpp::MultiplicativeExpressionContext::getRuleIndex() const {
  return cpp::RuleMultiplicativeExpression;
}


cpp::MultiplicativeExpressionContext* cpp::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 62, cpp::RuleMultiplicativeExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(724);
    pointerMemberExpression();
    setState(729);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (cpp::Star - 93))
      | (1ULL << (cpp::Div - 93))
      | (1ULL << (cpp::Mod - 93)))) != 0)) {
      setState(725);
      _la = _input->LA(1);
      if (!(((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (cpp::Star - 93))
        | (1ULL << (cpp::Div - 93))
        | (1ULL << (cpp::Mod - 93)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(726);
      pointerMemberExpression();
      setState(731);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

cpp::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::MultiplicativeExpressionContext *> cpp::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<cpp::MultiplicativeExpressionContext>();
}

cpp::MultiplicativeExpressionContext* cpp::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<cpp::MultiplicativeExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::AdditiveExpressionContext::Plus() {
  return getTokens(cpp::Plus);
}

tree::TerminalNode* cpp::AdditiveExpressionContext::Plus(size_t i) {
  return getToken(cpp::Plus, i);
}

std::vector<tree::TerminalNode *> cpp::AdditiveExpressionContext::Minus() {
  return getTokens(cpp::Minus);
}

tree::TerminalNode* cpp::AdditiveExpressionContext::Minus(size_t i) {
  return getToken(cpp::Minus, i);
}


size_t cpp::AdditiveExpressionContext::getRuleIndex() const {
  return cpp::RuleAdditiveExpression;
}


cpp::AdditiveExpressionContext* cpp::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 64, cpp::RuleAdditiveExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
    multiplicativeExpression();
    setState(737);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Plus

    || _la == cpp::Minus) {
      setState(733);
      _la = _input->LA(1);
      if (!(_la == cpp::Plus

      || _la == cpp::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(734);
      multiplicativeExpression();
      setState(739);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

cpp::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::AdditiveExpressionContext *> cpp::ShiftExpressionContext::additiveExpression() {
  return getRuleContexts<cpp::AdditiveExpressionContext>();
}

cpp::AdditiveExpressionContext* cpp::ShiftExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<cpp::AdditiveExpressionContext>(i);
}

std::vector<cpp::ShiftOperatorContext *> cpp::ShiftExpressionContext::shiftOperator() {
  return getRuleContexts<cpp::ShiftOperatorContext>();
}

cpp::ShiftOperatorContext* cpp::ShiftExpressionContext::shiftOperator(size_t i) {
  return getRuleContext<cpp::ShiftOperatorContext>(i);
}


size_t cpp::ShiftExpressionContext::getRuleIndex() const {
  return cpp::RuleShiftExpression;
}


cpp::ShiftExpressionContext* cpp::shiftExpression() {
  ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, getState());
  enterRule(_localctx, 66, cpp::RuleShiftExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(740);
    additiveExpression();
    setState(746);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(741);
        shiftOperator();
        setState(742);
        additiveExpression(); 
      }
      setState(748);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftOperatorContext ------------------------------------------------------------------

cpp::ShiftOperatorContext::ShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> cpp::ShiftOperatorContext::Greater() {
  return getTokens(cpp::Greater);
}

tree::TerminalNode* cpp::ShiftOperatorContext::Greater(size_t i) {
  return getToken(cpp::Greater, i);
}

std::vector<tree::TerminalNode *> cpp::ShiftOperatorContext::Less() {
  return getTokens(cpp::Less);
}

tree::TerminalNode* cpp::ShiftOperatorContext::Less(size_t i) {
  return getToken(cpp::Less, i);
}


size_t cpp::ShiftOperatorContext::getRuleIndex() const {
  return cpp::RuleShiftOperator;
}


cpp::ShiftOperatorContext* cpp::shiftOperator() {
  ShiftOperatorContext *_localctx = _tracker.createInstance<ShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 68, cpp::RuleShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(753);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Greater: {
        enterOuterAlt(_localctx, 1);
        setState(749);
        match(cpp::Greater);
        setState(750);
        match(cpp::Greater);
        break;
      }

      case cpp::Less: {
        enterOuterAlt(_localctx, 2);
        setState(751);
        match(cpp::Less);
        setState(752);
        match(cpp::Less);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

cpp::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::ShiftExpressionContext *> cpp::RelationalExpressionContext::shiftExpression() {
  return getRuleContexts<cpp::ShiftExpressionContext>();
}

cpp::ShiftExpressionContext* cpp::RelationalExpressionContext::shiftExpression(size_t i) {
  return getRuleContext<cpp::ShiftExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::RelationalExpressionContext::Less() {
  return getTokens(cpp::Less);
}

tree::TerminalNode* cpp::RelationalExpressionContext::Less(size_t i) {
  return getToken(cpp::Less, i);
}

std::vector<tree::TerminalNode *> cpp::RelationalExpressionContext::Greater() {
  return getTokens(cpp::Greater);
}

tree::TerminalNode* cpp::RelationalExpressionContext::Greater(size_t i) {
  return getToken(cpp::Greater, i);
}

std::vector<tree::TerminalNode *> cpp::RelationalExpressionContext::LessEqual() {
  return getTokens(cpp::LessEqual);
}

tree::TerminalNode* cpp::RelationalExpressionContext::LessEqual(size_t i) {
  return getToken(cpp::LessEqual, i);
}

std::vector<tree::TerminalNode *> cpp::RelationalExpressionContext::GreaterEqual() {
  return getTokens(cpp::GreaterEqual);
}

tree::TerminalNode* cpp::RelationalExpressionContext::GreaterEqual(size_t i) {
  return getToken(cpp::GreaterEqual, i);
}


size_t cpp::RelationalExpressionContext::getRuleIndex() const {
  return cpp::RuleRelationalExpression;
}


cpp::RelationalExpressionContext* cpp::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 70, cpp::RuleRelationalExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(755);
    shiftExpression();
    setState(760);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(756);
        _la = _input->LA(1);
        if (!(((((_la - 102) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 102)) & ((1ULL << (cpp::Less - 102))
          | (1ULL << (cpp::Greater - 102))
          | (1ULL << (cpp::LessEqual - 102))
          | (1ULL << (cpp::GreaterEqual - 102)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(757);
        shiftExpression(); 
      }
      setState(762);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

cpp::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::RelationalExpressionContext *> cpp::EqualityExpressionContext::relationalExpression() {
  return getRuleContexts<cpp::RelationalExpressionContext>();
}

cpp::RelationalExpressionContext* cpp::EqualityExpressionContext::relationalExpression(size_t i) {
  return getRuleContext<cpp::RelationalExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::EqualityExpressionContext::Equal() {
  return getTokens(cpp::Equal);
}

tree::TerminalNode* cpp::EqualityExpressionContext::Equal(size_t i) {
  return getToken(cpp::Equal, i);
}

std::vector<tree::TerminalNode *> cpp::EqualityExpressionContext::NotEqual() {
  return getTokens(cpp::NotEqual);
}

tree::TerminalNode* cpp::EqualityExpressionContext::NotEqual(size_t i) {
  return getToken(cpp::NotEqual, i);
}


size_t cpp::EqualityExpressionContext::getRuleIndex() const {
  return cpp::RuleEqualityExpression;
}


cpp::EqualityExpressionContext* cpp::equalityExpression() {
  EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
  enterRule(_localctx, 72, cpp::RuleEqualityExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(763);
    relationalExpression();
    setState(768);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Equal

    || _la == cpp::NotEqual) {
      setState(764);
      _la = _input->LA(1);
      if (!(_la == cpp::Equal

      || _la == cpp::NotEqual)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(765);
      relationalExpression();
      setState(770);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

cpp::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::EqualityExpressionContext *> cpp::AndExpressionContext::equalityExpression() {
  return getRuleContexts<cpp::EqualityExpressionContext>();
}

cpp::EqualityExpressionContext* cpp::AndExpressionContext::equalityExpression(size_t i) {
  return getRuleContext<cpp::EqualityExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::AndExpressionContext::And() {
  return getTokens(cpp::And);
}

tree::TerminalNode* cpp::AndExpressionContext::And(size_t i) {
  return getToken(cpp::And, i);
}


size_t cpp::AndExpressionContext::getRuleIndex() const {
  return cpp::RuleAndExpression;
}


cpp::AndExpressionContext* cpp::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 74, cpp::RuleAndExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(771);
    equalityExpression();
    setState(776);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::And) {
      setState(772);
      match(cpp::And);
      setState(773);
      equalityExpression();
      setState(778);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

cpp::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::AndExpressionContext *> cpp::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContexts<cpp::AndExpressionContext>();
}

cpp::AndExpressionContext* cpp::ExclusiveOrExpressionContext::andExpression(size_t i) {
  return getRuleContext<cpp::AndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::ExclusiveOrExpressionContext::Caret() {
  return getTokens(cpp::Caret);
}

tree::TerminalNode* cpp::ExclusiveOrExpressionContext::Caret(size_t i) {
  return getToken(cpp::Caret, i);
}


size_t cpp::ExclusiveOrExpressionContext::getRuleIndex() const {
  return cpp::RuleExclusiveOrExpression;
}


cpp::ExclusiveOrExpressionContext* cpp::exclusiveOrExpression() {
  ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 76, cpp::RuleExclusiveOrExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(779);
    andExpression();
    setState(784);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Caret) {
      setState(780);
      match(cpp::Caret);
      setState(781);
      andExpression();
      setState(786);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

cpp::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::ExclusiveOrExpressionContext *> cpp::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContexts<cpp::ExclusiveOrExpressionContext>();
}

cpp::ExclusiveOrExpressionContext* cpp::InclusiveOrExpressionContext::exclusiveOrExpression(size_t i) {
  return getRuleContext<cpp::ExclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::InclusiveOrExpressionContext::Or() {
  return getTokens(cpp::Or);
}

tree::TerminalNode* cpp::InclusiveOrExpressionContext::Or(size_t i) {
  return getToken(cpp::Or, i);
}


size_t cpp::InclusiveOrExpressionContext::getRuleIndex() const {
  return cpp::RuleInclusiveOrExpression;
}


cpp::InclusiveOrExpressionContext* cpp::inclusiveOrExpression() {
  InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 78, cpp::RuleInclusiveOrExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(787);
    exclusiveOrExpression();
    setState(792);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Or) {
      setState(788);
      match(cpp::Or);
      setState(789);
      exclusiveOrExpression();
      setState(794);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

cpp::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::InclusiveOrExpressionContext *> cpp::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContexts<cpp::InclusiveOrExpressionContext>();
}

cpp::InclusiveOrExpressionContext* cpp::LogicalAndExpressionContext::inclusiveOrExpression(size_t i) {
  return getRuleContext<cpp::InclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::LogicalAndExpressionContext::AndAnd() {
  return getTokens(cpp::AndAnd);
}

tree::TerminalNode* cpp::LogicalAndExpressionContext::AndAnd(size_t i) {
  return getToken(cpp::AndAnd, i);
}


size_t cpp::LogicalAndExpressionContext::getRuleIndex() const {
  return cpp::RuleLogicalAndExpression;
}


cpp::LogicalAndExpressionContext* cpp::logicalAndExpression() {
  LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 80, cpp::RuleLogicalAndExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(795);
    inclusiveOrExpression();
    setState(800);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::AndAnd) {
      setState(796);
      match(cpp::AndAnd);
      setState(797);
      inclusiveOrExpression();
      setState(802);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

cpp::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::LogicalAndExpressionContext *> cpp::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContexts<cpp::LogicalAndExpressionContext>();
}

cpp::LogicalAndExpressionContext* cpp::LogicalOrExpressionContext::logicalAndExpression(size_t i) {
  return getRuleContext<cpp::LogicalAndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::LogicalOrExpressionContext::OrOr() {
  return getTokens(cpp::OrOr);
}

tree::TerminalNode* cpp::LogicalOrExpressionContext::OrOr(size_t i) {
  return getToken(cpp::OrOr, i);
}


size_t cpp::LogicalOrExpressionContext::getRuleIndex() const {
  return cpp::RuleLogicalOrExpression;
}


cpp::LogicalOrExpressionContext* cpp::logicalOrExpression() {
  LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 82, cpp::RuleLogicalOrExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(803);
    logicalAndExpression();
    setState(808);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::OrOr) {
      setState(804);
      match(cpp::OrOr);
      setState(805);
      logicalAndExpression();
      setState(810);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

cpp::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::LogicalOrExpressionContext* cpp::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<cpp::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* cpp::ConditionalExpressionContext::Question() {
  return getToken(cpp::Question, 0);
}

cpp::ExpressionContext* cpp::ConditionalExpressionContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

tree::TerminalNode* cpp::ConditionalExpressionContext::Colon() {
  return getToken(cpp::Colon, 0);
}

cpp::AssignmentExpressionContext* cpp::ConditionalExpressionContext::assignmentExpression() {
  return getRuleContext<cpp::AssignmentExpressionContext>(0);
}


size_t cpp::ConditionalExpressionContext::getRuleIndex() const {
  return cpp::RuleConditionalExpression;
}


cpp::ConditionalExpressionContext* cpp::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 84, cpp::RuleConditionalExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(811);
    logicalOrExpression();
    setState(817);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Question) {
      setState(812);
      match(cpp::Question);
      setState(813);
      expression();
      setState(814);
      match(cpp::Colon);
      setState(815);
      assignmentExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

cpp::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ConditionalExpressionContext* cpp::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<cpp::ConditionalExpressionContext>(0);
}

cpp::LogicalOrExpressionContext* cpp::AssignmentExpressionContext::logicalOrExpression() {
  return getRuleContext<cpp::LogicalOrExpressionContext>(0);
}

cpp::AssignmentOperatorContext* cpp::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<cpp::AssignmentOperatorContext>(0);
}

cpp::InitializerClauseContext* cpp::AssignmentExpressionContext::initializerClause() {
  return getRuleContext<cpp::InitializerClauseContext>(0);
}

cpp::ThrowExpressionContext* cpp::AssignmentExpressionContext::throwExpression() {
  return getRuleContext<cpp::ThrowExpressionContext>(0);
}


size_t cpp::AssignmentExpressionContext::getRuleIndex() const {
  return cpp::RuleAssignmentExpression;
}


cpp::AssignmentExpressionContext* cpp::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 86, cpp::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(825);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(819);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(820);
      logicalOrExpression();
      setState(821);
      assignmentOperator();
      setState(822);
      initializerClause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(824);
      throwExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

cpp::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::AssignmentOperatorContext::Assign() {
  return getToken(cpp::Assign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::StarAssign() {
  return getToken(cpp::StarAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::DivAssign() {
  return getToken(cpp::DivAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::ModAssign() {
  return getToken(cpp::ModAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::PlusAssign() {
  return getToken(cpp::PlusAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::MinusAssign() {
  return getToken(cpp::MinusAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::RightShiftAssign() {
  return getToken(cpp::RightShiftAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::LeftShiftAssign() {
  return getToken(cpp::LeftShiftAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::AndAssign() {
  return getToken(cpp::AndAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::XorAssign() {
  return getToken(cpp::XorAssign, 0);
}

tree::TerminalNode* cpp::AssignmentOperatorContext::OrAssign() {
  return getToken(cpp::OrAssign, 0);
}


size_t cpp::AssignmentOperatorContext::getRuleIndex() const {
  return cpp::RuleAssignmentOperator;
}


cpp::AssignmentOperatorContext* cpp::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 88, cpp::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(827);
    _la = _input->LA(1);
    if (!(((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (cpp::Assign - 101))
      | (1ULL << (cpp::PlusAssign - 101))
      | (1ULL << (cpp::MinusAssign - 101))
      | (1ULL << (cpp::StarAssign - 101))
      | (1ULL << (cpp::DivAssign - 101))
      | (1ULL << (cpp::ModAssign - 101))
      | (1ULL << (cpp::XorAssign - 101))
      | (1ULL << (cpp::AndAssign - 101))
      | (1ULL << (cpp::OrAssign - 101))
      | (1ULL << (cpp::LeftShiftAssign - 101))
      | (1ULL << (cpp::RightShiftAssign - 101)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

cpp::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::AssignmentExpressionContext *> cpp::ExpressionContext::assignmentExpression() {
  return getRuleContexts<cpp::AssignmentExpressionContext>();
}

cpp::AssignmentExpressionContext* cpp::ExpressionContext::assignmentExpression(size_t i) {
  return getRuleContext<cpp::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::ExpressionContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::ExpressionContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::ExpressionContext::getRuleIndex() const {
  return cpp::RuleExpression;
}


cpp::ExpressionContext* cpp::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 90, cpp::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(829);
    assignmentExpression();
    setState(834);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(830);
      match(cpp::Comma);
      setState(831);
      assignmentExpression();
      setState(836);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

cpp::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ConditionalExpressionContext* cpp::ConstantExpressionContext::conditionalExpression() {
  return getRuleContext<cpp::ConditionalExpressionContext>(0);
}


size_t cpp::ConstantExpressionContext::getRuleIndex() const {
  return cpp::RuleConstantExpression;
}


cpp::ConstantExpressionContext* cpp::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 92, cpp::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(837);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

cpp::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::LabeledStatementContext* cpp::StatementContext::labeledStatement() {
  return getRuleContext<cpp::LabeledStatementContext>(0);
}

cpp::ExpressionStatementContext* cpp::StatementContext::expressionStatement() {
  return getRuleContext<cpp::ExpressionStatementContext>(0);
}

cpp::CompoundStatementContext* cpp::StatementContext::compoundStatement() {
  return getRuleContext<cpp::CompoundStatementContext>(0);
}

cpp::SelectionStatementContext* cpp::StatementContext::selectionStatement() {
  return getRuleContext<cpp::SelectionStatementContext>(0);
}

cpp::IterationStatementContext* cpp::StatementContext::iterationStatement() {
  return getRuleContext<cpp::IterationStatementContext>(0);
}

cpp::JumpStatementContext* cpp::StatementContext::jumpStatement() {
  return getRuleContext<cpp::JumpStatementContext>(0);
}

cpp::TryBlockContext* cpp::StatementContext::tryBlock() {
  return getRuleContext<cpp::TryBlockContext>(0);
}

cpp::DeclarationStatementContext* cpp::StatementContext::declarationStatement() {
  return getRuleContext<cpp::DeclarationStatementContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::StatementContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::StatementContext::getRuleIndex() const {
  return cpp::RuleStatement;
}


cpp::StatementContext* cpp::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 94, cpp::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(854);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      setState(839);
      labeledStatement();
      break;
    }

    case 2: {
      setState(840);
      dynamic_cast<StatementContext *>(_localctx)->declstmt = declarationStatement();

                  _localctx->resultDocStream << dynamic_cast<StatementContext *>(_localctx)->declstmt->resultDocText;
                
      break;
    }

    case 3: {
      setState(844);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(843);
        attributeSpecifierSeq();
        break;
      }

      }
      setState(852);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case cpp::IntegerLiteral:
        case cpp::CharacterLiteral:
        case cpp::FloatingLiteral:
        case cpp::StringLiteral:
        case cpp::BooleanLiteral:
        case cpp::PointerLiteral:
        case cpp::UserDefinedLiteral:
        case cpp::Alignof:
        case cpp::Auto:
        case cpp::Bool:
        case cpp::Char:
        case cpp::Char16:
        case cpp::Char32:
        case cpp::Const_cast:
        case cpp::Decltype:
        case cpp::Delete:
        case cpp::Double:
        case cpp::Dynamic_cast:
        case cpp::Float:
        case cpp::Int:
        case cpp::Long:
        case cpp::New:
        case cpp::Noexcept:
        case cpp::Operator:
        case cpp::Reinterpret_cast:
        case cpp::Short:
        case cpp::Signed:
        case cpp::Sizeof:
        case cpp::Static_cast:
        case cpp::This:
        case cpp::Throw:
        case cpp::Typeid_:
        case cpp::Typename_:
        case cpp::Unsigned:
        case cpp::Void:
        case cpp::Wchar:
        case cpp::LeftParen:
        case cpp::LeftBracket:
        case cpp::Plus:
        case cpp::Minus:
        case cpp::Star:
        case cpp::And:
        case cpp::Or:
        case cpp::Tilde:
        case cpp::Not:
        case cpp::PlusPlus:
        case cpp::MinusMinus:
        case cpp::Doublecolon:
        case cpp::Semi:
        case cpp::Identifier: {
          setState(846);
          expressionStatement();
          break;
        }

        case cpp::LeftBrace: {
          setState(847);
          compoundStatement();
          break;
        }

        case cpp::If:
        case cpp::Switch: {
          setState(848);
          selectionStatement();
          break;
        }

        case cpp::Do:
        case cpp::For:
        case cpp::While: {
          setState(849);
          iterationStatement();
          break;
        }

        case cpp::Break:
        case cpp::Continue:
        case cpp::Goto:
        case cpp::Return: {
          setState(850);
          jumpStatement();
          break;
        }

        case cpp::Try: {
          setState(851);
          tryBlock();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }

            dynamic_cast<StatementContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

cpp::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::LabeledStatementContext::Colon() {
  return getToken(cpp::Colon, 0);
}

cpp::StatementContext* cpp::LabeledStatementContext::statement() {
  return getRuleContext<cpp::StatementContext>(0);
}

tree::TerminalNode* cpp::LabeledStatementContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

tree::TerminalNode* cpp::LabeledStatementContext::Case() {
  return getToken(cpp::Case, 0);
}

cpp::ConstantExpressionContext* cpp::LabeledStatementContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}

tree::TerminalNode* cpp::LabeledStatementContext::Default() {
  return getToken(cpp::Default, 0);
}

cpp::AttributeSpecifierSeqContext* cpp::LabeledStatementContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::LabeledStatementContext::getRuleIndex() const {
  return cpp::RuleLabeledStatement;
}


cpp::LabeledStatementContext* cpp::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, cpp::RuleLabeledStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(859);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(858);
      attributeSpecifierSeq();
    }
    setState(865);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Identifier: {
        setState(861);
        match(cpp::Identifier);
        break;
      }

      case cpp::Case: {
        setState(862);
        match(cpp::Case);
        setState(863);
        constantExpression();
        break;
      }

      case cpp::Default: {
        setState(864);
        match(cpp::Default);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(867);
    match(cpp::Colon);
    setState(868);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

cpp::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ExpressionStatementContext::Semi() {
  return getToken(cpp::Semi, 0);
}

cpp::ExpressionContext* cpp::ExpressionStatementContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}


size_t cpp::ExpressionStatementContext::getRuleIndex() const {
  return cpp::RuleExpressionStatement;
}


cpp::ExpressionStatementContext* cpp::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, cpp::RuleExpressionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(871);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral)
      | (1ULL << cpp::Alignof)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Const_cast)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Delete)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Dynamic_cast)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::New)
      | (1ULL << cpp::Noexcept)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Reinterpret_cast)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
      | (1ULL << (cpp::This - 65))
      | (1ULL << (cpp::Throw - 65))
      | (1ULL << (cpp::Typeid_ - 65))
      | (1ULL << (cpp::Typename_ - 65))
      | (1ULL << (cpp::Unsigned - 65))
      | (1ULL << (cpp::Void - 65))
      | (1ULL << (cpp::Wchar - 65))
      | (1ULL << (cpp::LeftParen - 65))
      | (1ULL << (cpp::LeftBracket - 65))
      | (1ULL << (cpp::Plus - 65))
      | (1ULL << (cpp::Minus - 65))
      | (1ULL << (cpp::Star - 65))
      | (1ULL << (cpp::And - 65))
      | (1ULL << (cpp::Or - 65))
      | (1ULL << (cpp::Tilde - 65))
      | (1ULL << (cpp::Not - 65))
      | (1ULL << (cpp::PlusPlus - 65))
      | (1ULL << (cpp::MinusMinus - 65))
      | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
      setState(870);
      expression();
    }
    setState(873);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

cpp::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::CompoundStatementContext::LeftBrace() {
  return getToken(cpp::LeftBrace, 0);
}

tree::TerminalNode* cpp::CompoundStatementContext::RightBrace() {
  return getToken(cpp::RightBrace, 0);
}

cpp::StatementSeqContext* cpp::CompoundStatementContext::statementSeq() {
  return getRuleContext<cpp::StatementSeqContext>(0);
}


size_t cpp::CompoundStatementContext::getRuleIndex() const {
  return cpp::RuleCompoundStatement;
}


cpp::CompoundStatementContext* cpp::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 100, cpp::RuleCompoundStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(875);
    match(cpp::LeftBrace);
    setState(879);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral)
      | (1ULL << cpp::Alignas)
      | (1ULL << cpp::Alignof)
      | (1ULL << cpp::Asm)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Break)
      | (1ULL << cpp::Case)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Const_cast)
      | (1ULL << cpp::Continue)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Default)
      | (1ULL << cpp::Delete)
      | (1ULL << cpp::Do)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Dynamic_cast)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::For)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Goto)
      | (1ULL << cpp::If)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Namespace)
      | (1ULL << cpp::New)
      | (1ULL << cpp::Noexcept)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Reinterpret_cast)
      | (1ULL << cpp::Return)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Sizeof)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Static_cast - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Switch - 64))
      | (1ULL << (cpp::This - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Throw - 64))
      | (1ULL << (cpp::Try - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typeid_ - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::While - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::LeftBrace - 64))
      | (1ULL << (cpp::Plus - 64))
      | (1ULL << (cpp::Minus - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Or - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::Not - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::PlusPlus - 64))
      | (1ULL << (cpp::MinusMinus - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128)))) != 0)) {
      setState(876);
      dynamic_cast<CompoundStatementContext *>(_localctx)->stmtseq = statementSeq();

              _localctx->resultDocStream << dynamic_cast<CompoundStatementContext *>(_localctx)->stmtseq->resultDocText;
          
    }
    setState(881);
    match(cpp::RightBrace);

            dynamic_cast<CompoundStatementContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementSeqContext ------------------------------------------------------------------

cpp::StatementSeqContext::StatementSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::StatementContext *> cpp::StatementSeqContext::statement() {
  return getRuleContexts<cpp::StatementContext>();
}

cpp::StatementContext* cpp::StatementSeqContext::statement(size_t i) {
  return getRuleContext<cpp::StatementContext>(i);
}


size_t cpp::StatementSeqContext::getRuleIndex() const {
  return cpp::RuleStatementSeq;
}


cpp::StatementSeqContext* cpp::statementSeq() {
  StatementSeqContext *_localctx = _tracker.createInstance<StatementSeqContext>(_ctx, getState());
  enterRule(_localctx, 102, cpp::RuleStatementSeq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(887); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(884);
      dynamic_cast<StatementSeqContext *>(_localctx)->stmt = statement();

              _localctx->resultDocStream << dynamic_cast<StatementSeqContext *>(_localctx)->stmt->resultDocText;
          
      setState(889); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral)
      | (1ULL << cpp::Alignas)
      | (1ULL << cpp::Alignof)
      | (1ULL << cpp::Asm)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Break)
      | (1ULL << cpp::Case)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Const_cast)
      | (1ULL << cpp::Continue)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Default)
      | (1ULL << cpp::Delete)
      | (1ULL << cpp::Do)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Dynamic_cast)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::For)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Goto)
      | (1ULL << cpp::If)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Namespace)
      | (1ULL << cpp::New)
      | (1ULL << cpp::Noexcept)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Reinterpret_cast)
      | (1ULL << cpp::Return)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Sizeof)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Static_cast - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Switch - 64))
      | (1ULL << (cpp::This - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Throw - 64))
      | (1ULL << (cpp::Try - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typeid_ - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::While - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::LeftBrace - 64))
      | (1ULL << (cpp::Plus - 64))
      | (1ULL << (cpp::Minus - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Or - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::Not - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::PlusPlus - 64))
      | (1ULL << (cpp::MinusMinus - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128)))) != 0));

            dynamic_cast<StatementSeqContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

cpp::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::SelectionStatementContext::If() {
  return getToken(cpp::If, 0);
}

tree::TerminalNode* cpp::SelectionStatementContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ConditionContext* cpp::SelectionStatementContext::condition() {
  return getRuleContext<cpp::ConditionContext>(0);
}

tree::TerminalNode* cpp::SelectionStatementContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

std::vector<cpp::StatementContext *> cpp::SelectionStatementContext::statement() {
  return getRuleContexts<cpp::StatementContext>();
}

cpp::StatementContext* cpp::SelectionStatementContext::statement(size_t i) {
  return getRuleContext<cpp::StatementContext>(i);
}

tree::TerminalNode* cpp::SelectionStatementContext::Else() {
  return getToken(cpp::Else, 0);
}

tree::TerminalNode* cpp::SelectionStatementContext::Switch() {
  return getToken(cpp::Switch, 0);
}


size_t cpp::SelectionStatementContext::getRuleIndex() const {
  return cpp::RuleSelectionStatement;
}


cpp::SelectionStatementContext* cpp::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 104, cpp::RuleSelectionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(908);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::If: {
        enterOuterAlt(_localctx, 1);
        setState(893);
        match(cpp::If);
        setState(894);
        match(cpp::LeftParen);
        setState(895);
        condition();
        setState(896);
        match(cpp::RightParen);
        setState(897);
        statement();
        setState(900);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
        case 1: {
          setState(898);
          match(cpp::Else);
          setState(899);
          statement();
          break;
        }

        }
        break;
      }

      case cpp::Switch: {
        enterOuterAlt(_localctx, 2);
        setState(902);
        match(cpp::Switch);
        setState(903);
        match(cpp::LeftParen);
        setState(904);
        condition();
        setState(905);
        match(cpp::RightParen);
        setState(906);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

cpp::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ExpressionContext* cpp::ConditionContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

cpp::DeclSpecifierSeqContext* cpp::ConditionContext::declSpecifierSeq() {
  return getRuleContext<cpp::DeclSpecifierSeqContext>(0);
}

cpp::DeclaratorContext* cpp::ConditionContext::declarator() {
  return getRuleContext<cpp::DeclaratorContext>(0);
}

tree::TerminalNode* cpp::ConditionContext::Assign() {
  return getToken(cpp::Assign, 0);
}

cpp::InitializerClauseContext* cpp::ConditionContext::initializerClause() {
  return getRuleContext<cpp::InitializerClauseContext>(0);
}

cpp::BracedInitListContext* cpp::ConditionContext::bracedInitList() {
  return getRuleContext<cpp::BracedInitListContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::ConditionContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::ConditionContext::getRuleIndex() const {
  return cpp::RuleCondition;
}


cpp::ConditionContext* cpp::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 106, cpp::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(921);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(910);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(912);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
        setState(911);
        attributeSpecifierSeq();
      }
      setState(914);
      declSpecifierSeq();
      setState(915);
      declarator();
      setState(919);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case cpp::Assign: {
          setState(916);
          match(cpp::Assign);
          setState(917);
          initializerClause();
          break;
        }

        case cpp::LeftBrace: {
          setState(918);
          bracedInitList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

cpp::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::IterationStatementContext::While() {
  return getToken(cpp::While, 0);
}

tree::TerminalNode* cpp::IterationStatementContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ConditionContext* cpp::IterationStatementContext::condition() {
  return getRuleContext<cpp::ConditionContext>(0);
}

tree::TerminalNode* cpp::IterationStatementContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::StatementContext* cpp::IterationStatementContext::statement() {
  return getRuleContext<cpp::StatementContext>(0);
}

tree::TerminalNode* cpp::IterationStatementContext::Do() {
  return getToken(cpp::Do, 0);
}

cpp::ExpressionContext* cpp::IterationStatementContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

tree::TerminalNode* cpp::IterationStatementContext::Semi() {
  return getToken(cpp::Semi, 0);
}

tree::TerminalNode* cpp::IterationStatementContext::For() {
  return getToken(cpp::For, 0);
}

cpp::ForInitStatementContext* cpp::IterationStatementContext::forInitStatement() {
  return getRuleContext<cpp::ForInitStatementContext>(0);
}

cpp::ForRangeDeclarationContext* cpp::IterationStatementContext::forRangeDeclaration() {
  return getRuleContext<cpp::ForRangeDeclarationContext>(0);
}

tree::TerminalNode* cpp::IterationStatementContext::Colon() {
  return getToken(cpp::Colon, 0);
}

cpp::ForRangeInitializerContext* cpp::IterationStatementContext::forRangeInitializer() {
  return getRuleContext<cpp::ForRangeInitializerContext>(0);
}


size_t cpp::IterationStatementContext::getRuleIndex() const {
  return cpp::RuleIterationStatement;
}


cpp::IterationStatementContext* cpp::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 108, cpp::RuleIterationStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(956);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::While: {
        enterOuterAlt(_localctx, 1);
        setState(923);
        match(cpp::While);
        setState(924);
        match(cpp::LeftParen);
        setState(925);
        condition();
        setState(926);
        match(cpp::RightParen);
        setState(927);
        statement();
        break;
      }

      case cpp::Do: {
        enterOuterAlt(_localctx, 2);
        setState(929);
        match(cpp::Do);
        setState(930);
        statement();
        setState(931);
        match(cpp::While);
        setState(932);
        match(cpp::LeftParen);
        setState(933);
        expression();
        setState(934);
        match(cpp::RightParen);
        setState(935);
        match(cpp::Semi);
        break;
      }

      case cpp::For: {
        enterOuterAlt(_localctx, 3);
        setState(937);
        match(cpp::For);
        setState(938);
        match(cpp::LeftParen);
        setState(951);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
        case 1: {
          setState(939);
          forInitStatement();
          setState(941);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
            | (1ULL << cpp::CharacterLiteral)
            | (1ULL << cpp::FloatingLiteral)
            | (1ULL << cpp::StringLiteral)
            | (1ULL << cpp::BooleanLiteral)
            | (1ULL << cpp::PointerLiteral)
            | (1ULL << cpp::UserDefinedLiteral)
            | (1ULL << cpp::Alignas)
            | (1ULL << cpp::Alignof)
            | (1ULL << cpp::Auto)
            | (1ULL << cpp::Bool)
            | (1ULL << cpp::Char)
            | (1ULL << cpp::Char16)
            | (1ULL << cpp::Char32)
            | (1ULL << cpp::Class)
            | (1ULL << cpp::Const)
            | (1ULL << cpp::Constexpr)
            | (1ULL << cpp::Const_cast)
            | (1ULL << cpp::Decltype)
            | (1ULL << cpp::Delete)
            | (1ULL << cpp::Double)
            | (1ULL << cpp::Dynamic_cast)
            | (1ULL << cpp::Enum)
            | (1ULL << cpp::Explicit)
            | (1ULL << cpp::Extern)
            | (1ULL << cpp::Float)
            | (1ULL << cpp::Friend)
            | (1ULL << cpp::Inline)
            | (1ULL << cpp::Int)
            | (1ULL << cpp::Long)
            | (1ULL << cpp::Mutable)
            | (1ULL << cpp::New)
            | (1ULL << cpp::Noexcept)
            | (1ULL << cpp::Operator)
            | (1ULL << cpp::Register)
            | (1ULL << cpp::Reinterpret_cast)
            | (1ULL << cpp::Short)
            | (1ULL << cpp::Signed)
            | (1ULL << cpp::Sizeof)
            | (1ULL << cpp::Static))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
            | (1ULL << (cpp::Struct - 65))
            | (1ULL << (cpp::This - 65))
            | (1ULL << (cpp::Thread_local - 65))
            | (1ULL << (cpp::Throw - 65))
            | (1ULL << (cpp::Typedef - 65))
            | (1ULL << (cpp::Typeid_ - 65))
            | (1ULL << (cpp::Typename_ - 65))
            | (1ULL << (cpp::Union - 65))
            | (1ULL << (cpp::Unsigned - 65))
            | (1ULL << (cpp::Virtual - 65))
            | (1ULL << (cpp::Void - 65))
            | (1ULL << (cpp::Volatile - 65))
            | (1ULL << (cpp::Wchar - 65))
            | (1ULL << (cpp::LeftParen - 65))
            | (1ULL << (cpp::LeftBracket - 65))
            | (1ULL << (cpp::Plus - 65))
            | (1ULL << (cpp::Minus - 65))
            | (1ULL << (cpp::Star - 65))
            | (1ULL << (cpp::And - 65))
            | (1ULL << (cpp::Or - 65))
            | (1ULL << (cpp::Tilde - 65))
            | (1ULL << (cpp::Not - 65))
            | (1ULL << (cpp::PlusPlus - 65))
            | (1ULL << (cpp::MinusMinus - 65))
            | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
            setState(940);
            condition();
          }
          setState(943);
          match(cpp::Semi);
          setState(945);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
            | (1ULL << cpp::CharacterLiteral)
            | (1ULL << cpp::FloatingLiteral)
            | (1ULL << cpp::StringLiteral)
            | (1ULL << cpp::BooleanLiteral)
            | (1ULL << cpp::PointerLiteral)
            | (1ULL << cpp::UserDefinedLiteral)
            | (1ULL << cpp::Alignof)
            | (1ULL << cpp::Auto)
            | (1ULL << cpp::Bool)
            | (1ULL << cpp::Char)
            | (1ULL << cpp::Char16)
            | (1ULL << cpp::Char32)
            | (1ULL << cpp::Const_cast)
            | (1ULL << cpp::Decltype)
            | (1ULL << cpp::Delete)
            | (1ULL << cpp::Double)
            | (1ULL << cpp::Dynamic_cast)
            | (1ULL << cpp::Float)
            | (1ULL << cpp::Int)
            | (1ULL << cpp::Long)
            | (1ULL << cpp::New)
            | (1ULL << cpp::Noexcept)
            | (1ULL << cpp::Operator)
            | (1ULL << cpp::Reinterpret_cast)
            | (1ULL << cpp::Short)
            | (1ULL << cpp::Signed)
            | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
            | (1ULL << (cpp::This - 65))
            | (1ULL << (cpp::Throw - 65))
            | (1ULL << (cpp::Typeid_ - 65))
            | (1ULL << (cpp::Typename_ - 65))
            | (1ULL << (cpp::Unsigned - 65))
            | (1ULL << (cpp::Void - 65))
            | (1ULL << (cpp::Wchar - 65))
            | (1ULL << (cpp::LeftParen - 65))
            | (1ULL << (cpp::LeftBracket - 65))
            | (1ULL << (cpp::Plus - 65))
            | (1ULL << (cpp::Minus - 65))
            | (1ULL << (cpp::Star - 65))
            | (1ULL << (cpp::And - 65))
            | (1ULL << (cpp::Or - 65))
            | (1ULL << (cpp::Tilde - 65))
            | (1ULL << (cpp::Not - 65))
            | (1ULL << (cpp::PlusPlus - 65))
            | (1ULL << (cpp::MinusMinus - 65))
            | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
            setState(944);
            expression();
          }
          break;
        }

        case 2: {
          setState(947);
          forRangeDeclaration();
          setState(948);
          match(cpp::Colon);
          setState(949);
          forRangeInitializer();
          break;
        }

        }
        setState(953);
        match(cpp::RightParen);
        setState(954);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitStatementContext ------------------------------------------------------------------

cpp::ForInitStatementContext::ForInitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ExpressionStatementContext* cpp::ForInitStatementContext::expressionStatement() {
  return getRuleContext<cpp::ExpressionStatementContext>(0);
}

cpp::SimpleDeclarationContext* cpp::ForInitStatementContext::simpleDeclaration() {
  return getRuleContext<cpp::SimpleDeclarationContext>(0);
}


size_t cpp::ForInitStatementContext::getRuleIndex() const {
  return cpp::RuleForInitStatement;
}


cpp::ForInitStatementContext* cpp::forInitStatement() {
  ForInitStatementContext *_localctx = _tracker.createInstance<ForInitStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, cpp::RuleForInitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(960);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(958);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(959);
      simpleDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeDeclarationContext ------------------------------------------------------------------

cpp::ForRangeDeclarationContext::ForRangeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::DeclSpecifierSeqContext* cpp::ForRangeDeclarationContext::declSpecifierSeq() {
  return getRuleContext<cpp::DeclSpecifierSeqContext>(0);
}

cpp::DeclaratorContext* cpp::ForRangeDeclarationContext::declarator() {
  return getRuleContext<cpp::DeclaratorContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::ForRangeDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::ForRangeDeclarationContext::getRuleIndex() const {
  return cpp::RuleForRangeDeclaration;
}


cpp::ForRangeDeclarationContext* cpp::forRangeDeclaration() {
  ForRangeDeclarationContext *_localctx = _tracker.createInstance<ForRangeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 112, cpp::RuleForRangeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(963);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(962);
      attributeSpecifierSeq();
    }
    setState(965);
    declSpecifierSeq();
    setState(966);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeInitializerContext ------------------------------------------------------------------

cpp::ForRangeInitializerContext::ForRangeInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ExpressionContext* cpp::ForRangeInitializerContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

cpp::BracedInitListContext* cpp::ForRangeInitializerContext::bracedInitList() {
  return getRuleContext<cpp::BracedInitListContext>(0);
}


size_t cpp::ForRangeInitializerContext::getRuleIndex() const {
  return cpp::RuleForRangeInitializer;
}


cpp::ForRangeInitializerContext* cpp::forRangeInitializer() {
  ForRangeInitializerContext *_localctx = _tracker.createInstance<ForRangeInitializerContext>(_ctx, getState());
  enterRule(_localctx, 114, cpp::RuleForRangeInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(970);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::IntegerLiteral:
      case cpp::CharacterLiteral:
      case cpp::FloatingLiteral:
      case cpp::StringLiteral:
      case cpp::BooleanLiteral:
      case cpp::PointerLiteral:
      case cpp::UserDefinedLiteral:
      case cpp::Alignof:
      case cpp::Auto:
      case cpp::Bool:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Const_cast:
      case cpp::Decltype:
      case cpp::Delete:
      case cpp::Double:
      case cpp::Dynamic_cast:
      case cpp::Float:
      case cpp::Int:
      case cpp::Long:
      case cpp::New:
      case cpp::Noexcept:
      case cpp::Operator:
      case cpp::Reinterpret_cast:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Sizeof:
      case cpp::Static_cast:
      case cpp::This:
      case cpp::Throw:
      case cpp::Typeid_:
      case cpp::Typename_:
      case cpp::Unsigned:
      case cpp::Void:
      case cpp::Wchar:
      case cpp::LeftParen:
      case cpp::LeftBracket:
      case cpp::Plus:
      case cpp::Minus:
      case cpp::Star:
      case cpp::And:
      case cpp::Or:
      case cpp::Tilde:
      case cpp::Not:
      case cpp::PlusPlus:
      case cpp::MinusMinus:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(968);
        expression();
        break;
      }

      case cpp::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(969);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

cpp::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::JumpStatementContext::Semi() {
  return getToken(cpp::Semi, 0);
}

tree::TerminalNode* cpp::JumpStatementContext::Break() {
  return getToken(cpp::Break, 0);
}

tree::TerminalNode* cpp::JumpStatementContext::Continue() {
  return getToken(cpp::Continue, 0);
}

tree::TerminalNode* cpp::JumpStatementContext::Return() {
  return getToken(cpp::Return, 0);
}

tree::TerminalNode* cpp::JumpStatementContext::Goto() {
  return getToken(cpp::Goto, 0);
}

tree::TerminalNode* cpp::JumpStatementContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::ExpressionContext* cpp::JumpStatementContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

cpp::BracedInitListContext* cpp::JumpStatementContext::bracedInitList() {
  return getRuleContext<cpp::BracedInitListContext>(0);
}


size_t cpp::JumpStatementContext::getRuleIndex() const {
  return cpp::RuleJumpStatement;
}


cpp::JumpStatementContext* cpp::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 116, cpp::RuleJumpStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(981);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Break: {
        setState(972);
        match(cpp::Break);
        break;
      }

      case cpp::Continue: {
        setState(973);
        match(cpp::Continue);
        break;
      }

      case cpp::Return: {
        setState(974);
        match(cpp::Return);
        setState(977);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case cpp::IntegerLiteral:
          case cpp::CharacterLiteral:
          case cpp::FloatingLiteral:
          case cpp::StringLiteral:
          case cpp::BooleanLiteral:
          case cpp::PointerLiteral:
          case cpp::UserDefinedLiteral:
          case cpp::Alignof:
          case cpp::Auto:
          case cpp::Bool:
          case cpp::Char:
          case cpp::Char16:
          case cpp::Char32:
          case cpp::Const_cast:
          case cpp::Decltype:
          case cpp::Delete:
          case cpp::Double:
          case cpp::Dynamic_cast:
          case cpp::Float:
          case cpp::Int:
          case cpp::Long:
          case cpp::New:
          case cpp::Noexcept:
          case cpp::Operator:
          case cpp::Reinterpret_cast:
          case cpp::Short:
          case cpp::Signed:
          case cpp::Sizeof:
          case cpp::Static_cast:
          case cpp::This:
          case cpp::Throw:
          case cpp::Typeid_:
          case cpp::Typename_:
          case cpp::Unsigned:
          case cpp::Void:
          case cpp::Wchar:
          case cpp::LeftParen:
          case cpp::LeftBracket:
          case cpp::Plus:
          case cpp::Minus:
          case cpp::Star:
          case cpp::And:
          case cpp::Or:
          case cpp::Tilde:
          case cpp::Not:
          case cpp::PlusPlus:
          case cpp::MinusMinus:
          case cpp::Doublecolon:
          case cpp::Identifier: {
            setState(975);
            expression();
            break;
          }

          case cpp::LeftBrace: {
            setState(976);
            bracedInitList();
            break;
          }

          case cpp::Semi: {
            break;
          }

        default:
          break;
        }
        break;
      }

      case cpp::Goto: {
        setState(979);
        match(cpp::Goto);
        setState(980);
        match(cpp::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(983);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

cpp::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::BlockDeclarationContext* cpp::DeclarationStatementContext::blockDeclaration() {
  return getRuleContext<cpp::BlockDeclarationContext>(0);
}


size_t cpp::DeclarationStatementContext::getRuleIndex() const {
  return cpp::RuleDeclarationStatement;
}


cpp::DeclarationStatementContext* cpp::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, cpp::RuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(985);
    dynamic_cast<DeclarationStatementContext *>(_localctx)->decl = blockDeclaration();

            dynamic_cast<DeclarationStatementContext *>(_localctx)->resultDocText =  dynamic_cast<DeclarationStatementContext *>(_localctx)->decl->resultDocText;
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

cpp::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::DeclarationContext *> cpp::DeclarationseqContext::declaration() {
  return getRuleContexts<cpp::DeclarationContext>();
}

cpp::DeclarationContext* cpp::DeclarationseqContext::declaration(size_t i) {
  return getRuleContext<cpp::DeclarationContext>(i);
}


size_t cpp::DeclarationseqContext::getRuleIndex() const {
  return cpp::RuleDeclarationseq;
}


cpp::DeclarationseqContext* cpp::declarationseq() {
  DeclarationseqContext *_localctx = _tracker.createInstance<DeclarationseqContext>(_ctx, getState());
  enterRule(_localctx, 120, cpp::RuleDeclarationseq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(991); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(988);
      dynamic_cast<DeclarationseqContext *>(_localctx)->decl = declaration();

              _localctx->resultDocStream << dynamic_cast<DeclarationseqContext *>(_localctx)->decl->resultDocText;
          
      setState(993); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::Alignas)
      | (1ULL << cpp::Asm)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Namespace)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Template - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128)))) != 0));

            dynamic_cast<DeclarationseqContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

cpp::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::BlockDeclarationContext* cpp::DeclarationContext::blockDeclaration() {
  return getRuleContext<cpp::BlockDeclarationContext>(0);
}

cpp::FunctionDefinitionContext* cpp::DeclarationContext::functionDefinition() {
  return getRuleContext<cpp::FunctionDefinitionContext>(0);
}

cpp::TemplateDeclarationContext* cpp::DeclarationContext::templateDeclaration() {
  return getRuleContext<cpp::TemplateDeclarationContext>(0);
}

cpp::ExplicitInstantiationContext* cpp::DeclarationContext::explicitInstantiation() {
  return getRuleContext<cpp::ExplicitInstantiationContext>(0);
}

cpp::ExplicitSpecializationContext* cpp::DeclarationContext::explicitSpecialization() {
  return getRuleContext<cpp::ExplicitSpecializationContext>(0);
}

cpp::LinkageSpecificationContext* cpp::DeclarationContext::linkageSpecification() {
  return getRuleContext<cpp::LinkageSpecificationContext>(0);
}

cpp::NamespaceDefinitionContext* cpp::DeclarationContext::namespaceDefinition() {
  return getRuleContext<cpp::NamespaceDefinitionContext>(0);
}

cpp::EmptyDeclaration_Context* cpp::DeclarationContext::emptyDeclaration_() {
  return getRuleContext<cpp::EmptyDeclaration_Context>(0);
}

cpp::AttributeDeclarationContext* cpp::DeclarationContext::attributeDeclaration() {
  return getRuleContext<cpp::AttributeDeclarationContext>(0);
}


size_t cpp::DeclarationContext::getRuleIndex() const {
  return cpp::RuleDeclaration;
}


cpp::DeclarationContext* cpp::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 122, cpp::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1008);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(997);
      dynamic_cast<DeclarationContext *>(_localctx)->bd = blockDeclaration();

              dynamic_cast<DeclarationContext *>(_localctx)->resultDocText =  dynamic_cast<DeclarationContext *>(_localctx)->bd->resultDocText;
          
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1000);
      functionDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1001);
      templateDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1002);
      explicitInstantiation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1003);
      explicitSpecialization();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1004);
      linkageSpecification();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1005);
      namespaceDefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1006);
      emptyDeclaration_();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1007);
      attributeDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockDeclarationContext ------------------------------------------------------------------

cpp::BlockDeclarationContext::BlockDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::SimpleDeclarationContext* cpp::BlockDeclarationContext::simpleDeclaration() {
  return getRuleContext<cpp::SimpleDeclarationContext>(0);
}

cpp::AsmDefinitionContext* cpp::BlockDeclarationContext::asmDefinition() {
  return getRuleContext<cpp::AsmDefinitionContext>(0);
}

cpp::NamespaceAliasDefinitionContext* cpp::BlockDeclarationContext::namespaceAliasDefinition() {
  return getRuleContext<cpp::NamespaceAliasDefinitionContext>(0);
}

cpp::UsingDeclarationContext* cpp::BlockDeclarationContext::usingDeclaration() {
  return getRuleContext<cpp::UsingDeclarationContext>(0);
}

cpp::UsingDirectiveContext* cpp::BlockDeclarationContext::usingDirective() {
  return getRuleContext<cpp::UsingDirectiveContext>(0);
}

cpp::StaticAssertDeclarationContext* cpp::BlockDeclarationContext::staticAssertDeclaration() {
  return getRuleContext<cpp::StaticAssertDeclarationContext>(0);
}

cpp::AliasDeclarationContext* cpp::BlockDeclarationContext::aliasDeclaration() {
  return getRuleContext<cpp::AliasDeclarationContext>(0);
}

cpp::OpaqueEnumDeclarationContext* cpp::BlockDeclarationContext::opaqueEnumDeclaration() {
  return getRuleContext<cpp::OpaqueEnumDeclarationContext>(0);
}


size_t cpp::BlockDeclarationContext::getRuleIndex() const {
  return cpp::RuleBlockDeclaration;
}


cpp::BlockDeclarationContext* cpp::blockDeclaration() {
  BlockDeclarationContext *_localctx = _tracker.createInstance<BlockDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 124, cpp::RuleBlockDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1020);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1010);
      dynamic_cast<BlockDeclarationContext *>(_localctx)->decl = simpleDeclaration();

              dynamic_cast<BlockDeclarationContext *>(_localctx)->resultDocText =  dynamic_cast<BlockDeclarationContext *>(_localctx)->decl->resultDocText;
          
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1013);
      asmDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1014);
      namespaceAliasDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1015);
      usingDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1016);
      usingDirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1017);
      staticAssertDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1018);
      aliasDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1019);
      opaqueEnumDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasDeclarationContext ------------------------------------------------------------------

cpp::AliasDeclarationContext::AliasDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::AliasDeclarationContext::Using() {
  return getToken(cpp::Using, 0);
}

tree::TerminalNode* cpp::AliasDeclarationContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

tree::TerminalNode* cpp::AliasDeclarationContext::Assign() {
  return getToken(cpp::Assign, 0);
}

cpp::TheTypeIdContext* cpp::AliasDeclarationContext::theTypeId() {
  return getRuleContext<cpp::TheTypeIdContext>(0);
}

tree::TerminalNode* cpp::AliasDeclarationContext::Semi() {
  return getToken(cpp::Semi, 0);
}

cpp::AttributeSpecifierSeqContext* cpp::AliasDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::AliasDeclarationContext::getRuleIndex() const {
  return cpp::RuleAliasDeclaration;
}


cpp::AliasDeclarationContext* cpp::aliasDeclaration() {
  AliasDeclarationContext *_localctx = _tracker.createInstance<AliasDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 126, cpp::RuleAliasDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1022);
    match(cpp::Using);
    setState(1023);
    match(cpp::Identifier);
    setState(1025);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(1024);
      attributeSpecifierSeq();
    }
    setState(1027);
    match(cpp::Assign);
    setState(1028);
    theTypeId();
    setState(1029);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleDeclarationContext ------------------------------------------------------------------

cpp::SimpleDeclarationContext::SimpleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::SimpleDeclarationContext::Semi() {
  return getToken(cpp::Semi, 0);
}

cpp::AttributeSpecifierSeqContext* cpp::SimpleDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::InitDeclaratorListContext* cpp::SimpleDeclarationContext::initDeclaratorList() {
  return getRuleContext<cpp::InitDeclaratorListContext>(0);
}

cpp::DeclSpecifierSeqContext* cpp::SimpleDeclarationContext::declSpecifierSeq() {
  return getRuleContext<cpp::DeclSpecifierSeqContext>(0);
}

std::vector<cpp::DocCommentContext *> cpp::SimpleDeclarationContext::docComment() {
  return getRuleContexts<cpp::DocCommentContext>();
}

cpp::DocCommentContext* cpp::SimpleDeclarationContext::docComment(size_t i) {
  return getRuleContext<cpp::DocCommentContext>(i);
}


size_t cpp::SimpleDeclarationContext::getRuleIndex() const {
  return cpp::RuleSimpleDeclaration;
}


cpp::SimpleDeclarationContext* cpp::simpleDeclaration() {
  SimpleDeclarationContext *_localctx = _tracker.createInstance<SimpleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 128, cpp::RuleSimpleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1065);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Auto:
      case cpp::Bool:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Class:
      case cpp::Const:
      case cpp::Constexpr:
      case cpp::Decltype:
      case cpp::Double:
      case cpp::Enum:
      case cpp::Explicit:
      case cpp::Extern:
      case cpp::Float:
      case cpp::Friend:
      case cpp::Inline:
      case cpp::Int:
      case cpp::Long:
      case cpp::Mutable:
      case cpp::Operator:
      case cpp::Register:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Static:
      case cpp::Struct:
      case cpp::Thread_local:
      case cpp::Typedef:
      case cpp::Typename_:
      case cpp::Union:
      case cpp::Unsigned:
      case cpp::Virtual:
      case cpp::Void:
      case cpp::Volatile:
      case cpp::Wchar:
      case cpp::LeftParen:
      case cpp::Star:
      case cpp::And:
      case cpp::Tilde:
      case cpp::AndAnd:
      case cpp::Doublecolon:
      case cpp::Semi:
      case cpp::Ellipsis:
      case cpp::Identifier:
      case cpp::DocBlockComment:
      case cpp::DocLineComment: {
        setState(1036);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == cpp::DocBlockComment

        || _la == cpp::DocLineComment) {
          setState(1031);
          dynamic_cast<SimpleDeclarationContext *>(_localctx)->comment = docComment();

                      _localctx->resultDocStream << dynamic_cast<SimpleDeclarationContext *>(_localctx)->comment->commentText;
                  
          setState(1038);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1042);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
        case 1: {
          setState(1039);
          dynamic_cast<SimpleDeclarationContext *>(_localctx)->dsq = declSpecifierSeq();

                      _localctx->resultDocStream << dynamic_cast<SimpleDeclarationContext *>(_localctx)->dsq->resultDocText;
                  
          break;
        }

        }
        setState(1047);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Decltype

        || _la == cpp::Operator || ((((_la - 85) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 85)) & ((1ULL << (cpp::LeftParen - 85))
          | (1ULL << (cpp::Star - 85))
          | (1ULL << (cpp::And - 85))
          | (1ULL << (cpp::Tilde - 85))
          | (1ULL << (cpp::AndAnd - 85))
          | (1ULL << (cpp::Doublecolon - 85))
          | (1ULL << (cpp::Ellipsis - 85))
          | (1ULL << (cpp::Identifier - 85)))) != 0)) {
          setState(1044);
          dynamic_cast<SimpleDeclarationContext *>(_localctx)->idl = initDeclaratorList();

                      _localctx->resultDocStream << dynamic_cast<SimpleDeclarationContext *>(_localctx)->idl->resultDocText;
                  
        }
        setState(1049);
        match(cpp::Semi);
        setState(1055);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1050);
            dynamic_cast<SimpleDeclarationContext *>(_localctx)->comment = docComment();

                        _localctx->resultDocStream << dynamic_cast<SimpleDeclarationContext *>(_localctx)->comment->commentText;
                     
          }
          setState(1057);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx);
        }
        break;
      }

      case cpp::Alignas:
      case cpp::LeftBracket: {
        setState(1058);
        attributeSpecifierSeq();
        setState(1060);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
        case 1: {
          setState(1059);
          declSpecifierSeq();
          break;
        }

        }
        setState(1062);
        initDeclaratorList();
        setState(1063);
        match(cpp::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }

            dynamic_cast<SimpleDeclarationContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticAssertDeclarationContext ------------------------------------------------------------------

cpp::StaticAssertDeclarationContext::StaticAssertDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::StaticAssertDeclarationContext::Static_assert() {
  return getToken(cpp::Static_assert, 0);
}

tree::TerminalNode* cpp::StaticAssertDeclarationContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ConstantExpressionContext* cpp::StaticAssertDeclarationContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}

tree::TerminalNode* cpp::StaticAssertDeclarationContext::Comma() {
  return getToken(cpp::Comma, 0);
}

tree::TerminalNode* cpp::StaticAssertDeclarationContext::StringLiteral() {
  return getToken(cpp::StringLiteral, 0);
}

tree::TerminalNode* cpp::StaticAssertDeclarationContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

tree::TerminalNode* cpp::StaticAssertDeclarationContext::Semi() {
  return getToken(cpp::Semi, 0);
}


size_t cpp::StaticAssertDeclarationContext::getRuleIndex() const {
  return cpp::RuleStaticAssertDeclaration;
}


cpp::StaticAssertDeclarationContext* cpp::staticAssertDeclaration() {
  StaticAssertDeclarationContext *_localctx = _tracker.createInstance<StaticAssertDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 130, cpp::RuleStaticAssertDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1069);
    match(cpp::Static_assert);
    setState(1070);
    match(cpp::LeftParen);
    setState(1071);
    constantExpression();
    setState(1072);
    match(cpp::Comma);
    setState(1073);
    match(cpp::StringLiteral);
    setState(1074);
    match(cpp::RightParen);
    setState(1075);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyDeclaration_Context ------------------------------------------------------------------

cpp::EmptyDeclaration_Context::EmptyDeclaration_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::EmptyDeclaration_Context::Semi() {
  return getToken(cpp::Semi, 0);
}


size_t cpp::EmptyDeclaration_Context::getRuleIndex() const {
  return cpp::RuleEmptyDeclaration_;
}


cpp::EmptyDeclaration_Context* cpp::emptyDeclaration_() {
  EmptyDeclaration_Context *_localctx = _tracker.createInstance<EmptyDeclaration_Context>(_ctx, getState());
  enterRule(_localctx, 132, cpp::RuleEmptyDeclaration_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1077);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeDeclarationContext ------------------------------------------------------------------

cpp::AttributeDeclarationContext::AttributeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::AttributeSpecifierSeqContext* cpp::AttributeDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* cpp::AttributeDeclarationContext::Semi() {
  return getToken(cpp::Semi, 0);
}


size_t cpp::AttributeDeclarationContext::getRuleIndex() const {
  return cpp::RuleAttributeDeclaration;
}


cpp::AttributeDeclarationContext* cpp::attributeDeclaration() {
  AttributeDeclarationContext *_localctx = _tracker.createInstance<AttributeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 134, cpp::RuleAttributeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1079);
    attributeSpecifierSeq();
    setState(1080);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclSpecifierContext ------------------------------------------------------------------

cpp::DeclSpecifierContext::DeclSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::StorageClassSpecifierContext* cpp::DeclSpecifierContext::storageClassSpecifier() {
  return getRuleContext<cpp::StorageClassSpecifierContext>(0);
}

cpp::TypeSpecifierContext* cpp::DeclSpecifierContext::typeSpecifier() {
  return getRuleContext<cpp::TypeSpecifierContext>(0);
}

cpp::FunctionSpecifierContext* cpp::DeclSpecifierContext::functionSpecifier() {
  return getRuleContext<cpp::FunctionSpecifierContext>(0);
}

tree::TerminalNode* cpp::DeclSpecifierContext::Friend() {
  return getToken(cpp::Friend, 0);
}

tree::TerminalNode* cpp::DeclSpecifierContext::Typedef() {
  return getToken(cpp::Typedef, 0);
}

tree::TerminalNode* cpp::DeclSpecifierContext::Constexpr() {
  return getToken(cpp::Constexpr, 0);
}


size_t cpp::DeclSpecifierContext::getRuleIndex() const {
  return cpp::RuleDeclSpecifier;
}


cpp::DeclSpecifierContext* cpp::declSpecifier() {
  DeclSpecifierContext *_localctx = _tracker.createInstance<DeclSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 136, cpp::RuleDeclSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1090);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Extern:
      case cpp::Mutable:
      case cpp::Register:
      case cpp::Static:
      case cpp::Thread_local: {
        enterOuterAlt(_localctx, 1);
        setState(1082);
        storageClassSpecifier();
        break;
      }

      case cpp::Auto:
      case cpp::Bool:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Class:
      case cpp::Const:
      case cpp::Decltype:
      case cpp::Double:
      case cpp::Enum:
      case cpp::Float:
      case cpp::Int:
      case cpp::Long:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Struct:
      case cpp::Typename_:
      case cpp::Union:
      case cpp::Unsigned:
      case cpp::Void:
      case cpp::Volatile:
      case cpp::Wchar:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1083);
        dynamic_cast<DeclSpecifierContext *>(_localctx)->ts = typeSpecifier();

                dynamic_cast<DeclSpecifierContext *>(_localctx)->resultDocText =  dynamic_cast<DeclSpecifierContext *>(_localctx)->ts->resultDocText;
            
        break;
      }

      case cpp::Explicit:
      case cpp::Inline:
      case cpp::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1086);
        functionSpecifier();
        break;
      }

      case cpp::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1087);
        match(cpp::Friend);
        break;
      }

      case cpp::Typedef: {
        enterOuterAlt(_localctx, 5);
        setState(1088);
        match(cpp::Typedef);
        break;
      }

      case cpp::Constexpr: {
        enterOuterAlt(_localctx, 6);
        setState(1089);
        match(cpp::Constexpr);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclSpecifierSeqContext ------------------------------------------------------------------

cpp::DeclSpecifierSeqContext::DeclSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::AttributeSpecifierSeqContext* cpp::DeclSpecifierSeqContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

std::vector<cpp::DeclSpecifierContext *> cpp::DeclSpecifierSeqContext::declSpecifier() {
  return getRuleContexts<cpp::DeclSpecifierContext>();
}

cpp::DeclSpecifierContext* cpp::DeclSpecifierSeqContext::declSpecifier(size_t i) {
  return getRuleContext<cpp::DeclSpecifierContext>(i);
}


size_t cpp::DeclSpecifierSeqContext::getRuleIndex() const {
  return cpp::RuleDeclSpecifierSeq;
}


cpp::DeclSpecifierSeqContext* cpp::declSpecifierSeq() {
  DeclSpecifierSeqContext *_localctx = _tracker.createInstance<DeclSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 138, cpp::RuleDeclSpecifierSeq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1095); 
    _errHandler->sync(this);
    alt = 1 + 1;
    do {
      switch (alt) {
        case 1 + 1: {
              setState(1092);
              dynamic_cast<DeclSpecifierSeqContext *>(_localctx)->ds = declSpecifier();

                      _localctx->resultDocStream << dynamic_cast<DeclSpecifierSeqContext *>(_localctx)->ds->resultDocText;
                  
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1097); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx);
    } while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1100);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      setState(1099);
      attributeSpecifierSeq();
      break;
    }

    }

            dynamic_cast<DeclSpecifierSeqContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

cpp::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::StorageClassSpecifierContext::Register() {
  return getToken(cpp::Register, 0);
}

tree::TerminalNode* cpp::StorageClassSpecifierContext::Static() {
  return getToken(cpp::Static, 0);
}

tree::TerminalNode* cpp::StorageClassSpecifierContext::Thread_local() {
  return getToken(cpp::Thread_local, 0);
}

tree::TerminalNode* cpp::StorageClassSpecifierContext::Extern() {
  return getToken(cpp::Extern, 0);
}

tree::TerminalNode* cpp::StorageClassSpecifierContext::Mutable() {
  return getToken(cpp::Mutable, 0);
}


size_t cpp::StorageClassSpecifierContext::getRuleIndex() const {
  return cpp::RuleStorageClassSpecifier;
}


cpp::StorageClassSpecifierContext* cpp::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 140, cpp::RuleStorageClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1104);
    _la = _input->LA(1);
    if (!(((((_la - 36) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 36)) & ((1ULL << (cpp::Extern - 36))
      | (1ULL << (cpp::Mutable - 36))
      | (1ULL << (cpp::Register - 36))
      | (1ULL << (cpp::Static - 36))
      | (1ULL << (cpp::Thread_local - 36)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSpecifierContext ------------------------------------------------------------------

cpp::FunctionSpecifierContext::FunctionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::FunctionSpecifierContext::Inline() {
  return getToken(cpp::Inline, 0);
}

tree::TerminalNode* cpp::FunctionSpecifierContext::Virtual() {
  return getToken(cpp::Virtual, 0);
}

tree::TerminalNode* cpp::FunctionSpecifierContext::Explicit() {
  return getToken(cpp::Explicit, 0);
}


size_t cpp::FunctionSpecifierContext::getRuleIndex() const {
  return cpp::RuleFunctionSpecifier;
}


cpp::FunctionSpecifierContext* cpp::functionSpecifier() {
  FunctionSpecifierContext *_localctx = _tracker.createInstance<FunctionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 142, cpp::RuleFunctionSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1106);
    _la = _input->LA(1);
    if (!(((((_la - 34) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 34)) & ((1ULL << (cpp::Explicit - 34))
      | (1ULL << (cpp::Inline - 34))
      | (1ULL << (cpp::Virtual - 34)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefNameContext ------------------------------------------------------------------

cpp::TypedefNameContext::TypedefNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TypedefNameContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::TypedefNameContext::getRuleIndex() const {
  return cpp::RuleTypedefName;
}


cpp::TypedefNameContext* cpp::typedefName() {
  TypedefNameContext *_localctx = _tracker.createInstance<TypedefNameContext>(_ctx, getState());
  enterRule(_localctx, 144, cpp::RuleTypedefName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1108);
    match(cpp::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

cpp::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TrailingTypeSpecifierContext* cpp::TypeSpecifierContext::trailingTypeSpecifier() {
  return getRuleContext<cpp::TrailingTypeSpecifierContext>(0);
}

cpp::ClassSpecifierContext* cpp::TypeSpecifierContext::classSpecifier() {
  return getRuleContext<cpp::ClassSpecifierContext>(0);
}

cpp::EnumSpecifierContext* cpp::TypeSpecifierContext::enumSpecifier() {
  return getRuleContext<cpp::EnumSpecifierContext>(0);
}


size_t cpp::TypeSpecifierContext::getRuleIndex() const {
  return cpp::RuleTypeSpecifier;
}


cpp::TypeSpecifierContext* cpp::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 146, cpp::RuleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1110);
      trailingTypeSpecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1111);
      dynamic_cast<TypeSpecifierContext *>(_localctx)->cs = classSpecifier();

              dynamic_cast<TypeSpecifierContext *>(_localctx)->resultDocText =  dynamic_cast<TypeSpecifierContext *>(_localctx)->cs->resultDocText;
          
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1114);
      enumSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingTypeSpecifierContext ------------------------------------------------------------------

cpp::TrailingTypeSpecifierContext::TrailingTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::SimpleTypeSpecifierContext* cpp::TrailingTypeSpecifierContext::simpleTypeSpecifier() {
  return getRuleContext<cpp::SimpleTypeSpecifierContext>(0);
}

cpp::ElaboratedTypeSpecifierContext* cpp::TrailingTypeSpecifierContext::elaboratedTypeSpecifier() {
  return getRuleContext<cpp::ElaboratedTypeSpecifierContext>(0);
}

cpp::TypeNameSpecifierContext* cpp::TrailingTypeSpecifierContext::typeNameSpecifier() {
  return getRuleContext<cpp::TypeNameSpecifierContext>(0);
}

cpp::CvQualifierContext* cpp::TrailingTypeSpecifierContext::cvQualifier() {
  return getRuleContext<cpp::CvQualifierContext>(0);
}


size_t cpp::TrailingTypeSpecifierContext::getRuleIndex() const {
  return cpp::RuleTrailingTypeSpecifier;
}


cpp::TrailingTypeSpecifierContext* cpp::trailingTypeSpecifier() {
  TrailingTypeSpecifierContext *_localctx = _tracker.createInstance<TrailingTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 148, cpp::RuleTrailingTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1121);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Auto:
      case cpp::Bool:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Decltype:
      case cpp::Double:
      case cpp::Float:
      case cpp::Int:
      case cpp::Long:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Unsigned:
      case cpp::Void:
      case cpp::Wchar:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1117);
        simpleTypeSpecifier();
        break;
      }

      case cpp::Class:
      case cpp::Enum:
      case cpp::Struct: {
        enterOuterAlt(_localctx, 2);
        setState(1118);
        elaboratedTypeSpecifier();
        break;
      }

      case cpp::Typename_: {
        enterOuterAlt(_localctx, 3);
        setState(1119);
        typeNameSpecifier();
        break;
      }

      case cpp::Const:
      case cpp::Volatile: {
        enterOuterAlt(_localctx, 4);
        setState(1120);
        cvQualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierSeqContext ------------------------------------------------------------------

cpp::TypeSpecifierSeqContext::TypeSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::TypeSpecifierContext *> cpp::TypeSpecifierSeqContext::typeSpecifier() {
  return getRuleContexts<cpp::TypeSpecifierContext>();
}

cpp::TypeSpecifierContext* cpp::TypeSpecifierSeqContext::typeSpecifier(size_t i) {
  return getRuleContext<cpp::TypeSpecifierContext>(i);
}

cpp::AttributeSpecifierSeqContext* cpp::TypeSpecifierSeqContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::TypeSpecifierSeqContext::getRuleIndex() const {
  return cpp::RuleTypeSpecifierSeq;
}


cpp::TypeSpecifierSeqContext* cpp::typeSpecifierSeq() {
  TypeSpecifierSeqContext *_localctx = _tracker.createInstance<TypeSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 150, cpp::RuleTypeSpecifierSeq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1124); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1123);
              typeSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1126); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1129);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      setState(1128);
      attributeSpecifierSeq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingTypeSpecifierSeqContext ------------------------------------------------------------------

cpp::TrailingTypeSpecifierSeqContext::TrailingTypeSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::TrailingTypeSpecifierContext *> cpp::TrailingTypeSpecifierSeqContext::trailingTypeSpecifier() {
  return getRuleContexts<cpp::TrailingTypeSpecifierContext>();
}

cpp::TrailingTypeSpecifierContext* cpp::TrailingTypeSpecifierSeqContext::trailingTypeSpecifier(size_t i) {
  return getRuleContext<cpp::TrailingTypeSpecifierContext>(i);
}

cpp::AttributeSpecifierSeqContext* cpp::TrailingTypeSpecifierSeqContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::TrailingTypeSpecifierSeqContext::getRuleIndex() const {
  return cpp::RuleTrailingTypeSpecifierSeq;
}


cpp::TrailingTypeSpecifierSeqContext* cpp::trailingTypeSpecifierSeq() {
  TrailingTypeSpecifierSeqContext *_localctx = _tracker.createInstance<TrailingTypeSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 152, cpp::RuleTrailingTypeSpecifierSeq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1132); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1131);
              trailingTypeSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1134); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1137);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      setState(1136);
      attributeSpecifierSeq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeLengthModifierContext ------------------------------------------------------------------

cpp::SimpleTypeLengthModifierContext::SimpleTypeLengthModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::SimpleTypeLengthModifierContext::Short() {
  return getToken(cpp::Short, 0);
}

tree::TerminalNode* cpp::SimpleTypeLengthModifierContext::Long() {
  return getToken(cpp::Long, 0);
}


size_t cpp::SimpleTypeLengthModifierContext::getRuleIndex() const {
  return cpp::RuleSimpleTypeLengthModifier;
}


cpp::SimpleTypeLengthModifierContext* cpp::simpleTypeLengthModifier() {
  SimpleTypeLengthModifierContext *_localctx = _tracker.createInstance<SimpleTypeLengthModifierContext>(_ctx, getState());
  enterRule(_localctx, 154, cpp::RuleSimpleTypeLengthModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1139);
    _la = _input->LA(1);
    if (!(_la == cpp::Long

    || _la == cpp::Short)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeSignednessModifierContext ------------------------------------------------------------------

cpp::SimpleTypeSignednessModifierContext::SimpleTypeSignednessModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::SimpleTypeSignednessModifierContext::Unsigned() {
  return getToken(cpp::Unsigned, 0);
}

tree::TerminalNode* cpp::SimpleTypeSignednessModifierContext::Signed() {
  return getToken(cpp::Signed, 0);
}


size_t cpp::SimpleTypeSignednessModifierContext::getRuleIndex() const {
  return cpp::RuleSimpleTypeSignednessModifier;
}


cpp::SimpleTypeSignednessModifierContext* cpp::simpleTypeSignednessModifier() {
  SimpleTypeSignednessModifierContext *_localctx = _tracker.createInstance<SimpleTypeSignednessModifierContext>(_ctx, getState());
  enterRule(_localctx, 156, cpp::RuleSimpleTypeSignednessModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1141);
    _la = _input->LA(1);
    if (!(_la == cpp::Signed

    || _la == cpp::Unsigned)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeSpecifierContext ------------------------------------------------------------------

cpp::SimpleTypeSpecifierContext::SimpleTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TheTypeNameContext* cpp::SimpleTypeSpecifierContext::theTypeName() {
  return getRuleContext<cpp::TheTypeNameContext>(0);
}

cpp::NestedNameSpecifierContext* cpp::SimpleTypeSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Template() {
  return getToken(cpp::Template, 0);
}

cpp::SimpleTemplateIdContext* cpp::SimpleTypeSpecifierContext::simpleTemplateId() {
  return getRuleContext<cpp::SimpleTemplateIdContext>(0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Char() {
  return getToken(cpp::Char, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Char16() {
  return getToken(cpp::Char16, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Char32() {
  return getToken(cpp::Char32, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Wchar() {
  return getToken(cpp::Wchar, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Bool() {
  return getToken(cpp::Bool, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Short() {
  return getToken(cpp::Short, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Int() {
  return getToken(cpp::Int, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Long() {
  return getToken(cpp::Long, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Float() {
  return getToken(cpp::Float, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Signed() {
  return getToken(cpp::Signed, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Unsigned() {
  return getToken(cpp::Unsigned, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Double() {
  return getToken(cpp::Double, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Void() {
  return getToken(cpp::Void, 0);
}

tree::TerminalNode* cpp::SimpleTypeSpecifierContext::Auto() {
  return getToken(cpp::Auto, 0);
}

cpp::DecltypeSpecifierContext* cpp::SimpleTypeSpecifierContext::decltypeSpecifier() {
  return getRuleContext<cpp::DecltypeSpecifierContext>(0);
}


size_t cpp::SimpleTypeSpecifierContext::getRuleIndex() const {
  return cpp::RuleSimpleTypeSpecifier;
}


cpp::SimpleTypeSpecifierContext* cpp::simpleTypeSpecifier() {
  SimpleTypeSpecifierContext *_localctx = _tracker.createInstance<SimpleTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 158, cpp::RuleSimpleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1144);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
      case 1: {
        setState(1143);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1146);
      theTypeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1147);
      nestedNameSpecifier(0);
      setState(1148);
      match(cpp::Template);
      setState(1149);
      simpleTemplateId();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1151);
      match(cpp::Char);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1152);
      match(cpp::Char16);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1153);
      match(cpp::Char32);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1154);
      match(cpp::Wchar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1155);
      match(cpp::Bool);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1156);
      match(cpp::Short);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1157);
      match(cpp::Int);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1158);
      match(cpp::Long);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1159);
      match(cpp::Float);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1160);
      match(cpp::Signed);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1161);
      match(cpp::Unsigned);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1162);
      match(cpp::Float);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1163);
      match(cpp::Double);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1164);
      match(cpp::Void);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1165);
      match(cpp::Auto);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1166);
      decltypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheTypeNameContext ------------------------------------------------------------------

cpp::TheTypeNameContext::TheTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ClassNameContext* cpp::TheTypeNameContext::className() {
  return getRuleContext<cpp::ClassNameContext>(0);
}

cpp::EnumNameContext* cpp::TheTypeNameContext::enumName() {
  return getRuleContext<cpp::EnumNameContext>(0);
}

cpp::TypedefNameContext* cpp::TheTypeNameContext::typedefName() {
  return getRuleContext<cpp::TypedefNameContext>(0);
}

cpp::SimpleTemplateIdContext* cpp::TheTypeNameContext::simpleTemplateId() {
  return getRuleContext<cpp::SimpleTemplateIdContext>(0);
}


size_t cpp::TheTypeNameContext::getRuleIndex() const {
  return cpp::RuleTheTypeName;
}


cpp::TheTypeNameContext* cpp::theTypeName() {
  TheTypeNameContext *_localctx = _tracker.createInstance<TheTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 160, cpp::RuleTheTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1173);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1169);
      className();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1170);
      enumName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1171);
      typedefName();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1172);
      simpleTemplateId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecltypeSpecifierContext ------------------------------------------------------------------

cpp::DecltypeSpecifierContext::DecltypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::DecltypeSpecifierContext::Decltype() {
  return getToken(cpp::Decltype, 0);
}

tree::TerminalNode* cpp::DecltypeSpecifierContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::DecltypeSpecifierContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::ExpressionContext* cpp::DecltypeSpecifierContext::expression() {
  return getRuleContext<cpp::ExpressionContext>(0);
}

tree::TerminalNode* cpp::DecltypeSpecifierContext::Auto() {
  return getToken(cpp::Auto, 0);
}


size_t cpp::DecltypeSpecifierContext::getRuleIndex() const {
  return cpp::RuleDecltypeSpecifier;
}


cpp::DecltypeSpecifierContext* cpp::decltypeSpecifier() {
  DecltypeSpecifierContext *_localctx = _tracker.createInstance<DecltypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 162, cpp::RuleDecltypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1175);
    match(cpp::Decltype);
    setState(1176);
    match(cpp::LeftParen);
    setState(1179);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      setState(1177);
      expression();
      break;
    }

    case 2: {
      setState(1178);
      match(cpp::Auto);
      break;
    }

    }
    setState(1181);
    match(cpp::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElaboratedTypeSpecifierContext ------------------------------------------------------------------

cpp::ElaboratedTypeSpecifierContext::ElaboratedTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ClassKeyContext* cpp::ElaboratedTypeSpecifierContext::classKey() {
  return getRuleContext<cpp::ClassKeyContext>(0);
}

tree::TerminalNode* cpp::ElaboratedTypeSpecifierContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::SimpleTemplateIdContext* cpp::ElaboratedTypeSpecifierContext::simpleTemplateId() {
  return getRuleContext<cpp::SimpleTemplateIdContext>(0);
}

cpp::NestedNameSpecifierContext* cpp::ElaboratedTypeSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::ElaboratedTypeSpecifierContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* cpp::ElaboratedTypeSpecifierContext::Template() {
  return getToken(cpp::Template, 0);
}

tree::TerminalNode* cpp::ElaboratedTypeSpecifierContext::Enum() {
  return getToken(cpp::Enum, 0);
}


size_t cpp::ElaboratedTypeSpecifierContext::getRuleIndex() const {
  return cpp::RuleElaboratedTypeSpecifier;
}


cpp::ElaboratedTypeSpecifierContext* cpp::elaboratedTypeSpecifier() {
  ElaboratedTypeSpecifierContext *_localctx = _tracker.createInstance<ElaboratedTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 164, cpp::RuleElaboratedTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1205);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Class:
      case cpp::Struct: {
        enterOuterAlt(_localctx, 1);
        setState(1183);
        classKey();
        setState(1198);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
        case 1: {
          setState(1185);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
            setState(1184);
            attributeSpecifierSeq();
          }
          setState(1188);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
          case 1: {
            setState(1187);
            nestedNameSpecifier(0);
            break;
          }

          }
          setState(1190);
          match(cpp::Identifier);
          break;
        }

        case 2: {
          setState(1191);
          simpleTemplateId();
          break;
        }

        case 3: {
          setState(1192);
          nestedNameSpecifier(0);
          setState(1194);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == cpp::Template) {
            setState(1193);
            match(cpp::Template);
          }
          setState(1196);
          simpleTemplateId();
          break;
        }

        }
        break;
      }

      case cpp::Enum: {
        enterOuterAlt(_localctx, 2);
        setState(1200);
        match(cpp::Enum);
        setState(1202);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
        case 1: {
          setState(1201);
          nestedNameSpecifier(0);
          break;
        }

        }
        setState(1204);
        match(cpp::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumNameContext ------------------------------------------------------------------

cpp::EnumNameContext::EnumNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::EnumNameContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::EnumNameContext::getRuleIndex() const {
  return cpp::RuleEnumName;
}


cpp::EnumNameContext* cpp::enumName() {
  EnumNameContext *_localctx = _tracker.createInstance<EnumNameContext>(_ctx, getState());
  enterRule(_localctx, 166, cpp::RuleEnumName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1207);
    match(cpp::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumSpecifierContext ------------------------------------------------------------------

cpp::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::EnumHeadContext* cpp::EnumSpecifierContext::enumHead() {
  return getRuleContext<cpp::EnumHeadContext>(0);
}

tree::TerminalNode* cpp::EnumSpecifierContext::LeftBrace() {
  return getToken(cpp::LeftBrace, 0);
}

tree::TerminalNode* cpp::EnumSpecifierContext::RightBrace() {
  return getToken(cpp::RightBrace, 0);
}

cpp::EnumeratorListContext* cpp::EnumSpecifierContext::enumeratorList() {
  return getRuleContext<cpp::EnumeratorListContext>(0);
}

tree::TerminalNode* cpp::EnumSpecifierContext::Comma() {
  return getToken(cpp::Comma, 0);
}


size_t cpp::EnumSpecifierContext::getRuleIndex() const {
  return cpp::RuleEnumSpecifier;
}


cpp::EnumSpecifierContext* cpp::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 168, cpp::RuleEnumSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1209);
    enumHead();
    setState(1210);
    match(cpp::LeftBrace);
    setState(1215);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Identifier) {
      setState(1211);
      enumeratorList();
      setState(1213);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Comma) {
        setState(1212);
        match(cpp::Comma);
      }
    }
    setState(1217);
    match(cpp::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumHeadContext ------------------------------------------------------------------

cpp::EnumHeadContext::EnumHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::EnumkeyContext* cpp::EnumHeadContext::enumkey() {
  return getRuleContext<cpp::EnumkeyContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::EnumHeadContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* cpp::EnumHeadContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::EnumbaseContext* cpp::EnumHeadContext::enumbase() {
  return getRuleContext<cpp::EnumbaseContext>(0);
}

cpp::NestedNameSpecifierContext* cpp::EnumHeadContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}


size_t cpp::EnumHeadContext::getRuleIndex() const {
  return cpp::RuleEnumHead;
}


cpp::EnumHeadContext* cpp::enumHead() {
  EnumHeadContext *_localctx = _tracker.createInstance<EnumHeadContext>(_ctx, getState());
  enterRule(_localctx, 170, cpp::RuleEnumHead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1219);
    enumkey();
    setState(1221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(1220);
      attributeSpecifierSeq();
    }
    setState(1227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Decltype || _la == cpp::Doublecolon

    || _la == cpp::Identifier) {
      setState(1224);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
      case 1: {
        setState(1223);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1226);
      match(cpp::Identifier);
    }
    setState(1230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Colon) {
      setState(1229);
      enumbase();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueEnumDeclarationContext ------------------------------------------------------------------

cpp::OpaqueEnumDeclarationContext::OpaqueEnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::EnumkeyContext* cpp::OpaqueEnumDeclarationContext::enumkey() {
  return getRuleContext<cpp::EnumkeyContext>(0);
}

tree::TerminalNode* cpp::OpaqueEnumDeclarationContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

tree::TerminalNode* cpp::OpaqueEnumDeclarationContext::Semi() {
  return getToken(cpp::Semi, 0);
}

cpp::AttributeSpecifierSeqContext* cpp::OpaqueEnumDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::EnumbaseContext* cpp::OpaqueEnumDeclarationContext::enumbase() {
  return getRuleContext<cpp::EnumbaseContext>(0);
}


size_t cpp::OpaqueEnumDeclarationContext::getRuleIndex() const {
  return cpp::RuleOpaqueEnumDeclaration;
}


cpp::OpaqueEnumDeclarationContext* cpp::opaqueEnumDeclaration() {
  OpaqueEnumDeclarationContext *_localctx = _tracker.createInstance<OpaqueEnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 172, cpp::RuleOpaqueEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1232);
    enumkey();
    setState(1234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(1233);
      attributeSpecifierSeq();
    }
    setState(1236);
    match(cpp::Identifier);
    setState(1238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Colon) {
      setState(1237);
      enumbase();
    }
    setState(1240);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumkeyContext ------------------------------------------------------------------

cpp::EnumkeyContext::EnumkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::EnumkeyContext::Enum() {
  return getToken(cpp::Enum, 0);
}

tree::TerminalNode* cpp::EnumkeyContext::Class() {
  return getToken(cpp::Class, 0);
}

tree::TerminalNode* cpp::EnumkeyContext::Struct() {
  return getToken(cpp::Struct, 0);
}


size_t cpp::EnumkeyContext::getRuleIndex() const {
  return cpp::RuleEnumkey;
}


cpp::EnumkeyContext* cpp::enumkey() {
  EnumkeyContext *_localctx = _tracker.createInstance<EnumkeyContext>(_ctx, getState());
  enterRule(_localctx, 174, cpp::RuleEnumkey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1242);
    match(cpp::Enum);
    setState(1244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Class

    || _la == cpp::Struct) {
      setState(1243);
      _la = _input->LA(1);
      if (!(_la == cpp::Class

      || _la == cpp::Struct)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumbaseContext ------------------------------------------------------------------

cpp::EnumbaseContext::EnumbaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::EnumbaseContext::Colon() {
  return getToken(cpp::Colon, 0);
}

cpp::TypeSpecifierSeqContext* cpp::EnumbaseContext::typeSpecifierSeq() {
  return getRuleContext<cpp::TypeSpecifierSeqContext>(0);
}


size_t cpp::EnumbaseContext::getRuleIndex() const {
  return cpp::RuleEnumbase;
}


cpp::EnumbaseContext* cpp::enumbase() {
  EnumbaseContext *_localctx = _tracker.createInstance<EnumbaseContext>(_ctx, getState());
  enterRule(_localctx, 176, cpp::RuleEnumbase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1246);
    match(cpp::Colon);
    setState(1247);
    typeSpecifierSeq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorListContext ------------------------------------------------------------------

cpp::EnumeratorListContext::EnumeratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::EnumeratorDefinitionContext *> cpp::EnumeratorListContext::enumeratorDefinition() {
  return getRuleContexts<cpp::EnumeratorDefinitionContext>();
}

cpp::EnumeratorDefinitionContext* cpp::EnumeratorListContext::enumeratorDefinition(size_t i) {
  return getRuleContext<cpp::EnumeratorDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> cpp::EnumeratorListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::EnumeratorListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::EnumeratorListContext::getRuleIndex() const {
  return cpp::RuleEnumeratorList;
}


cpp::EnumeratorListContext* cpp::enumeratorList() {
  EnumeratorListContext *_localctx = _tracker.createInstance<EnumeratorListContext>(_ctx, getState());
  enterRule(_localctx, 178, cpp::RuleEnumeratorList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1249);
    enumeratorDefinition();
    setState(1254);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1250);
        match(cpp::Comma);
        setState(1251);
        enumeratorDefinition(); 
      }
      setState(1256);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorDefinitionContext ------------------------------------------------------------------

cpp::EnumeratorDefinitionContext::EnumeratorDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::EnumeratorContext* cpp::EnumeratorDefinitionContext::enumerator() {
  return getRuleContext<cpp::EnumeratorContext>(0);
}

tree::TerminalNode* cpp::EnumeratorDefinitionContext::Assign() {
  return getToken(cpp::Assign, 0);
}

cpp::ConstantExpressionContext* cpp::EnumeratorDefinitionContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}


size_t cpp::EnumeratorDefinitionContext::getRuleIndex() const {
  return cpp::RuleEnumeratorDefinition;
}


cpp::EnumeratorDefinitionContext* cpp::enumeratorDefinition() {
  EnumeratorDefinitionContext *_localctx = _tracker.createInstance<EnumeratorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 180, cpp::RuleEnumeratorDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1257);
    enumerator();
    setState(1260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Assign) {
      setState(1258);
      match(cpp::Assign);
      setState(1259);
      constantExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

cpp::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::EnumeratorContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::EnumeratorContext::getRuleIndex() const {
  return cpp::RuleEnumerator;
}


cpp::EnumeratorContext* cpp::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 182, cpp::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1262);
    match(cpp::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceNameContext ------------------------------------------------------------------

cpp::NamespaceNameContext::NamespaceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::OriginalNamespaceNameContext* cpp::NamespaceNameContext::originalNamespaceName() {
  return getRuleContext<cpp::OriginalNamespaceNameContext>(0);
}

cpp::NamespaceAliasContext* cpp::NamespaceNameContext::namespaceAlias() {
  return getRuleContext<cpp::NamespaceAliasContext>(0);
}


size_t cpp::NamespaceNameContext::getRuleIndex() const {
  return cpp::RuleNamespaceName;
}


cpp::NamespaceNameContext* cpp::namespaceName() {
  NamespaceNameContext *_localctx = _tracker.createInstance<NamespaceNameContext>(_ctx, getState());
  enterRule(_localctx, 184, cpp::RuleNamespaceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1266);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1264);
      originalNamespaceName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1265);
      namespaceAlias();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalNamespaceNameContext ------------------------------------------------------------------

cpp::OriginalNamespaceNameContext::OriginalNamespaceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::OriginalNamespaceNameContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::OriginalNamespaceNameContext::getRuleIndex() const {
  return cpp::RuleOriginalNamespaceName;
}


cpp::OriginalNamespaceNameContext* cpp::originalNamespaceName() {
  OriginalNamespaceNameContext *_localctx = _tracker.createInstance<OriginalNamespaceNameContext>(_ctx, getState());
  enterRule(_localctx, 186, cpp::RuleOriginalNamespaceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1268);
    match(cpp::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceDefinitionContext ------------------------------------------------------------------

cpp::NamespaceDefinitionContext::NamespaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NamespaceDefinitionContext::Namespace() {
  return getToken(cpp::Namespace, 0);
}

tree::TerminalNode* cpp::NamespaceDefinitionContext::LeftBrace() {
  return getToken(cpp::LeftBrace, 0);
}

tree::TerminalNode* cpp::NamespaceDefinitionContext::RightBrace() {
  return getToken(cpp::RightBrace, 0);
}

tree::TerminalNode* cpp::NamespaceDefinitionContext::Inline() {
  return getToken(cpp::Inline, 0);
}

tree::TerminalNode* cpp::NamespaceDefinitionContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::OriginalNamespaceNameContext* cpp::NamespaceDefinitionContext::originalNamespaceName() {
  return getRuleContext<cpp::OriginalNamespaceNameContext>(0);
}

cpp::DeclarationseqContext* cpp::NamespaceDefinitionContext::declarationseq() {
  return getRuleContext<cpp::DeclarationseqContext>(0);
}


size_t cpp::NamespaceDefinitionContext::getRuleIndex() const {
  return cpp::RuleNamespaceDefinition;
}


cpp::NamespaceDefinitionContext* cpp::namespaceDefinition() {
  NamespaceDefinitionContext *_localctx = _tracker.createInstance<NamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 188, cpp::RuleNamespaceDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Inline) {
      setState(1270);
      match(cpp::Inline);
    }
    setState(1273);
    match(cpp::Namespace);
    setState(1276);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
    case 1: {
      setState(1274);
      match(cpp::Identifier);
      break;
    }

    case 2: {
      setState(1275);
      originalNamespaceName();
      break;
    }

    }
    setState(1278);
    match(cpp::LeftBrace);
    setState(1280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::Alignas)
      | (1ULL << cpp::Asm)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Namespace)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Template - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128)))) != 0)) {
      setState(1279);
      dynamic_cast<NamespaceDefinitionContext *>(_localctx)->namespaceBody = declarationseq();
    }
    setState(1282);
    match(cpp::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceAliasContext ------------------------------------------------------------------

cpp::NamespaceAliasContext::NamespaceAliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NamespaceAliasContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::NamespaceAliasContext::getRuleIndex() const {
  return cpp::RuleNamespaceAlias;
}


cpp::NamespaceAliasContext* cpp::namespaceAlias() {
  NamespaceAliasContext *_localctx = _tracker.createInstance<NamespaceAliasContext>(_ctx, getState());
  enterRule(_localctx, 190, cpp::RuleNamespaceAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1284);
    match(cpp::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceAliasDefinitionContext ------------------------------------------------------------------

cpp::NamespaceAliasDefinitionContext::NamespaceAliasDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NamespaceAliasDefinitionContext::Namespace() {
  return getToken(cpp::Namespace, 0);
}

tree::TerminalNode* cpp::NamespaceAliasDefinitionContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

tree::TerminalNode* cpp::NamespaceAliasDefinitionContext::Assign() {
  return getToken(cpp::Assign, 0);
}

cpp::QualifiednamespacespecifierContext* cpp::NamespaceAliasDefinitionContext::qualifiednamespacespecifier() {
  return getRuleContext<cpp::QualifiednamespacespecifierContext>(0);
}

tree::TerminalNode* cpp::NamespaceAliasDefinitionContext::Semi() {
  return getToken(cpp::Semi, 0);
}


size_t cpp::NamespaceAliasDefinitionContext::getRuleIndex() const {
  return cpp::RuleNamespaceAliasDefinition;
}


cpp::NamespaceAliasDefinitionContext* cpp::namespaceAliasDefinition() {
  NamespaceAliasDefinitionContext *_localctx = _tracker.createInstance<NamespaceAliasDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 192, cpp::RuleNamespaceAliasDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1286);
    match(cpp::Namespace);
    setState(1287);
    match(cpp::Identifier);
    setState(1288);
    match(cpp::Assign);
    setState(1289);
    qualifiednamespacespecifier();
    setState(1290);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiednamespacespecifierContext ------------------------------------------------------------------

cpp::QualifiednamespacespecifierContext::QualifiednamespacespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::NamespaceNameContext* cpp::QualifiednamespacespecifierContext::namespaceName() {
  return getRuleContext<cpp::NamespaceNameContext>(0);
}

cpp::NestedNameSpecifierContext* cpp::QualifiednamespacespecifierContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}


size_t cpp::QualifiednamespacespecifierContext::getRuleIndex() const {
  return cpp::RuleQualifiednamespacespecifier;
}


cpp::QualifiednamespacespecifierContext* cpp::qualifiednamespacespecifier() {
  QualifiednamespacespecifierContext *_localctx = _tracker.createInstance<QualifiednamespacespecifierContext>(_ctx, getState());
  enterRule(_localctx, 194, cpp::RuleQualifiednamespacespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1293);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx)) {
    case 1: {
      setState(1292);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1295);
    namespaceName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingDeclarationContext ------------------------------------------------------------------

cpp::UsingDeclarationContext::UsingDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::UsingDeclarationContext::Using() {
  return getToken(cpp::Using, 0);
}

cpp::UnqualifiedIdContext* cpp::UsingDeclarationContext::unqualifiedId() {
  return getRuleContext<cpp::UnqualifiedIdContext>(0);
}

tree::TerminalNode* cpp::UsingDeclarationContext::Semi() {
  return getToken(cpp::Semi, 0);
}

cpp::NestedNameSpecifierContext* cpp::UsingDeclarationContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* cpp::UsingDeclarationContext::Doublecolon() {
  return getToken(cpp::Doublecolon, 0);
}

tree::TerminalNode* cpp::UsingDeclarationContext::Typename_() {
  return getToken(cpp::Typename_, 0);
}


size_t cpp::UsingDeclarationContext::getRuleIndex() const {
  return cpp::RuleUsingDeclaration;
}


cpp::UsingDeclarationContext* cpp::usingDeclaration() {
  UsingDeclarationContext *_localctx = _tracker.createInstance<UsingDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 196, cpp::RuleUsingDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1297);
    match(cpp::Using);
    setState(1303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      setState(1299);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Typename_) {
        setState(1298);
        match(cpp::Typename_);
      }
      setState(1301);
      nestedNameSpecifier(0);
      break;
    }

    case 2: {
      setState(1302);
      match(cpp::Doublecolon);
      break;
    }

    }
    setState(1305);
    unqualifiedId();
    setState(1306);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingDirectiveContext ------------------------------------------------------------------

cpp::UsingDirectiveContext::UsingDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::UsingDirectiveContext::Using() {
  return getToken(cpp::Using, 0);
}

tree::TerminalNode* cpp::UsingDirectiveContext::Namespace() {
  return getToken(cpp::Namespace, 0);
}

cpp::NamespaceNameContext* cpp::UsingDirectiveContext::namespaceName() {
  return getRuleContext<cpp::NamespaceNameContext>(0);
}

tree::TerminalNode* cpp::UsingDirectiveContext::Semi() {
  return getToken(cpp::Semi, 0);
}

cpp::AttributeSpecifierSeqContext* cpp::UsingDirectiveContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::NestedNameSpecifierContext* cpp::UsingDirectiveContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}


size_t cpp::UsingDirectiveContext::getRuleIndex() const {
  return cpp::RuleUsingDirective;
}


cpp::UsingDirectiveContext* cpp::usingDirective() {
  UsingDirectiveContext *_localctx = _tracker.createInstance<UsingDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 198, cpp::RuleUsingDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(1308);
      attributeSpecifierSeq();
    }
    setState(1311);
    match(cpp::Using);
    setState(1312);
    match(cpp::Namespace);
    setState(1314);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx)) {
    case 1: {
      setState(1313);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1316);
    namespaceName();
    setState(1317);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmDefinitionContext ------------------------------------------------------------------

cpp::AsmDefinitionContext::AsmDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::AsmDefinitionContext::Asm() {
  return getToken(cpp::Asm, 0);
}

tree::TerminalNode* cpp::AsmDefinitionContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::AsmDefinitionContext::StringLiteral() {
  return getToken(cpp::StringLiteral, 0);
}

tree::TerminalNode* cpp::AsmDefinitionContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

tree::TerminalNode* cpp::AsmDefinitionContext::Semi() {
  return getToken(cpp::Semi, 0);
}


size_t cpp::AsmDefinitionContext::getRuleIndex() const {
  return cpp::RuleAsmDefinition;
}


cpp::AsmDefinitionContext* cpp::asmDefinition() {
  AsmDefinitionContext *_localctx = _tracker.createInstance<AsmDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 200, cpp::RuleAsmDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1319);
    match(cpp::Asm);
    setState(1320);
    match(cpp::LeftParen);
    setState(1321);
    match(cpp::StringLiteral);
    setState(1322);
    match(cpp::RightParen);
    setState(1323);
    match(cpp::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkageSpecificationContext ------------------------------------------------------------------

cpp::LinkageSpecificationContext::LinkageSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::LinkageSpecificationContext::Extern() {
  return getToken(cpp::Extern, 0);
}

tree::TerminalNode* cpp::LinkageSpecificationContext::StringLiteral() {
  return getToken(cpp::StringLiteral, 0);
}

tree::TerminalNode* cpp::LinkageSpecificationContext::LeftBrace() {
  return getToken(cpp::LeftBrace, 0);
}

tree::TerminalNode* cpp::LinkageSpecificationContext::RightBrace() {
  return getToken(cpp::RightBrace, 0);
}

cpp::DeclarationContext* cpp::LinkageSpecificationContext::declaration() {
  return getRuleContext<cpp::DeclarationContext>(0);
}

cpp::DeclarationseqContext* cpp::LinkageSpecificationContext::declarationseq() {
  return getRuleContext<cpp::DeclarationseqContext>(0);
}


size_t cpp::LinkageSpecificationContext::getRuleIndex() const {
  return cpp::RuleLinkageSpecification;
}


cpp::LinkageSpecificationContext* cpp::linkageSpecification() {
  LinkageSpecificationContext *_localctx = _tracker.createInstance<LinkageSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 202, cpp::RuleLinkageSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1325);
    match(cpp::Extern);
    setState(1326);
    match(cpp::StringLiteral);
    setState(1333);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::LeftBrace: {
        setState(1327);
        match(cpp::LeftBrace);
        setState(1329);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << cpp::Alignas)
          | (1ULL << cpp::Asm)
          | (1ULL << cpp::Auto)
          | (1ULL << cpp::Bool)
          | (1ULL << cpp::Char)
          | (1ULL << cpp::Char16)
          | (1ULL << cpp::Char32)
          | (1ULL << cpp::Class)
          | (1ULL << cpp::Const)
          | (1ULL << cpp::Constexpr)
          | (1ULL << cpp::Decltype)
          | (1ULL << cpp::Double)
          | (1ULL << cpp::Enum)
          | (1ULL << cpp::Explicit)
          | (1ULL << cpp::Extern)
          | (1ULL << cpp::Float)
          | (1ULL << cpp::Friend)
          | (1ULL << cpp::Inline)
          | (1ULL << cpp::Int)
          | (1ULL << cpp::Long)
          | (1ULL << cpp::Mutable)
          | (1ULL << cpp::Namespace)
          | (1ULL << cpp::Operator)
          | (1ULL << cpp::Register)
          | (1ULL << cpp::Short)
          | (1ULL << cpp::Signed)
          | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
          | (1ULL << (cpp::Struct - 64))
          | (1ULL << (cpp::Template - 64))
          | (1ULL << (cpp::Thread_local - 64))
          | (1ULL << (cpp::Typedef - 64))
          | (1ULL << (cpp::Typename_ - 64))
          | (1ULL << (cpp::Union - 64))
          | (1ULL << (cpp::Unsigned - 64))
          | (1ULL << (cpp::Using - 64))
          | (1ULL << (cpp::Virtual - 64))
          | (1ULL << (cpp::Void - 64))
          | (1ULL << (cpp::Volatile - 64))
          | (1ULL << (cpp::Wchar - 64))
          | (1ULL << (cpp::LeftParen - 64))
          | (1ULL << (cpp::LeftBracket - 64))
          | (1ULL << (cpp::Star - 64))
          | (1ULL << (cpp::And - 64))
          | (1ULL << (cpp::Tilde - 64))
          | (1ULL << (cpp::AndAnd - 64))
          | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
          | (1ULL << (cpp::Ellipsis - 128))
          | (1ULL << (cpp::Identifier - 128))
          | (1ULL << (cpp::DocBlockComment - 128))
          | (1ULL << (cpp::DocLineComment - 128)))) != 0)) {
          setState(1328);
          declarationseq();
        }
        setState(1331);
        match(cpp::RightBrace);
        break;
      }

      case cpp::Alignas:
      case cpp::Asm:
      case cpp::Auto:
      case cpp::Bool:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Class:
      case cpp::Const:
      case cpp::Constexpr:
      case cpp::Decltype:
      case cpp::Double:
      case cpp::Enum:
      case cpp::Explicit:
      case cpp::Extern:
      case cpp::Float:
      case cpp::Friend:
      case cpp::Inline:
      case cpp::Int:
      case cpp::Long:
      case cpp::Mutable:
      case cpp::Namespace:
      case cpp::Operator:
      case cpp::Register:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Static:
      case cpp::Static_assert:
      case cpp::Struct:
      case cpp::Template:
      case cpp::Thread_local:
      case cpp::Typedef:
      case cpp::Typename_:
      case cpp::Union:
      case cpp::Unsigned:
      case cpp::Using:
      case cpp::Virtual:
      case cpp::Void:
      case cpp::Volatile:
      case cpp::Wchar:
      case cpp::LeftParen:
      case cpp::LeftBracket:
      case cpp::Star:
      case cpp::And:
      case cpp::Tilde:
      case cpp::AndAnd:
      case cpp::Doublecolon:
      case cpp::Semi:
      case cpp::Ellipsis:
      case cpp::Identifier:
      case cpp::DocBlockComment:
      case cpp::DocLineComment: {
        setState(1332);
        declaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierSeqContext ------------------------------------------------------------------

cpp::AttributeSpecifierSeqContext::AttributeSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::AttributeSpecifierContext *> cpp::AttributeSpecifierSeqContext::attributeSpecifier() {
  return getRuleContexts<cpp::AttributeSpecifierContext>();
}

cpp::AttributeSpecifierContext* cpp::AttributeSpecifierSeqContext::attributeSpecifier(size_t i) {
  return getRuleContext<cpp::AttributeSpecifierContext>(i);
}


size_t cpp::AttributeSpecifierSeqContext::getRuleIndex() const {
  return cpp::RuleAttributeSpecifierSeq;
}


cpp::AttributeSpecifierSeqContext* cpp::attributeSpecifierSeq() {
  AttributeSpecifierSeqContext *_localctx = _tracker.createInstance<AttributeSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 204, cpp::RuleAttributeSpecifierSeq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1336); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1335);
              attributeSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1338); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierContext ------------------------------------------------------------------

cpp::AttributeSpecifierContext::AttributeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> cpp::AttributeSpecifierContext::LeftBracket() {
  return getTokens(cpp::LeftBracket);
}

tree::TerminalNode* cpp::AttributeSpecifierContext::LeftBracket(size_t i) {
  return getToken(cpp::LeftBracket, i);
}

std::vector<tree::TerminalNode *> cpp::AttributeSpecifierContext::RightBracket() {
  return getTokens(cpp::RightBracket);
}

tree::TerminalNode* cpp::AttributeSpecifierContext::RightBracket(size_t i) {
  return getToken(cpp::RightBracket, i);
}

cpp::AttributeListContext* cpp::AttributeSpecifierContext::attributeList() {
  return getRuleContext<cpp::AttributeListContext>(0);
}

cpp::AlignmentspecifierContext* cpp::AttributeSpecifierContext::alignmentspecifier() {
  return getRuleContext<cpp::AlignmentspecifierContext>(0);
}


size_t cpp::AttributeSpecifierContext::getRuleIndex() const {
  return cpp::RuleAttributeSpecifier;
}


cpp::AttributeSpecifierContext* cpp::attributeSpecifier() {
  AttributeSpecifierContext *_localctx = _tracker.createInstance<AttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 206, cpp::RuleAttributeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1348);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1340);
        match(cpp::LeftBracket);
        setState(1341);
        match(cpp::LeftBracket);
        setState(1343);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Identifier) {
          setState(1342);
          attributeList();
        }
        setState(1345);
        match(cpp::RightBracket);
        setState(1346);
        match(cpp::RightBracket);
        break;
      }

      case cpp::Alignas: {
        enterOuterAlt(_localctx, 2);
        setState(1347);
        alignmentspecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlignmentspecifierContext ------------------------------------------------------------------

cpp::AlignmentspecifierContext::AlignmentspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::AlignmentspecifierContext::Alignas() {
  return getToken(cpp::Alignas, 0);
}

tree::TerminalNode* cpp::AlignmentspecifierContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::AlignmentspecifierContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::TheTypeIdContext* cpp::AlignmentspecifierContext::theTypeId() {
  return getRuleContext<cpp::TheTypeIdContext>(0);
}

cpp::ConstantExpressionContext* cpp::AlignmentspecifierContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}

tree::TerminalNode* cpp::AlignmentspecifierContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}


size_t cpp::AlignmentspecifierContext::getRuleIndex() const {
  return cpp::RuleAlignmentspecifier;
}


cpp::AlignmentspecifierContext* cpp::alignmentspecifier() {
  AlignmentspecifierContext *_localctx = _tracker.createInstance<AlignmentspecifierContext>(_ctx, getState());
  enterRule(_localctx, 208, cpp::RuleAlignmentspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1350);
    match(cpp::Alignas);
    setState(1351);
    match(cpp::LeftParen);
    setState(1354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx)) {
    case 1: {
      setState(1352);
      theTypeId();
      break;
    }

    case 2: {
      setState(1353);
      constantExpression();
      break;
    }

    }
    setState(1357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(1356);
      match(cpp::Ellipsis);
    }
    setState(1359);
    match(cpp::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeListContext ------------------------------------------------------------------

cpp::AttributeListContext::AttributeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::AttributeContext *> cpp::AttributeListContext::attribute() {
  return getRuleContexts<cpp::AttributeContext>();
}

cpp::AttributeContext* cpp::AttributeListContext::attribute(size_t i) {
  return getRuleContext<cpp::AttributeContext>(i);
}

std::vector<tree::TerminalNode *> cpp::AttributeListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::AttributeListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}

tree::TerminalNode* cpp::AttributeListContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}


size_t cpp::AttributeListContext::getRuleIndex() const {
  return cpp::RuleAttributeList;
}


cpp::AttributeListContext* cpp::attributeList() {
  AttributeListContext *_localctx = _tracker.createInstance<AttributeListContext>(_ctx, getState());
  enterRule(_localctx, 210, cpp::RuleAttributeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1361);
    attribute();
    setState(1366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(1362);
      match(cpp::Comma);
      setState(1363);
      attribute();
      setState(1368);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1370);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(1369);
      match(cpp::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

cpp::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::AttributeContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::AttributeNamespaceContext* cpp::AttributeContext::attributeNamespace() {
  return getRuleContext<cpp::AttributeNamespaceContext>(0);
}

tree::TerminalNode* cpp::AttributeContext::Doublecolon() {
  return getToken(cpp::Doublecolon, 0);
}

cpp::AttributeArgumentClauseContext* cpp::AttributeContext::attributeArgumentClause() {
  return getRuleContext<cpp::AttributeArgumentClauseContext>(0);
}


size_t cpp::AttributeContext::getRuleIndex() const {
  return cpp::RuleAttribute;
}


cpp::AttributeContext* cpp::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 212, cpp::RuleAttribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1375);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      setState(1372);
      attributeNamespace();
      setState(1373);
      match(cpp::Doublecolon);
      break;
    }

    }
    setState(1377);
    match(cpp::Identifier);
    setState(1379);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::LeftParen) {
      setState(1378);
      attributeArgumentClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeNamespaceContext ------------------------------------------------------------------

cpp::AttributeNamespaceContext::AttributeNamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::AttributeNamespaceContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::AttributeNamespaceContext::getRuleIndex() const {
  return cpp::RuleAttributeNamespace;
}


cpp::AttributeNamespaceContext* cpp::attributeNamespace() {
  AttributeNamespaceContext *_localctx = _tracker.createInstance<AttributeNamespaceContext>(_ctx, getState());
  enterRule(_localctx, 214, cpp::RuleAttributeNamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1381);
    match(cpp::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeArgumentClauseContext ------------------------------------------------------------------

cpp::AttributeArgumentClauseContext::AttributeArgumentClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::AttributeArgumentClauseContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::AttributeArgumentClauseContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::BalancedTokenSeqContext* cpp::AttributeArgumentClauseContext::balancedTokenSeq() {
  return getRuleContext<cpp::BalancedTokenSeqContext>(0);
}


size_t cpp::AttributeArgumentClauseContext::getRuleIndex() const {
  return cpp::RuleAttributeArgumentClause;
}


cpp::AttributeArgumentClauseContext* cpp::attributeArgumentClause() {
  AttributeArgumentClauseContext *_localctx = _tracker.createInstance<AttributeArgumentClauseContext>(_ctx, getState());
  enterRule(_localctx, 216, cpp::RuleAttributeArgumentClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1383);
    match(cpp::LeftParen);
    setState(1385);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral)
      | (1ULL << cpp::MultiLineMacro)
      | (1ULL << cpp::Directive)
      | (1ULL << cpp::Alignas)
      | (1ULL << cpp::Alignof)
      | (1ULL << cpp::Asm)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Break)
      | (1ULL << cpp::Case)
      | (1ULL << cpp::Catch)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Const_cast)
      | (1ULL << cpp::Continue)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Default)
      | (1ULL << cpp::Delete)
      | (1ULL << cpp::Do)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Dynamic_cast)
      | (1ULL << cpp::Else)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Export)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::False_)
      | (1ULL << cpp::Final)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::For)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Goto)
      | (1ULL << cpp::If)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Namespace)
      | (1ULL << cpp::New)
      | (1ULL << cpp::Noexcept)
      | (1ULL << cpp::Nullptr)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Override)
      | (1ULL << cpp::Private)
      | (1ULL << cpp::Protected)
      | (1ULL << cpp::Public)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Reinterpret_cast)
      | (1ULL << cpp::Return)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Sizeof)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Static_cast - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Switch - 64))
      | (1ULL << (cpp::Template - 64))
      | (1ULL << (cpp::This - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Throw - 64))
      | (1ULL << (cpp::True_ - 64))
      | (1ULL << (cpp::Try - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typeid_ - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::While - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::LeftBrace - 64))
      | (1ULL << (cpp::Plus - 64))
      | (1ULL << (cpp::Minus - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::Div - 64))
      | (1ULL << (cpp::Mod - 64))
      | (1ULL << (cpp::Caret - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Or - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::Not - 64))
      | (1ULL << (cpp::Assign - 64))
      | (1ULL << (cpp::Less - 64))
      | (1ULL << (cpp::Greater - 64))
      | (1ULL << (cpp::PlusAssign - 64))
      | (1ULL << (cpp::MinusAssign - 64))
      | (1ULL << (cpp::StarAssign - 64))
      | (1ULL << (cpp::DivAssign - 64))
      | (1ULL << (cpp::ModAssign - 64))
      | (1ULL << (cpp::XorAssign - 64))
      | (1ULL << (cpp::AndAssign - 64))
      | (1ULL << (cpp::OrAssign - 64))
      | (1ULL << (cpp::LeftShiftAssign - 64))
      | (1ULL << (cpp::RightShiftAssign - 64))
      | (1ULL << (cpp::Equal - 64))
      | (1ULL << (cpp::NotEqual - 64))
      | (1ULL << (cpp::LessEqual - 64))
      | (1ULL << (cpp::GreaterEqual - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::OrOr - 64))
      | (1ULL << (cpp::PlusPlus - 64))
      | (1ULL << (cpp::MinusMinus - 64))
      | (1ULL << (cpp::Comma - 64))
      | (1ULL << (cpp::ArrowStar - 64))
      | (1ULL << (cpp::Arrow - 64))
      | (1ULL << (cpp::Question - 64))
      | (1ULL << (cpp::Colon - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Dot - 128))
      | (1ULL << (cpp::DotStar - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DecimalLiteral - 128))
      | (1ULL << (cpp::OctalLiteral - 128))
      | (1ULL << (cpp::HexadecimalLiteral - 128))
      | (1ULL << (cpp::BinaryLiteral - 128))
      | (1ULL << (cpp::Integersuffix - 128))
      | (1ULL << (cpp::UserDefinedIntegerLiteral - 128))
      | (1ULL << (cpp::UserDefinedFloatingLiteral - 128))
      | (1ULL << (cpp::UserDefinedStringLiteral - 128))
      | (1ULL << (cpp::UserDefinedCharacterLiteral - 128))
      | (1ULL << (cpp::Whitespace - 128))
      | (1ULL << (cpp::Newline - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128))
      | (1ULL << (cpp::BlockComment - 128))
      | (1ULL << (cpp::LineComment - 128)))) != 0)) {
      setState(1384);
      balancedTokenSeq();
    }
    setState(1387);
    match(cpp::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedTokenSeqContext ------------------------------------------------------------------

cpp::BalancedTokenSeqContext::BalancedTokenSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::BalancedtokenContext *> cpp::BalancedTokenSeqContext::balancedtoken() {
  return getRuleContexts<cpp::BalancedtokenContext>();
}

cpp::BalancedtokenContext* cpp::BalancedTokenSeqContext::balancedtoken(size_t i) {
  return getRuleContext<cpp::BalancedtokenContext>(i);
}


size_t cpp::BalancedTokenSeqContext::getRuleIndex() const {
  return cpp::RuleBalancedTokenSeq;
}


cpp::BalancedTokenSeqContext* cpp::balancedTokenSeq() {
  BalancedTokenSeqContext *_localctx = _tracker.createInstance<BalancedTokenSeqContext>(_ctx, getState());
  enterRule(_localctx, 218, cpp::RuleBalancedTokenSeq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1390); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1389);
      balancedtoken();
      setState(1392); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral)
      | (1ULL << cpp::MultiLineMacro)
      | (1ULL << cpp::Directive)
      | (1ULL << cpp::Alignas)
      | (1ULL << cpp::Alignof)
      | (1ULL << cpp::Asm)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Break)
      | (1ULL << cpp::Case)
      | (1ULL << cpp::Catch)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Const_cast)
      | (1ULL << cpp::Continue)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Default)
      | (1ULL << cpp::Delete)
      | (1ULL << cpp::Do)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Dynamic_cast)
      | (1ULL << cpp::Else)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Export)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::False_)
      | (1ULL << cpp::Final)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::For)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Goto)
      | (1ULL << cpp::If)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Namespace)
      | (1ULL << cpp::New)
      | (1ULL << cpp::Noexcept)
      | (1ULL << cpp::Nullptr)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Override)
      | (1ULL << cpp::Private)
      | (1ULL << cpp::Protected)
      | (1ULL << cpp::Public)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Reinterpret_cast)
      | (1ULL << cpp::Return)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Sizeof)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Static_cast - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Switch - 64))
      | (1ULL << (cpp::Template - 64))
      | (1ULL << (cpp::This - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Throw - 64))
      | (1ULL << (cpp::True_ - 64))
      | (1ULL << (cpp::Try - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typeid_ - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::While - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::LeftBrace - 64))
      | (1ULL << (cpp::Plus - 64))
      | (1ULL << (cpp::Minus - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::Div - 64))
      | (1ULL << (cpp::Mod - 64))
      | (1ULL << (cpp::Caret - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Or - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::Not - 64))
      | (1ULL << (cpp::Assign - 64))
      | (1ULL << (cpp::Less - 64))
      | (1ULL << (cpp::Greater - 64))
      | (1ULL << (cpp::PlusAssign - 64))
      | (1ULL << (cpp::MinusAssign - 64))
      | (1ULL << (cpp::StarAssign - 64))
      | (1ULL << (cpp::DivAssign - 64))
      | (1ULL << (cpp::ModAssign - 64))
      | (1ULL << (cpp::XorAssign - 64))
      | (1ULL << (cpp::AndAssign - 64))
      | (1ULL << (cpp::OrAssign - 64))
      | (1ULL << (cpp::LeftShiftAssign - 64))
      | (1ULL << (cpp::RightShiftAssign - 64))
      | (1ULL << (cpp::Equal - 64))
      | (1ULL << (cpp::NotEqual - 64))
      | (1ULL << (cpp::LessEqual - 64))
      | (1ULL << (cpp::GreaterEqual - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::OrOr - 64))
      | (1ULL << (cpp::PlusPlus - 64))
      | (1ULL << (cpp::MinusMinus - 64))
      | (1ULL << (cpp::Comma - 64))
      | (1ULL << (cpp::ArrowStar - 64))
      | (1ULL << (cpp::Arrow - 64))
      | (1ULL << (cpp::Question - 64))
      | (1ULL << (cpp::Colon - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Dot - 128))
      | (1ULL << (cpp::DotStar - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DecimalLiteral - 128))
      | (1ULL << (cpp::OctalLiteral - 128))
      | (1ULL << (cpp::HexadecimalLiteral - 128))
      | (1ULL << (cpp::BinaryLiteral - 128))
      | (1ULL << (cpp::Integersuffix - 128))
      | (1ULL << (cpp::UserDefinedIntegerLiteral - 128))
      | (1ULL << (cpp::UserDefinedFloatingLiteral - 128))
      | (1ULL << (cpp::UserDefinedStringLiteral - 128))
      | (1ULL << (cpp::UserDefinedCharacterLiteral - 128))
      | (1ULL << (cpp::Whitespace - 128))
      | (1ULL << (cpp::Newline - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128))
      | (1ULL << (cpp::BlockComment - 128))
      | (1ULL << (cpp::LineComment - 128)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedtokenContext ------------------------------------------------------------------

cpp::BalancedtokenContext::BalancedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> cpp::BalancedtokenContext::LeftParen() {
  return getTokens(cpp::LeftParen);
}

tree::TerminalNode* cpp::BalancedtokenContext::LeftParen(size_t i) {
  return getToken(cpp::LeftParen, i);
}

cpp::BalancedTokenSeqContext* cpp::BalancedtokenContext::balancedTokenSeq() {
  return getRuleContext<cpp::BalancedTokenSeqContext>(0);
}

std::vector<tree::TerminalNode *> cpp::BalancedtokenContext::RightParen() {
  return getTokens(cpp::RightParen);
}

tree::TerminalNode* cpp::BalancedtokenContext::RightParen(size_t i) {
  return getToken(cpp::RightParen, i);
}

std::vector<tree::TerminalNode *> cpp::BalancedtokenContext::LeftBracket() {
  return getTokens(cpp::LeftBracket);
}

tree::TerminalNode* cpp::BalancedtokenContext::LeftBracket(size_t i) {
  return getToken(cpp::LeftBracket, i);
}

std::vector<tree::TerminalNode *> cpp::BalancedtokenContext::RightBracket() {
  return getTokens(cpp::RightBracket);
}

tree::TerminalNode* cpp::BalancedtokenContext::RightBracket(size_t i) {
  return getToken(cpp::RightBracket, i);
}

std::vector<tree::TerminalNode *> cpp::BalancedtokenContext::LeftBrace() {
  return getTokens(cpp::LeftBrace);
}

tree::TerminalNode* cpp::BalancedtokenContext::LeftBrace(size_t i) {
  return getToken(cpp::LeftBrace, i);
}

std::vector<tree::TerminalNode *> cpp::BalancedtokenContext::RightBrace() {
  return getTokens(cpp::RightBrace);
}

tree::TerminalNode* cpp::BalancedtokenContext::RightBrace(size_t i) {
  return getToken(cpp::RightBrace, i);
}


size_t cpp::BalancedtokenContext::getRuleIndex() const {
  return cpp::RuleBalancedtoken;
}


cpp::BalancedtokenContext* cpp::balancedtoken() {
  BalancedtokenContext *_localctx = _tracker.createInstance<BalancedtokenContext>(_ctx, getState());
  enterRule(_localctx, 220, cpp::RuleBalancedtoken);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1411);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(1394);
        match(cpp::LeftParen);
        setState(1395);
        balancedTokenSeq();
        setState(1396);
        match(cpp::RightParen);
        break;
      }

      case cpp::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1398);
        match(cpp::LeftBracket);
        setState(1399);
        balancedTokenSeq();
        setState(1400);
        match(cpp::RightBracket);
        break;
      }

      case cpp::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1402);
        match(cpp::LeftBrace);
        setState(1403);
        balancedTokenSeq();
        setState(1404);
        match(cpp::RightBrace);
        break;
      }

      case cpp::IntegerLiteral:
      case cpp::CharacterLiteral:
      case cpp::FloatingLiteral:
      case cpp::StringLiteral:
      case cpp::BooleanLiteral:
      case cpp::PointerLiteral:
      case cpp::UserDefinedLiteral:
      case cpp::MultiLineMacro:
      case cpp::Directive:
      case cpp::Alignas:
      case cpp::Alignof:
      case cpp::Asm:
      case cpp::Auto:
      case cpp::Bool:
      case cpp::Break:
      case cpp::Case:
      case cpp::Catch:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Class:
      case cpp::Const:
      case cpp::Constexpr:
      case cpp::Const_cast:
      case cpp::Continue:
      case cpp::Decltype:
      case cpp::Default:
      case cpp::Delete:
      case cpp::Do:
      case cpp::Double:
      case cpp::Dynamic_cast:
      case cpp::Else:
      case cpp::Enum:
      case cpp::Explicit:
      case cpp::Export:
      case cpp::Extern:
      case cpp::False_:
      case cpp::Final:
      case cpp::Float:
      case cpp::For:
      case cpp::Friend:
      case cpp::Goto:
      case cpp::If:
      case cpp::Inline:
      case cpp::Int:
      case cpp::Long:
      case cpp::Mutable:
      case cpp::Namespace:
      case cpp::New:
      case cpp::Noexcept:
      case cpp::Nullptr:
      case cpp::Operator:
      case cpp::Override:
      case cpp::Private:
      case cpp::Protected:
      case cpp::Public:
      case cpp::Register:
      case cpp::Reinterpret_cast:
      case cpp::Return:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Sizeof:
      case cpp::Static:
      case cpp::Static_assert:
      case cpp::Static_cast:
      case cpp::Struct:
      case cpp::Switch:
      case cpp::Template:
      case cpp::This:
      case cpp::Thread_local:
      case cpp::Throw:
      case cpp::True_:
      case cpp::Try:
      case cpp::Typedef:
      case cpp::Typeid_:
      case cpp::Typename_:
      case cpp::Union:
      case cpp::Unsigned:
      case cpp::Using:
      case cpp::Virtual:
      case cpp::Void:
      case cpp::Volatile:
      case cpp::Wchar:
      case cpp::While:
      case cpp::Plus:
      case cpp::Minus:
      case cpp::Star:
      case cpp::Div:
      case cpp::Mod:
      case cpp::Caret:
      case cpp::And:
      case cpp::Or:
      case cpp::Tilde:
      case cpp::Not:
      case cpp::Assign:
      case cpp::Less:
      case cpp::Greater:
      case cpp::PlusAssign:
      case cpp::MinusAssign:
      case cpp::StarAssign:
      case cpp::DivAssign:
      case cpp::ModAssign:
      case cpp::XorAssign:
      case cpp::AndAssign:
      case cpp::OrAssign:
      case cpp::LeftShiftAssign:
      case cpp::RightShiftAssign:
      case cpp::Equal:
      case cpp::NotEqual:
      case cpp::LessEqual:
      case cpp::GreaterEqual:
      case cpp::AndAnd:
      case cpp::OrOr:
      case cpp::PlusPlus:
      case cpp::MinusMinus:
      case cpp::Comma:
      case cpp::ArrowStar:
      case cpp::Arrow:
      case cpp::Question:
      case cpp::Colon:
      case cpp::Doublecolon:
      case cpp::Semi:
      case cpp::Dot:
      case cpp::DotStar:
      case cpp::Ellipsis:
      case cpp::Identifier:
      case cpp::DecimalLiteral:
      case cpp::OctalLiteral:
      case cpp::HexadecimalLiteral:
      case cpp::BinaryLiteral:
      case cpp::Integersuffix:
      case cpp::UserDefinedIntegerLiteral:
      case cpp::UserDefinedFloatingLiteral:
      case cpp::UserDefinedStringLiteral:
      case cpp::UserDefinedCharacterLiteral:
      case cpp::Whitespace:
      case cpp::Newline:
      case cpp::DocBlockComment:
      case cpp::DocLineComment:
      case cpp::BlockComment:
      case cpp::LineComment: {
        enterOuterAlt(_localctx, 4);
        setState(1407); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(1406);
                  _la = _input->LA(1);
                  if (_la == 0 || _la == Token::EOF || (((((_la - 85) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 85)) & ((1ULL << (cpp::LeftParen - 85))
                    | (1ULL << (cpp::RightParen - 85))
                    | (1ULL << (cpp::LeftBracket - 85))
                    | (1ULL << (cpp::RightBracket - 85))
                    | (1ULL << (cpp::LeftBrace - 85))
                    | (1ULL << (cpp::RightBrace - 85)))) != 0))) {
                  _errHandler->recoverInline(this);
                  }
                  else {
                    _errHandler->reportMatch(this);
                    consume();
                  }
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(1409); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

cpp::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::InitDeclaratorContext *> cpp::InitDeclaratorListContext::initDeclarator() {
  return getRuleContexts<cpp::InitDeclaratorContext>();
}

cpp::InitDeclaratorContext* cpp::InitDeclaratorListContext::initDeclarator(size_t i) {
  return getRuleContext<cpp::InitDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> cpp::InitDeclaratorListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::InitDeclaratorListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::InitDeclaratorListContext::getRuleIndex() const {
  return cpp::RuleInitDeclaratorList;
}


cpp::InitDeclaratorListContext* cpp::initDeclaratorList() {
  InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 222, cpp::RuleInitDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1413);
    dynamic_cast<InitDeclaratorListContext *>(_localctx)->idecl = initDeclarator();

            _localctx->resultDocStream << dynamic_cast<InitDeclaratorListContext *>(_localctx)->idecl->resultDocText;
        
    setState(1422);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(1416);
      match(cpp::Comma);

      setState(1417);
      dynamic_cast<InitDeclaratorListContext *>(_localctx)->idecl = initDeclarator();

                            _localctx->resultDocStream << dynamic_cast<InitDeclaratorListContext *>(_localctx)->idecl->resultDocText;
                        
      setState(1424);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }

            dynamic_cast<InitDeclaratorListContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorContext ------------------------------------------------------------------

cpp::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::DeclaratorContext* cpp::InitDeclaratorContext::declarator() {
  return getRuleContext<cpp::DeclaratorContext>(0);
}

cpp::InitializerContext* cpp::InitDeclaratorContext::initializer() {
  return getRuleContext<cpp::InitializerContext>(0);
}


size_t cpp::InitDeclaratorContext::getRuleIndex() const {
  return cpp::RuleInitDeclarator;
}


cpp::InitDeclaratorContext* cpp::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 224, cpp::RuleInitDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1427);
    dynamic_cast<InitDeclaratorContext *>(_localctx)->decl = declarator();

            _localctx->resultDocStream << "\n\\scnidtf{" << (dynamic_cast<InitDeclaratorContext *>(_localctx)->decl != nullptr ? _input->getText(dynamic_cast<InitDeclaratorContext *>(_localctx)->decl->start, dynamic_cast<InitDeclaratorContext *>(_localctx)->decl->stop) : nullptr) << "}\n";

            auto parent = _localctx->decl->parent;
            while (parent != nullptr && !dynamic_cast<FunctionDefinitionContext *>(parent)) {
              parent = parent->parent;
            }
            std::string methodName;
            if (parent != nullptr) {
                methodName = dynamic_cast<FunctionDefinitionContext *>(parent)->methodName;
            }

            _localctx->resultDocStream << "\\scniselement{" << methodName << "}\n";
        
    setState(1431);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (cpp::LeftParen - 85))
      | (1ULL << (cpp::LeftBrace - 85))
      | (1ULL << (cpp::Assign - 85)))) != 0)) {
      setState(1430);
      initializer();
    }

            dynamic_cast<InitDeclaratorContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

cpp::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::PointerDeclaratorContext* cpp::DeclaratorContext::pointerDeclarator() {
  return getRuleContext<cpp::PointerDeclaratorContext>(0);
}

cpp::NoPointerDeclaratorContext* cpp::DeclaratorContext::noPointerDeclarator() {
  return getRuleContext<cpp::NoPointerDeclaratorContext>(0);
}

cpp::ParametersAndQualifiersContext* cpp::DeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<cpp::ParametersAndQualifiersContext>(0);
}

cpp::TrailingReturnTypeContext* cpp::DeclaratorContext::trailingReturnType() {
  return getRuleContext<cpp::TrailingReturnTypeContext>(0);
}


size_t cpp::DeclaratorContext::getRuleIndex() const {
  return cpp::RuleDeclarator;
}


cpp::DeclaratorContext* cpp::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 226, cpp::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1440);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1435);
      pointerDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1436);
      noPointerDeclarator(0);
      setState(1437);
      parametersAndQualifiers();
      setState(1438);
      trailingReturnType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerDeclaratorContext ------------------------------------------------------------------

cpp::PointerDeclaratorContext::PointerDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::NoPointerDeclaratorContext* cpp::PointerDeclaratorContext::noPointerDeclarator() {
  return getRuleContext<cpp::NoPointerDeclaratorContext>(0);
}

std::vector<cpp::PointerOperatorContext *> cpp::PointerDeclaratorContext::pointerOperator() {
  return getRuleContexts<cpp::PointerOperatorContext>();
}

cpp::PointerOperatorContext* cpp::PointerDeclaratorContext::pointerOperator(size_t i) {
  return getRuleContext<cpp::PointerOperatorContext>(i);
}

std::vector<tree::TerminalNode *> cpp::PointerDeclaratorContext::Const() {
  return getTokens(cpp::Const);
}

tree::TerminalNode* cpp::PointerDeclaratorContext::Const(size_t i) {
  return getToken(cpp::Const, i);
}


size_t cpp::PointerDeclaratorContext::getRuleIndex() const {
  return cpp::RulePointerDeclarator;
}


cpp::PointerDeclaratorContext* cpp::pointerDeclarator() {
  PointerDeclaratorContext *_localctx = _tracker.createInstance<PointerDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 228, cpp::RulePointerDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1448);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1442);
        pointerOperator();
        setState(1444);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Const) {
          setState(1443);
          match(cpp::Const);
        } 
      }
      setState(1450);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx);
    }
    setState(1451);
    noPointerDeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerDeclaratorContext ------------------------------------------------------------------

cpp::NoPointerDeclaratorContext::NoPointerDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::DeclaratoridContext* cpp::NoPointerDeclaratorContext::declaratorid() {
  return getRuleContext<cpp::DeclaratoridContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::NoPointerDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* cpp::NoPointerDeclaratorContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::PointerDeclaratorContext* cpp::NoPointerDeclaratorContext::pointerDeclarator() {
  return getRuleContext<cpp::PointerDeclaratorContext>(0);
}

tree::TerminalNode* cpp::NoPointerDeclaratorContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::NoPointerDeclaratorContext* cpp::NoPointerDeclaratorContext::noPointerDeclarator() {
  return getRuleContext<cpp::NoPointerDeclaratorContext>(0);
}

cpp::ParametersAndQualifiersContext* cpp::NoPointerDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<cpp::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode* cpp::NoPointerDeclaratorContext::LeftBracket() {
  return getToken(cpp::LeftBracket, 0);
}

tree::TerminalNode* cpp::NoPointerDeclaratorContext::RightBracket() {
  return getToken(cpp::RightBracket, 0);
}

cpp::ConstantExpressionContext* cpp::NoPointerDeclaratorContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}


size_t cpp::NoPointerDeclaratorContext::getRuleIndex() const {
  return cpp::RuleNoPointerDeclarator;
}



cpp::NoPointerDeclaratorContext* cpp::noPointerDeclarator() {
   return noPointerDeclarator(0);
}

cpp::NoPointerDeclaratorContext* cpp::noPointerDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cpp::NoPointerDeclaratorContext *_localctx = _tracker.createInstance<NoPointerDeclaratorContext>(_ctx, parentState);
  cpp::NoPointerDeclaratorContext *previousContext = _localctx;
  size_t startState = 230;
  enterRecursionRule(_localctx, 230, cpp::RuleNoPointerDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1462);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Decltype:
      case cpp::Operator:
      case cpp::Tilde:
      case cpp::Doublecolon:
      case cpp::Ellipsis:
      case cpp::Identifier: {
        setState(1454);
        declaratorid();
        setState(1456);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
        case 1: {
          setState(1455);
          attributeSpecifierSeq();
          break;
        }

        }
        break;
      }

      case cpp::LeftParen: {
        setState(1458);
        match(cpp::LeftParen);
        setState(1459);
        pointerDeclarator();
        setState(1460);
        match(cpp::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1478);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerDeclarator);
        setState(1464);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(1474);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case cpp::LeftParen: {
            setState(1465);
            parametersAndQualifiers();
            break;
          }

          case cpp::LeftBracket: {
            setState(1466);
            match(cpp::LeftBracket);
            setState(1468);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
              | (1ULL << cpp::CharacterLiteral)
              | (1ULL << cpp::FloatingLiteral)
              | (1ULL << cpp::StringLiteral)
              | (1ULL << cpp::BooleanLiteral)
              | (1ULL << cpp::PointerLiteral)
              | (1ULL << cpp::UserDefinedLiteral)
              | (1ULL << cpp::Alignof)
              | (1ULL << cpp::Auto)
              | (1ULL << cpp::Bool)
              | (1ULL << cpp::Char)
              | (1ULL << cpp::Char16)
              | (1ULL << cpp::Char32)
              | (1ULL << cpp::Const_cast)
              | (1ULL << cpp::Decltype)
              | (1ULL << cpp::Delete)
              | (1ULL << cpp::Double)
              | (1ULL << cpp::Dynamic_cast)
              | (1ULL << cpp::Float)
              | (1ULL << cpp::Int)
              | (1ULL << cpp::Long)
              | (1ULL << cpp::New)
              | (1ULL << cpp::Noexcept)
              | (1ULL << cpp::Operator)
              | (1ULL << cpp::Reinterpret_cast)
              | (1ULL << cpp::Short)
              | (1ULL << cpp::Signed)
              | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
              ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
              | (1ULL << (cpp::This - 65))
              | (1ULL << (cpp::Typeid_ - 65))
              | (1ULL << (cpp::Typename_ - 65))
              | (1ULL << (cpp::Unsigned - 65))
              | (1ULL << (cpp::Void - 65))
              | (1ULL << (cpp::Wchar - 65))
              | (1ULL << (cpp::LeftParen - 65))
              | (1ULL << (cpp::LeftBracket - 65))
              | (1ULL << (cpp::Plus - 65))
              | (1ULL << (cpp::Minus - 65))
              | (1ULL << (cpp::Star - 65))
              | (1ULL << (cpp::And - 65))
              | (1ULL << (cpp::Or - 65))
              | (1ULL << (cpp::Tilde - 65))
              | (1ULL << (cpp::Not - 65))
              | (1ULL << (cpp::PlusPlus - 65))
              | (1ULL << (cpp::MinusMinus - 65))
              | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
              setState(1467);
              constantExpression();
            }
            setState(1470);
            match(cpp::RightBracket);
            setState(1472);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
            case 1: {
              setState(1471);
              attributeSpecifierSeq();
              break;
            }

            }
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(1480);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametersAndQualifiersContext ------------------------------------------------------------------

cpp::ParametersAndQualifiersContext::ParametersAndQualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ParametersAndQualifiersContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::ParametersAndQualifiersContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::ParameterDeclarationClauseContext* cpp::ParametersAndQualifiersContext::parameterDeclarationClause() {
  return getRuleContext<cpp::ParameterDeclarationClauseContext>(0);
}

cpp::CvqualifierseqContext* cpp::ParametersAndQualifiersContext::cvqualifierseq() {
  return getRuleContext<cpp::CvqualifierseqContext>(0);
}

cpp::RefqualifierContext* cpp::ParametersAndQualifiersContext::refqualifier() {
  return getRuleContext<cpp::RefqualifierContext>(0);
}

cpp::ExceptionSpecificationContext* cpp::ParametersAndQualifiersContext::exceptionSpecification() {
  return getRuleContext<cpp::ExceptionSpecificationContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::ParametersAndQualifiersContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::ParametersAndQualifiersContext::getRuleIndex() const {
  return cpp::RuleParametersAndQualifiers;
}


cpp::ParametersAndQualifiersContext* cpp::parametersAndQualifiers() {
  ParametersAndQualifiersContext *_localctx = _tracker.createInstance<ParametersAndQualifiersContext>(_ctx, getState());
  enterRule(_localctx, 232, cpp::RuleParametersAndQualifiers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1481);
    match(cpp::LeftParen);
    setState(1483);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & ((1ULL << (cpp::Alignas - 10))
      | (1ULL << (cpp::Auto - 10))
      | (1ULL << (cpp::Bool - 10))
      | (1ULL << (cpp::Char - 10))
      | (1ULL << (cpp::Char16 - 10))
      | (1ULL << (cpp::Char32 - 10))
      | (1ULL << (cpp::Class - 10))
      | (1ULL << (cpp::Const - 10))
      | (1ULL << (cpp::Constexpr - 10))
      | (1ULL << (cpp::Decltype - 10))
      | (1ULL << (cpp::Double - 10))
      | (1ULL << (cpp::Enum - 10))
      | (1ULL << (cpp::Explicit - 10))
      | (1ULL << (cpp::Extern - 10))
      | (1ULL << (cpp::Float - 10))
      | (1ULL << (cpp::Friend - 10))
      | (1ULL << (cpp::Inline - 10))
      | (1ULL << (cpp::Int - 10))
      | (1ULL << (cpp::Long - 10))
      | (1ULL << (cpp::Mutable - 10))
      | (1ULL << (cpp::Register - 10))
      | (1ULL << (cpp::Short - 10))
      | (1ULL << (cpp::Signed - 10))
      | (1ULL << (cpp::Static - 10))
      | (1ULL << (cpp::Struct - 10))
      | (1ULL << (cpp::Thread_local - 10)))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (cpp::Typedef - 74))
      | (1ULL << (cpp::Typename_ - 74))
      | (1ULL << (cpp::Union - 74))
      | (1ULL << (cpp::Unsigned - 74))
      | (1ULL << (cpp::Virtual - 74))
      | (1ULL << (cpp::Void - 74))
      | (1ULL << (cpp::Volatile - 74))
      | (1ULL << (cpp::Wchar - 74))
      | (1ULL << (cpp::LeftBracket - 74))
      | (1ULL << (cpp::Doublecolon - 74))
      | (1ULL << (cpp::Identifier - 74)))) != 0)) {
      setState(1482);
      parameterDeclarationClause();
    }
    setState(1485);
    match(cpp::RightParen);
    setState(1487);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      setState(1486);
      cvqualifierseq();
      break;
    }

    }
    setState(1490);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
    case 1: {
      setState(1489);
      refqualifier();
      break;
    }

    }
    setState(1493);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
    case 1: {
      setState(1492);
      exceptionSpecification();
      break;
    }

    }
    setState(1496);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 174, _ctx)) {
    case 1: {
      setState(1495);
      attributeSpecifierSeq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingReturnTypeContext ------------------------------------------------------------------

cpp::TrailingReturnTypeContext::TrailingReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TrailingReturnTypeContext::Arrow() {
  return getToken(cpp::Arrow, 0);
}

cpp::TrailingTypeSpecifierSeqContext* cpp::TrailingReturnTypeContext::trailingTypeSpecifierSeq() {
  return getRuleContext<cpp::TrailingTypeSpecifierSeqContext>(0);
}

cpp::AbstractDeclaratorContext* cpp::TrailingReturnTypeContext::abstractDeclarator() {
  return getRuleContext<cpp::AbstractDeclaratorContext>(0);
}


size_t cpp::TrailingReturnTypeContext::getRuleIndex() const {
  return cpp::RuleTrailingReturnType;
}


cpp::TrailingReturnTypeContext* cpp::trailingReturnType() {
  TrailingReturnTypeContext *_localctx = _tracker.createInstance<TrailingReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 234, cpp::RuleTrailingReturnType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1498);
    match(cpp::Arrow);
    setState(1499);
    trailingTypeSpecifierSeq();
    setState(1501);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
    case 1: {
      setState(1500);
      abstractDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerOperatorContext ------------------------------------------------------------------

cpp::PointerOperatorContext::PointerOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::PointerOperatorContext::And() {
  return getToken(cpp::And, 0);
}

tree::TerminalNode* cpp::PointerOperatorContext::AndAnd() {
  return getToken(cpp::AndAnd, 0);
}

cpp::AttributeSpecifierSeqContext* cpp::PointerOperatorContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* cpp::PointerOperatorContext::Star() {
  return getToken(cpp::Star, 0);
}

cpp::NestedNameSpecifierContext* cpp::PointerOperatorContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

cpp::CvqualifierseqContext* cpp::PointerOperatorContext::cvqualifierseq() {
  return getRuleContext<cpp::CvqualifierseqContext>(0);
}


size_t cpp::PointerOperatorContext::getRuleIndex() const {
  return cpp::RulePointerOperator;
}


cpp::PointerOperatorContext* cpp::pointerOperator() {
  PointerOperatorContext *_localctx = _tracker.createInstance<PointerOperatorContext>(_ctx, getState());
  enterRule(_localctx, 236, cpp::RulePointerOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1517);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::And:
      case cpp::AndAnd: {
        enterOuterAlt(_localctx, 1);
        setState(1503);
        _la = _input->LA(1);
        if (!(_la == cpp::And

        || _la == cpp::AndAnd)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1505);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx)) {
        case 1: {
          setState(1504);
          attributeSpecifierSeq();
          break;
        }

        }
        break;
      }

      case cpp::Decltype:
      case cpp::Star:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1508);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Decltype || _la == cpp::Doublecolon

        || _la == cpp::Identifier) {
          setState(1507);
          nestedNameSpecifier(0);
        }
        setState(1510);
        match(cpp::Star);
        setState(1512);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx)) {
        case 1: {
          setState(1511);
          attributeSpecifierSeq();
          break;
        }

        }
        setState(1515);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
        case 1: {
          setState(1514);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierseqContext ------------------------------------------------------------------

cpp::CvqualifierseqContext::CvqualifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::CvQualifierContext *> cpp::CvqualifierseqContext::cvQualifier() {
  return getRuleContexts<cpp::CvQualifierContext>();
}

cpp::CvQualifierContext* cpp::CvqualifierseqContext::cvQualifier(size_t i) {
  return getRuleContext<cpp::CvQualifierContext>(i);
}


size_t cpp::CvqualifierseqContext::getRuleIndex() const {
  return cpp::RuleCvqualifierseq;
}


cpp::CvqualifierseqContext* cpp::cvqualifierseq() {
  CvqualifierseqContext *_localctx = _tracker.createInstance<CvqualifierseqContext>(_ctx, getState());
  enterRule(_localctx, 238, cpp::RuleCvqualifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1520); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1519);
              cvQualifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1522); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvQualifierContext ------------------------------------------------------------------

cpp::CvQualifierContext::CvQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::CvQualifierContext::Const() {
  return getToken(cpp::Const, 0);
}

tree::TerminalNode* cpp::CvQualifierContext::Volatile() {
  return getToken(cpp::Volatile, 0);
}


size_t cpp::CvQualifierContext::getRuleIndex() const {
  return cpp::RuleCvQualifier;
}


cpp::CvQualifierContext* cpp::cvQualifier() {
  CvQualifierContext *_localctx = _tracker.createInstance<CvQualifierContext>(_ctx, getState());
  enterRule(_localctx, 240, cpp::RuleCvQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1524);
    _la = _input->LA(1);
    if (!(_la == cpp::Const

    || _la == cpp::Volatile)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefqualifierContext ------------------------------------------------------------------

cpp::RefqualifierContext::RefqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::RefqualifierContext::And() {
  return getToken(cpp::And, 0);
}

tree::TerminalNode* cpp::RefqualifierContext::AndAnd() {
  return getToken(cpp::AndAnd, 0);
}


size_t cpp::RefqualifierContext::getRuleIndex() const {
  return cpp::RuleRefqualifier;
}


cpp::RefqualifierContext* cpp::refqualifier() {
  RefqualifierContext *_localctx = _tracker.createInstance<RefqualifierContext>(_ctx, getState());
  enterRule(_localctx, 242, cpp::RuleRefqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1526);
    _la = _input->LA(1);
    if (!(_la == cpp::And

    || _la == cpp::AndAnd)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratoridContext ------------------------------------------------------------------

cpp::DeclaratoridContext::DeclaratoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::IdExpressionContext* cpp::DeclaratoridContext::idExpression() {
  return getRuleContext<cpp::IdExpressionContext>(0);
}

tree::TerminalNode* cpp::DeclaratoridContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}


size_t cpp::DeclaratoridContext::getRuleIndex() const {
  return cpp::RuleDeclaratorid;
}


cpp::DeclaratoridContext* cpp::declaratorid() {
  DeclaratoridContext *_localctx = _tracker.createInstance<DeclaratoridContext>(_ctx, getState());
  enterRule(_localctx, 244, cpp::RuleDeclaratorid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1529);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(1528);
      match(cpp::Ellipsis);
    }
    setState(1531);
    idExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheTypeIdContext ------------------------------------------------------------------

cpp::TheTypeIdContext::TheTypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TypeSpecifierSeqContext* cpp::TheTypeIdContext::typeSpecifierSeq() {
  return getRuleContext<cpp::TypeSpecifierSeqContext>(0);
}

cpp::AbstractDeclaratorContext* cpp::TheTypeIdContext::abstractDeclarator() {
  return getRuleContext<cpp::AbstractDeclaratorContext>(0);
}


size_t cpp::TheTypeIdContext::getRuleIndex() const {
  return cpp::RuleTheTypeId;
}


cpp::TheTypeIdContext* cpp::theTypeId() {
  TheTypeIdContext *_localctx = _tracker.createInstance<TheTypeIdContext>(_ctx, getState());
  enterRule(_localctx, 246, cpp::RuleTheTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1533);
    typeSpecifierSeq();
    setState(1535);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
    case 1: {
      setState(1534);
      abstractDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

cpp::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::PointerAbstractDeclaratorContext* cpp::AbstractDeclaratorContext::pointerAbstractDeclarator() {
  return getRuleContext<cpp::PointerAbstractDeclaratorContext>(0);
}

cpp::ParametersAndQualifiersContext* cpp::AbstractDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<cpp::ParametersAndQualifiersContext>(0);
}

cpp::TrailingReturnTypeContext* cpp::AbstractDeclaratorContext::trailingReturnType() {
  return getRuleContext<cpp::TrailingReturnTypeContext>(0);
}

cpp::NoPointerAbstractDeclaratorContext* cpp::AbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContext<cpp::NoPointerAbstractDeclaratorContext>(0);
}

cpp::AbstractPackDeclaratorContext* cpp::AbstractDeclaratorContext::abstractPackDeclarator() {
  return getRuleContext<cpp::AbstractPackDeclaratorContext>(0);
}


size_t cpp::AbstractDeclaratorContext::getRuleIndex() const {
  return cpp::RuleAbstractDeclarator;
}


cpp::AbstractDeclaratorContext* cpp::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 248, cpp::RuleAbstractDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1545);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1537);
      pointerAbstractDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1539);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx)) {
      case 1: {
        setState(1538);
        noPointerAbstractDeclarator(0);
        break;
      }

      }
      setState(1541);
      parametersAndQualifiers();
      setState(1542);
      trailingReturnType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1544);
      abstractPackDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerAbstractDeclaratorContext ------------------------------------------------------------------

cpp::PointerAbstractDeclaratorContext::PointerAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::NoPointerAbstractDeclaratorContext* cpp::PointerAbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContext<cpp::NoPointerAbstractDeclaratorContext>(0);
}

std::vector<cpp::PointerOperatorContext *> cpp::PointerAbstractDeclaratorContext::pointerOperator() {
  return getRuleContexts<cpp::PointerOperatorContext>();
}

cpp::PointerOperatorContext* cpp::PointerAbstractDeclaratorContext::pointerOperator(size_t i) {
  return getRuleContext<cpp::PointerOperatorContext>(i);
}


size_t cpp::PointerAbstractDeclaratorContext::getRuleIndex() const {
  return cpp::RulePointerAbstractDeclarator;
}


cpp::PointerAbstractDeclaratorContext* cpp::pointerAbstractDeclarator() {
  PointerAbstractDeclaratorContext *_localctx = _tracker.createInstance<PointerAbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 250, cpp::RulePointerAbstractDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1556);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::LeftParen:
      case cpp::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1547);
        noPointerAbstractDeclarator(0);
        break;
      }

      case cpp::Decltype:
      case cpp::Star:
      case cpp::And:
      case cpp::AndAnd:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1549); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(1548);
          pointerOperator();
          setState(1551); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == cpp::Decltype || ((((_la - 93) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 93)) & ((1ULL << (cpp::Star - 93))
          | (1ULL << (cpp::And - 93))
          | (1ULL << (cpp::AndAnd - 93))
          | (1ULL << (cpp::Doublecolon - 93))
          | (1ULL << (cpp::Identifier - 93)))) != 0));
        setState(1554);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
        case 1: {
          setState(1553);
          noPointerAbstractDeclarator(0);
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerAbstractDeclaratorContext ------------------------------------------------------------------

cpp::NoPointerAbstractDeclaratorContext::NoPointerAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ParametersAndQualifiersContext* cpp::NoPointerAbstractDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<cpp::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode* cpp::NoPointerAbstractDeclaratorContext::LeftBracket() {
  return getToken(cpp::LeftBracket, 0);
}

tree::TerminalNode* cpp::NoPointerAbstractDeclaratorContext::RightBracket() {
  return getToken(cpp::RightBracket, 0);
}

cpp::ConstantExpressionContext* cpp::NoPointerAbstractDeclaratorContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::NoPointerAbstractDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* cpp::NoPointerAbstractDeclaratorContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::PointerAbstractDeclaratorContext* cpp::NoPointerAbstractDeclaratorContext::pointerAbstractDeclarator() {
  return getRuleContext<cpp::PointerAbstractDeclaratorContext>(0);
}

tree::TerminalNode* cpp::NoPointerAbstractDeclaratorContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

std::vector<cpp::NoPointerAbstractDeclaratorContext *> cpp::NoPointerAbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContexts<cpp::NoPointerAbstractDeclaratorContext>();
}

cpp::NoPointerAbstractDeclaratorContext* cpp::NoPointerAbstractDeclaratorContext::noPointerAbstractDeclarator(size_t i) {
  return getRuleContext<cpp::NoPointerAbstractDeclaratorContext>(i);
}


size_t cpp::NoPointerAbstractDeclaratorContext::getRuleIndex() const {
  return cpp::RuleNoPointerAbstractDeclarator;
}



cpp::NoPointerAbstractDeclaratorContext* cpp::noPointerAbstractDeclarator() {
   return noPointerAbstractDeclarator(0);
}

cpp::NoPointerAbstractDeclaratorContext* cpp::noPointerAbstractDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cpp::NoPointerAbstractDeclaratorContext *_localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(_ctx, parentState);
  cpp::NoPointerAbstractDeclaratorContext *previousContext = _localctx;
  size_t startState = 252;
  enterRecursionRule(_localctx, 252, cpp::RuleNoPointerAbstractDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1572);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
    case 1: {
      setState(1559);
      parametersAndQualifiers();
      break;
    }

    case 2: {
      setState(1560);
      match(cpp::LeftBracket);
      setState(1562);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
        | (1ULL << cpp::CharacterLiteral)
        | (1ULL << cpp::FloatingLiteral)
        | (1ULL << cpp::StringLiteral)
        | (1ULL << cpp::BooleanLiteral)
        | (1ULL << cpp::PointerLiteral)
        | (1ULL << cpp::UserDefinedLiteral)
        | (1ULL << cpp::Alignof)
        | (1ULL << cpp::Auto)
        | (1ULL << cpp::Bool)
        | (1ULL << cpp::Char)
        | (1ULL << cpp::Char16)
        | (1ULL << cpp::Char32)
        | (1ULL << cpp::Const_cast)
        | (1ULL << cpp::Decltype)
        | (1ULL << cpp::Delete)
        | (1ULL << cpp::Double)
        | (1ULL << cpp::Dynamic_cast)
        | (1ULL << cpp::Float)
        | (1ULL << cpp::Int)
        | (1ULL << cpp::Long)
        | (1ULL << cpp::New)
        | (1ULL << cpp::Noexcept)
        | (1ULL << cpp::Operator)
        | (1ULL << cpp::Reinterpret_cast)
        | (1ULL << cpp::Short)
        | (1ULL << cpp::Signed)
        | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
        | (1ULL << (cpp::This - 65))
        | (1ULL << (cpp::Typeid_ - 65))
        | (1ULL << (cpp::Typename_ - 65))
        | (1ULL << (cpp::Unsigned - 65))
        | (1ULL << (cpp::Void - 65))
        | (1ULL << (cpp::Wchar - 65))
        | (1ULL << (cpp::LeftParen - 65))
        | (1ULL << (cpp::LeftBracket - 65))
        | (1ULL << (cpp::Plus - 65))
        | (1ULL << (cpp::Minus - 65))
        | (1ULL << (cpp::Star - 65))
        | (1ULL << (cpp::And - 65))
        | (1ULL << (cpp::Or - 65))
        | (1ULL << (cpp::Tilde - 65))
        | (1ULL << (cpp::Not - 65))
        | (1ULL << (cpp::PlusPlus - 65))
        | (1ULL << (cpp::MinusMinus - 65))
        | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
        setState(1561);
        constantExpression();
      }
      setState(1564);
      match(cpp::RightBracket);
      setState(1566);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
      case 1: {
        setState(1565);
        attributeSpecifierSeq();
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1568);
      match(cpp::LeftParen);
      setState(1569);
      pointerAbstractDeclarator();
      setState(1570);
      match(cpp::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1589);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractDeclarator);
        setState(1574);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(1585);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
        case 1: {
          setState(1575);
          parametersAndQualifiers();
          break;
        }

        case 2: {
          setState(1576);
          noPointerAbstractDeclarator(0);
          setState(1577);
          match(cpp::LeftBracket);
          setState(1579);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
            | (1ULL << cpp::CharacterLiteral)
            | (1ULL << cpp::FloatingLiteral)
            | (1ULL << cpp::StringLiteral)
            | (1ULL << cpp::BooleanLiteral)
            | (1ULL << cpp::PointerLiteral)
            | (1ULL << cpp::UserDefinedLiteral)
            | (1ULL << cpp::Alignof)
            | (1ULL << cpp::Auto)
            | (1ULL << cpp::Bool)
            | (1ULL << cpp::Char)
            | (1ULL << cpp::Char16)
            | (1ULL << cpp::Char32)
            | (1ULL << cpp::Const_cast)
            | (1ULL << cpp::Decltype)
            | (1ULL << cpp::Delete)
            | (1ULL << cpp::Double)
            | (1ULL << cpp::Dynamic_cast)
            | (1ULL << cpp::Float)
            | (1ULL << cpp::Int)
            | (1ULL << cpp::Long)
            | (1ULL << cpp::New)
            | (1ULL << cpp::Noexcept)
            | (1ULL << cpp::Operator)
            | (1ULL << cpp::Reinterpret_cast)
            | (1ULL << cpp::Short)
            | (1ULL << cpp::Signed)
            | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
            | (1ULL << (cpp::This - 65))
            | (1ULL << (cpp::Typeid_ - 65))
            | (1ULL << (cpp::Typename_ - 65))
            | (1ULL << (cpp::Unsigned - 65))
            | (1ULL << (cpp::Void - 65))
            | (1ULL << (cpp::Wchar - 65))
            | (1ULL << (cpp::LeftParen - 65))
            | (1ULL << (cpp::LeftBracket - 65))
            | (1ULL << (cpp::Plus - 65))
            | (1ULL << (cpp::Minus - 65))
            | (1ULL << (cpp::Star - 65))
            | (1ULL << (cpp::And - 65))
            | (1ULL << (cpp::Or - 65))
            | (1ULL << (cpp::Tilde - 65))
            | (1ULL << (cpp::Not - 65))
            | (1ULL << (cpp::PlusPlus - 65))
            | (1ULL << (cpp::MinusMinus - 65))
            | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
            setState(1578);
            constantExpression();
          }
          setState(1581);
          match(cpp::RightBracket);
          setState(1583);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
          case 1: {
            setState(1582);
            attributeSpecifierSeq();
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1591);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AbstractPackDeclaratorContext ------------------------------------------------------------------

cpp::AbstractPackDeclaratorContext::AbstractPackDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::NoPointerAbstractPackDeclaratorContext* cpp::AbstractPackDeclaratorContext::noPointerAbstractPackDeclarator() {
  return getRuleContext<cpp::NoPointerAbstractPackDeclaratorContext>(0);
}

std::vector<cpp::PointerOperatorContext *> cpp::AbstractPackDeclaratorContext::pointerOperator() {
  return getRuleContexts<cpp::PointerOperatorContext>();
}

cpp::PointerOperatorContext* cpp::AbstractPackDeclaratorContext::pointerOperator(size_t i) {
  return getRuleContext<cpp::PointerOperatorContext>(i);
}


size_t cpp::AbstractPackDeclaratorContext::getRuleIndex() const {
  return cpp::RuleAbstractPackDeclarator;
}


cpp::AbstractPackDeclaratorContext* cpp::abstractPackDeclarator() {
  AbstractPackDeclaratorContext *_localctx = _tracker.createInstance<AbstractPackDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 254, cpp::RuleAbstractPackDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1595);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Decltype || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (cpp::Star - 93))
      | (1ULL << (cpp::And - 93))
      | (1ULL << (cpp::AndAnd - 93))
      | (1ULL << (cpp::Doublecolon - 93))
      | (1ULL << (cpp::Identifier - 93)))) != 0)) {
      setState(1592);
      pointerOperator();
      setState(1597);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1598);
    noPointerAbstractPackDeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerAbstractPackDeclaratorContext ------------------------------------------------------------------

cpp::NoPointerAbstractPackDeclaratorContext::NoPointerAbstractPackDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NoPointerAbstractPackDeclaratorContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}

cpp::NoPointerAbstractPackDeclaratorContext* cpp::NoPointerAbstractPackDeclaratorContext::noPointerAbstractPackDeclarator() {
  return getRuleContext<cpp::NoPointerAbstractPackDeclaratorContext>(0);
}

cpp::ParametersAndQualifiersContext* cpp::NoPointerAbstractPackDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<cpp::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode* cpp::NoPointerAbstractPackDeclaratorContext::LeftBracket() {
  return getToken(cpp::LeftBracket, 0);
}

tree::TerminalNode* cpp::NoPointerAbstractPackDeclaratorContext::RightBracket() {
  return getToken(cpp::RightBracket, 0);
}

cpp::ConstantExpressionContext* cpp::NoPointerAbstractPackDeclaratorContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::NoPointerAbstractPackDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::NoPointerAbstractPackDeclaratorContext::getRuleIndex() const {
  return cpp::RuleNoPointerAbstractPackDeclarator;
}



cpp::NoPointerAbstractPackDeclaratorContext* cpp::noPointerAbstractPackDeclarator() {
   return noPointerAbstractPackDeclarator(0);
}

cpp::NoPointerAbstractPackDeclaratorContext* cpp::noPointerAbstractPackDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cpp::NoPointerAbstractPackDeclaratorContext *_localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(_ctx, parentState);
  cpp::NoPointerAbstractPackDeclaratorContext *previousContext = _localctx;
  size_t startState = 256;
  enterRecursionRule(_localctx, 256, cpp::RuleNoPointerAbstractPackDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1601);
    match(cpp::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1617);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractPackDeclarator);
        setState(1603);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(1613);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case cpp::LeftParen: {
            setState(1604);
            parametersAndQualifiers();
            break;
          }

          case cpp::LeftBracket: {
            setState(1605);
            match(cpp::LeftBracket);
            setState(1607);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
              | (1ULL << cpp::CharacterLiteral)
              | (1ULL << cpp::FloatingLiteral)
              | (1ULL << cpp::StringLiteral)
              | (1ULL << cpp::BooleanLiteral)
              | (1ULL << cpp::PointerLiteral)
              | (1ULL << cpp::UserDefinedLiteral)
              | (1ULL << cpp::Alignof)
              | (1ULL << cpp::Auto)
              | (1ULL << cpp::Bool)
              | (1ULL << cpp::Char)
              | (1ULL << cpp::Char16)
              | (1ULL << cpp::Char32)
              | (1ULL << cpp::Const_cast)
              | (1ULL << cpp::Decltype)
              | (1ULL << cpp::Delete)
              | (1ULL << cpp::Double)
              | (1ULL << cpp::Dynamic_cast)
              | (1ULL << cpp::Float)
              | (1ULL << cpp::Int)
              | (1ULL << cpp::Long)
              | (1ULL << cpp::New)
              | (1ULL << cpp::Noexcept)
              | (1ULL << cpp::Operator)
              | (1ULL << cpp::Reinterpret_cast)
              | (1ULL << cpp::Short)
              | (1ULL << cpp::Signed)
              | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
              ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
              | (1ULL << (cpp::This - 65))
              | (1ULL << (cpp::Typeid_ - 65))
              | (1ULL << (cpp::Typename_ - 65))
              | (1ULL << (cpp::Unsigned - 65))
              | (1ULL << (cpp::Void - 65))
              | (1ULL << (cpp::Wchar - 65))
              | (1ULL << (cpp::LeftParen - 65))
              | (1ULL << (cpp::LeftBracket - 65))
              | (1ULL << (cpp::Plus - 65))
              | (1ULL << (cpp::Minus - 65))
              | (1ULL << (cpp::Star - 65))
              | (1ULL << (cpp::And - 65))
              | (1ULL << (cpp::Or - 65))
              | (1ULL << (cpp::Tilde - 65))
              | (1ULL << (cpp::Not - 65))
              | (1ULL << (cpp::PlusPlus - 65))
              | (1ULL << (cpp::MinusMinus - 65))
              | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
              setState(1606);
              constantExpression();
            }
            setState(1609);
            match(cpp::RightBracket);
            setState(1611);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 198, _ctx)) {
            case 1: {
              setState(1610);
              attributeSpecifierSeq();
              break;
            }

            }
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(1619);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterDeclarationClauseContext ------------------------------------------------------------------

cpp::ParameterDeclarationClauseContext::ParameterDeclarationClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ParameterDeclarationListContext* cpp::ParameterDeclarationClauseContext::parameterDeclarationList() {
  return getRuleContext<cpp::ParameterDeclarationListContext>(0);
}

tree::TerminalNode* cpp::ParameterDeclarationClauseContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}

tree::TerminalNode* cpp::ParameterDeclarationClauseContext::Comma() {
  return getToken(cpp::Comma, 0);
}


size_t cpp::ParameterDeclarationClauseContext::getRuleIndex() const {
  return cpp::RuleParameterDeclarationClause;
}


cpp::ParameterDeclarationClauseContext* cpp::parameterDeclarationClause() {
  ParameterDeclarationClauseContext *_localctx = _tracker.createInstance<ParameterDeclarationClauseContext>(_ctx, getState());
  enterRule(_localctx, 258, cpp::RuleParameterDeclarationClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1620);
    parameterDeclarationList();
    setState(1625);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Comma

    || _la == cpp::Ellipsis) {
      setState(1622);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Comma) {
        setState(1621);
        match(cpp::Comma);
      }
      setState(1624);
      match(cpp::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationListContext ------------------------------------------------------------------

cpp::ParameterDeclarationListContext::ParameterDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::ParameterDeclarationContext *> cpp::ParameterDeclarationListContext::parameterDeclaration() {
  return getRuleContexts<cpp::ParameterDeclarationContext>();
}

cpp::ParameterDeclarationContext* cpp::ParameterDeclarationListContext::parameterDeclaration(size_t i) {
  return getRuleContext<cpp::ParameterDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> cpp::ParameterDeclarationListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::ParameterDeclarationListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::ParameterDeclarationListContext::getRuleIndex() const {
  return cpp::RuleParameterDeclarationList;
}


cpp::ParameterDeclarationListContext* cpp::parameterDeclarationList() {
  ParameterDeclarationListContext *_localctx = _tracker.createInstance<ParameterDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 260, cpp::RuleParameterDeclarationList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1627);
    parameterDeclaration();
    setState(1632);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1628);
        match(cpp::Comma);
        setState(1629);
        parameterDeclaration(); 
      }
      setState(1634);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

cpp::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::DeclSpecifierSeqContext* cpp::ParameterDeclarationContext::declSpecifierSeq() {
  return getRuleContext<cpp::DeclSpecifierSeqContext>(0);
}

cpp::DeclaratorContext* cpp::ParameterDeclarationContext::declarator() {
  return getRuleContext<cpp::DeclaratorContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::ParameterDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* cpp::ParameterDeclarationContext::Assign() {
  return getToken(cpp::Assign, 0);
}

cpp::InitializerClauseContext* cpp::ParameterDeclarationContext::initializerClause() {
  return getRuleContext<cpp::InitializerClauseContext>(0);
}

cpp::AbstractDeclaratorContext* cpp::ParameterDeclarationContext::abstractDeclarator() {
  return getRuleContext<cpp::AbstractDeclaratorContext>(0);
}


size_t cpp::ParameterDeclarationContext::getRuleIndex() const {
  return cpp::RuleParameterDeclaration;
}


cpp::ParameterDeclarationContext* cpp::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 262, cpp::RuleParameterDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1636);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(1635);
      attributeSpecifierSeq();
    }
    setState(1638);
    declSpecifierSeq();
    setState(1643);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
    case 1: {
      setState(1639);
      declarator();
      break;
    }

    case 2: {
      setState(1641);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx)) {
      case 1: {
        setState(1640);
        abstractDeclarator();
        break;
      }

      }
      break;
    }

    }
    setState(1647);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Assign) {
      setState(1645);
      match(cpp::Assign);
      setState(1646);
      initializerClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

cpp::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::AttributeSpecifierSeqContext* cpp::FunctionDefinitionContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::DeclSpecifierSeqContext* cpp::FunctionDefinitionContext::declSpecifierSeq() {
  return getRuleContext<cpp::DeclSpecifierSeqContext>(0);
}

cpp::DeclaratorContext* cpp::FunctionDefinitionContext::declarator() {
  return getRuleContext<cpp::DeclaratorContext>(0);
}

cpp::VirtualSpecifierSeqContext* cpp::FunctionDefinitionContext::virtualSpecifierSeq() {
  return getRuleContext<cpp::VirtualSpecifierSeqContext>(0);
}

cpp::FunctionBodyContext* cpp::FunctionDefinitionContext::functionBody() {
  return getRuleContext<cpp::FunctionBodyContext>(0);
}

std::vector<cpp::DocCommentContext *> cpp::FunctionDefinitionContext::docComment() {
  return getRuleContexts<cpp::DocCommentContext>();
}

cpp::DocCommentContext* cpp::FunctionDefinitionContext::docComment(size_t i) {
  return getRuleContext<cpp::DocCommentContext>(i);
}


size_t cpp::FunctionDefinitionContext::getRuleIndex() const {
  return cpp::RuleFunctionDefinition;
}


cpp::FunctionDefinitionContext* cpp::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 264, cpp::RuleFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1654);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::DocBlockComment

    || _la == cpp::DocLineComment) {
      setState(1649);
      dynamic_cast<FunctionDefinitionContext *>(_localctx)->comment = docComment();

              _localctx->resultDocStream << dynamic_cast<FunctionDefinitionContext *>(_localctx)->comment->commentText;
          
      setState(1656);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1658);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(1657);
      attributeSpecifierSeq();
    }
    setState(1661);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 210, _ctx)) {
    case 1: {
      setState(1660);
      declSpecifierSeq();
      break;
    }

    }

    setState(1663);
    dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl = declarator();

            size_t bracketPos = (dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl != nullptr ? _input->getText(dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl->start, dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl->stop) : nullptr).find('(');

            if (bracketPos != std::string::npos) {
                dynamic_cast<FunctionDefinitionContext *>(_localctx)->methodName =  (dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl != nullptr ? _input->getText(dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl->start, dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl->stop) : nullptr).substr(0, bracketPos);
            } else {
                dynamic_cast<FunctionDefinitionContext *>(_localctx)->methodName =  (dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl != nullptr ? _input->getText(dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl->start, dynamic_cast<FunctionDefinitionContext *>(_localctx)->decl->stop) : nullptr);
            }

            _localctx->resultDocStream << "\n\\scnidtf{" + _localctx->methodName + "}\n";
        
    setState(1667);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Final

    || _la == cpp::Override) {
      setState(1666);
      virtualSpecifierSeq();
    }
    setState(1674);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::DocBlockComment

    || _la == cpp::DocLineComment) {
      setState(1669);
      dynamic_cast<FunctionDefinitionContext *>(_localctx)->comment = docComment();

              _localctx->resultDocStream << dynamic_cast<FunctionDefinitionContext *>(_localctx)->comment->commentText;
          
      setState(1676);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }

    setState(1677);
    dynamic_cast<FunctionDefinitionContext *>(_localctx)->body = functionBody();

            _localctx->resultDocStream << dynamic_cast<FunctionDefinitionContext *>(_localctx)->body->resultDocText;
        

            dynamic_cast<FunctionDefinitionContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

cpp::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::FunctionTryBlockContext* cpp::FunctionBodyContext::functionTryBlock() {
  return getRuleContext<cpp::FunctionTryBlockContext>(0);
}

tree::TerminalNode* cpp::FunctionBodyContext::Assign() {
  return getToken(cpp::Assign, 0);
}

tree::TerminalNode* cpp::FunctionBodyContext::Semi() {
  return getToken(cpp::Semi, 0);
}

tree::TerminalNode* cpp::FunctionBodyContext::Default() {
  return getToken(cpp::Default, 0);
}

tree::TerminalNode* cpp::FunctionBodyContext::Delete() {
  return getToken(cpp::Delete, 0);
}

cpp::ConstructorInitializerContext* cpp::FunctionBodyContext::constructorInitializer() {
  return getRuleContext<cpp::ConstructorInitializerContext>(0);
}

cpp::CompoundStatementContext* cpp::FunctionBodyContext::compoundStatement() {
  return getRuleContext<cpp::CompoundStatementContext>(0);
}


size_t cpp::FunctionBodyContext::getRuleIndex() const {
  return cpp::RuleFunctionBody;
}


cpp::FunctionBodyContext* cpp::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 266, cpp::RuleFunctionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1692);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::LeftBrace:
      case cpp::Colon: {
        setState(1683);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Colon) {
          setState(1682);
          constructorInitializer();
        }

        setState(1685);
        dynamic_cast<FunctionBodyContext *>(_localctx)->stmt = compoundStatement();

                    _localctx->resultDocStream << dynamic_cast<FunctionBodyContext *>(_localctx)->stmt->resultDocText;
                
        break;
      }

      case cpp::Try: {
        setState(1688);
        functionTryBlock();
        break;
      }

      case cpp::Assign: {
        setState(1689);
        match(cpp::Assign);
        setState(1690);
        _la = _input->LA(1);
        if (!(_la == cpp::Default

        || _la == cpp::Delete)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1691);
        match(cpp::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }

            dynamic_cast<FunctionBodyContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

cpp::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::BraceOrEqualInitializerContext* cpp::InitializerContext::braceOrEqualInitializer() {
  return getRuleContext<cpp::BraceOrEqualInitializerContext>(0);
}

tree::TerminalNode* cpp::InitializerContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ExpressionListContext* cpp::InitializerContext::expressionList() {
  return getRuleContext<cpp::ExpressionListContext>(0);
}

tree::TerminalNode* cpp::InitializerContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}


size_t cpp::InitializerContext::getRuleIndex() const {
  return cpp::RuleInitializer;
}


cpp::InitializerContext* cpp::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 268, cpp::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1701);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::LeftBrace:
      case cpp::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1696);
        braceOrEqualInitializer();
        break;
      }

      case cpp::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1697);
        match(cpp::LeftParen);
        setState(1698);
        expressionList();
        setState(1699);
        match(cpp::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceOrEqualInitializerContext ------------------------------------------------------------------

cpp::BraceOrEqualInitializerContext::BraceOrEqualInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::BraceOrEqualInitializerContext::Assign() {
  return getToken(cpp::Assign, 0);
}

cpp::InitializerClauseContext* cpp::BraceOrEqualInitializerContext::initializerClause() {
  return getRuleContext<cpp::InitializerClauseContext>(0);
}

cpp::BracedInitListContext* cpp::BraceOrEqualInitializerContext::bracedInitList() {
  return getRuleContext<cpp::BracedInitListContext>(0);
}


size_t cpp::BraceOrEqualInitializerContext::getRuleIndex() const {
  return cpp::RuleBraceOrEqualInitializer;
}


cpp::BraceOrEqualInitializerContext* cpp::braceOrEqualInitializer() {
  BraceOrEqualInitializerContext *_localctx = _tracker.createInstance<BraceOrEqualInitializerContext>(_ctx, getState());
  enterRule(_localctx, 270, cpp::RuleBraceOrEqualInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1706);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1703);
        match(cpp::Assign);
        setState(1704);
        initializerClause();
        break;
      }

      case cpp::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1705);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerClauseContext ------------------------------------------------------------------

cpp::InitializerClauseContext::InitializerClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::AssignmentExpressionContext* cpp::InitializerClauseContext::assignmentExpression() {
  return getRuleContext<cpp::AssignmentExpressionContext>(0);
}

cpp::BracedInitListContext* cpp::InitializerClauseContext::bracedInitList() {
  return getRuleContext<cpp::BracedInitListContext>(0);
}


size_t cpp::InitializerClauseContext::getRuleIndex() const {
  return cpp::RuleInitializerClause;
}


cpp::InitializerClauseContext* cpp::initializerClause() {
  InitializerClauseContext *_localctx = _tracker.createInstance<InitializerClauseContext>(_ctx, getState());
  enterRule(_localctx, 272, cpp::RuleInitializerClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1710);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::IntegerLiteral:
      case cpp::CharacterLiteral:
      case cpp::FloatingLiteral:
      case cpp::StringLiteral:
      case cpp::BooleanLiteral:
      case cpp::PointerLiteral:
      case cpp::UserDefinedLiteral:
      case cpp::Alignof:
      case cpp::Auto:
      case cpp::Bool:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Const_cast:
      case cpp::Decltype:
      case cpp::Delete:
      case cpp::Double:
      case cpp::Dynamic_cast:
      case cpp::Float:
      case cpp::Int:
      case cpp::Long:
      case cpp::New:
      case cpp::Noexcept:
      case cpp::Operator:
      case cpp::Reinterpret_cast:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Sizeof:
      case cpp::Static_cast:
      case cpp::This:
      case cpp::Throw:
      case cpp::Typeid_:
      case cpp::Typename_:
      case cpp::Unsigned:
      case cpp::Void:
      case cpp::Wchar:
      case cpp::LeftParen:
      case cpp::LeftBracket:
      case cpp::Plus:
      case cpp::Minus:
      case cpp::Star:
      case cpp::And:
      case cpp::Or:
      case cpp::Tilde:
      case cpp::Not:
      case cpp::PlusPlus:
      case cpp::MinusMinus:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1708);
        assignmentExpression();
        break;
      }

      case cpp::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1709);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

cpp::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::InitializerClauseContext *> cpp::InitializerListContext::initializerClause() {
  return getRuleContexts<cpp::InitializerClauseContext>();
}

cpp::InitializerClauseContext* cpp::InitializerListContext::initializerClause(size_t i) {
  return getRuleContext<cpp::InitializerClauseContext>(i);
}

std::vector<tree::TerminalNode *> cpp::InitializerListContext::Ellipsis() {
  return getTokens(cpp::Ellipsis);
}

tree::TerminalNode* cpp::InitializerListContext::Ellipsis(size_t i) {
  return getToken(cpp::Ellipsis, i);
}

std::vector<tree::TerminalNode *> cpp::InitializerListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::InitializerListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::InitializerListContext::getRuleIndex() const {
  return cpp::RuleInitializerList;
}


cpp::InitializerListContext* cpp::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 274, cpp::RuleInitializerList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1712);
    initializerClause();
    setState(1714);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(1713);
      match(cpp::Ellipsis);
    }
    setState(1723);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 220, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1716);
        match(cpp::Comma);
        setState(1717);
        initializerClause();
        setState(1719);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Ellipsis) {
          setState(1718);
          match(cpp::Ellipsis);
        } 
      }
      setState(1725);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 220, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BracedInitListContext ------------------------------------------------------------------

cpp::BracedInitListContext::BracedInitListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::BracedInitListContext::LeftBrace() {
  return getToken(cpp::LeftBrace, 0);
}

tree::TerminalNode* cpp::BracedInitListContext::RightBrace() {
  return getToken(cpp::RightBrace, 0);
}

cpp::InitializerListContext* cpp::BracedInitListContext::initializerList() {
  return getRuleContext<cpp::InitializerListContext>(0);
}

tree::TerminalNode* cpp::BracedInitListContext::Comma() {
  return getToken(cpp::Comma, 0);
}


size_t cpp::BracedInitListContext::getRuleIndex() const {
  return cpp::RuleBracedInitList;
}


cpp::BracedInitListContext* cpp::bracedInitList() {
  BracedInitListContext *_localctx = _tracker.createInstance<BracedInitListContext>(_ctx, getState());
  enterRule(_localctx, 276, cpp::RuleBracedInitList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1726);
    match(cpp::LeftBrace);
    setState(1731);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral)
      | (1ULL << cpp::Alignof)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Const_cast)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Delete)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Dynamic_cast)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::New)
      | (1ULL << cpp::Noexcept)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Reinterpret_cast)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
      | (1ULL << (cpp::This - 65))
      | (1ULL << (cpp::Throw - 65))
      | (1ULL << (cpp::Typeid_ - 65))
      | (1ULL << (cpp::Typename_ - 65))
      | (1ULL << (cpp::Unsigned - 65))
      | (1ULL << (cpp::Void - 65))
      | (1ULL << (cpp::Wchar - 65))
      | (1ULL << (cpp::LeftParen - 65))
      | (1ULL << (cpp::LeftBracket - 65))
      | (1ULL << (cpp::LeftBrace - 65))
      | (1ULL << (cpp::Plus - 65))
      | (1ULL << (cpp::Minus - 65))
      | (1ULL << (cpp::Star - 65))
      | (1ULL << (cpp::And - 65))
      | (1ULL << (cpp::Or - 65))
      | (1ULL << (cpp::Tilde - 65))
      | (1ULL << (cpp::Not - 65))
      | (1ULL << (cpp::PlusPlus - 65))
      | (1ULL << (cpp::MinusMinus - 65))
      | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
      setState(1727);
      initializerList();
      setState(1729);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Comma) {
        setState(1728);
        match(cpp::Comma);
      }
    }
    setState(1733);
    match(cpp::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassNameContext ------------------------------------------------------------------

cpp::ClassNameContext::ClassNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ClassNameContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::SimpleTemplateIdContext* cpp::ClassNameContext::simpleTemplateId() {
  return getRuleContext<cpp::SimpleTemplateIdContext>(0);
}


size_t cpp::ClassNameContext::getRuleIndex() const {
  return cpp::RuleClassName;
}


cpp::ClassNameContext* cpp::className() {
  ClassNameContext *_localctx = _tracker.createInstance<ClassNameContext>(_ctx, getState());
  enterRule(_localctx, 278, cpp::RuleClassName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1737);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 223, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1735);
      match(cpp::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1736);
      simpleTemplateId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassSpecifierContext ------------------------------------------------------------------

cpp::ClassSpecifierContext::ClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ClassHeadContext* cpp::ClassSpecifierContext::classHead() {
  return getRuleContext<cpp::ClassHeadContext>(0);
}

tree::TerminalNode* cpp::ClassSpecifierContext::LeftBrace() {
  return getToken(cpp::LeftBrace, 0);
}

tree::TerminalNode* cpp::ClassSpecifierContext::RightBrace() {
  return getToken(cpp::RightBrace, 0);
}

cpp::MemberSpecificationContext* cpp::ClassSpecifierContext::memberSpecification() {
  return getRuleContext<cpp::MemberSpecificationContext>(0);
}


size_t cpp::ClassSpecifierContext::getRuleIndex() const {
  return cpp::RuleClassSpecifier;
}


cpp::ClassSpecifierContext* cpp::classSpecifier() {
  ClassSpecifierContext *_localctx = _tracker.createInstance<ClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 280, cpp::RuleClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1739);
    classHead();
    setState(1740);
    match(cpp::LeftBrace);
    setState(1744);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::Alignas)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Private)
      | (1ULL << cpp::Protected)
      | (1ULL << cpp::Public)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Template - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::Colon - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128)))) != 0)) {
      setState(1741);
      dynamic_cast<ClassSpecifierContext *>(_localctx)->ms = memberSpecification();

              _localctx->resultDocStream << dynamic_cast<ClassSpecifierContext *>(_localctx)->ms->resultDocText;
          
    }
    setState(1746);
    match(cpp::RightBrace);

            dynamic_cast<ClassSpecifierContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassHeadContext ------------------------------------------------------------------

cpp::ClassHeadContext::ClassHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ClassKeyContext* cpp::ClassHeadContext::classKey() {
  return getRuleContext<cpp::ClassKeyContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::ClassHeadContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::ClassHeadNameContext* cpp::ClassHeadContext::classHeadName() {
  return getRuleContext<cpp::ClassHeadNameContext>(0);
}

cpp::BaseClauseContext* cpp::ClassHeadContext::baseClause() {
  return getRuleContext<cpp::BaseClauseContext>(0);
}

cpp::ClassVirtSpecifierContext* cpp::ClassHeadContext::classVirtSpecifier() {
  return getRuleContext<cpp::ClassVirtSpecifierContext>(0);
}

tree::TerminalNode* cpp::ClassHeadContext::Union() {
  return getToken(cpp::Union, 0);
}


size_t cpp::ClassHeadContext::getRuleIndex() const {
  return cpp::RuleClassHead;
}


cpp::ClassHeadContext* cpp::classHead() {
  ClassHeadContext *_localctx = _tracker.createInstance<ClassHeadContext>(_ctx, getState());
  enterRule(_localctx, 282, cpp::RuleClassHead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1772);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Class:
      case cpp::Struct: {
        enterOuterAlt(_localctx, 1);
        setState(1749);
        classKey();
        setState(1751);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
          setState(1750);
          attributeSpecifierSeq();
        }
        setState(1757);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Decltype || _la == cpp::Doublecolon

        || _la == cpp::Identifier) {
          setState(1753);
          classHeadName();
          setState(1755);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == cpp::Final) {
            setState(1754);
            classVirtSpecifier();
          }
        }
        setState(1760);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Colon) {
          setState(1759);
          baseClause();
        }
        break;
      }

      case cpp::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1762);
        match(cpp::Union);
        setState(1764);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
          setState(1763);
          attributeSpecifierSeq();
        }
        setState(1770);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Decltype || _la == cpp::Doublecolon

        || _la == cpp::Identifier) {
          setState(1766);
          classHeadName();
          setState(1768);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == cpp::Final) {
            setState(1767);
            classVirtSpecifier();
          }
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassHeadNameContext ------------------------------------------------------------------

cpp::ClassHeadNameContext::ClassHeadNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ClassNameContext* cpp::ClassHeadNameContext::className() {
  return getRuleContext<cpp::ClassNameContext>(0);
}

cpp::NestedNameSpecifierContext* cpp::ClassHeadNameContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}


size_t cpp::ClassHeadNameContext::getRuleIndex() const {
  return cpp::RuleClassHeadName;
}


cpp::ClassHeadNameContext* cpp::classHeadName() {
  ClassHeadNameContext *_localctx = _tracker.createInstance<ClassHeadNameContext>(_ctx, getState());
  enterRule(_localctx, 284, cpp::RuleClassHeadName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1775);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
    case 1: {
      setState(1774);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1777);
    className();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassVirtSpecifierContext ------------------------------------------------------------------

cpp::ClassVirtSpecifierContext::ClassVirtSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ClassVirtSpecifierContext::Final() {
  return getToken(cpp::Final, 0);
}


size_t cpp::ClassVirtSpecifierContext::getRuleIndex() const {
  return cpp::RuleClassVirtSpecifier;
}


cpp::ClassVirtSpecifierContext* cpp::classVirtSpecifier() {
  ClassVirtSpecifierContext *_localctx = _tracker.createInstance<ClassVirtSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 286, cpp::RuleClassVirtSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1779);
    match(cpp::Final);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassKeyContext ------------------------------------------------------------------

cpp::ClassKeyContext::ClassKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ClassKeyContext::Class() {
  return getToken(cpp::Class, 0);
}

tree::TerminalNode* cpp::ClassKeyContext::Struct() {
  return getToken(cpp::Struct, 0);
}


size_t cpp::ClassKeyContext::getRuleIndex() const {
  return cpp::RuleClassKey;
}


cpp::ClassKeyContext* cpp::classKey() {
  ClassKeyContext *_localctx = _tracker.createInstance<ClassKeyContext>(_ctx, getState());
  enterRule(_localctx, 288, cpp::RuleClassKey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1781);
    _la = _input->LA(1);
    if (!(_la == cpp::Class

    || _la == cpp::Struct)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberSpecificationContext ------------------------------------------------------------------

cpp::MemberSpecificationContext::MemberSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::AccessSpecifierContext *> cpp::MemberSpecificationContext::accessSpecifier() {
  return getRuleContexts<cpp::AccessSpecifierContext>();
}

cpp::AccessSpecifierContext* cpp::MemberSpecificationContext::accessSpecifier(size_t i) {
  return getRuleContext<cpp::AccessSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> cpp::MemberSpecificationContext::Colon() {
  return getTokens(cpp::Colon);
}

tree::TerminalNode* cpp::MemberSpecificationContext::Colon(size_t i) {
  return getToken(cpp::Colon, i);
}

std::vector<cpp::MemberdeclarationContext *> cpp::MemberSpecificationContext::memberdeclaration() {
  return getRuleContexts<cpp::MemberdeclarationContext>();
}

cpp::MemberdeclarationContext* cpp::MemberSpecificationContext::memberdeclaration(size_t i) {
  return getRuleContext<cpp::MemberdeclarationContext>(i);
}


size_t cpp::MemberSpecificationContext::getRuleIndex() const {
  return cpp::RuleMemberSpecification;
}


cpp::MemberSpecificationContext* cpp::memberSpecification() {
  MemberSpecificationContext *_localctx = _tracker.createInstance<MemberSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 290, cpp::RuleMemberSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1789); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1789);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case cpp::Alignas:
        case cpp::Auto:
        case cpp::Bool:
        case cpp::Char:
        case cpp::Char16:
        case cpp::Char32:
        case cpp::Class:
        case cpp::Const:
        case cpp::Constexpr:
        case cpp::Decltype:
        case cpp::Double:
        case cpp::Enum:
        case cpp::Explicit:
        case cpp::Extern:
        case cpp::Float:
        case cpp::Friend:
        case cpp::Inline:
        case cpp::Int:
        case cpp::Long:
        case cpp::Mutable:
        case cpp::Operator:
        case cpp::Register:
        case cpp::Short:
        case cpp::Signed:
        case cpp::Static:
        case cpp::Static_assert:
        case cpp::Struct:
        case cpp::Template:
        case cpp::Thread_local:
        case cpp::Typedef:
        case cpp::Typename_:
        case cpp::Union:
        case cpp::Unsigned:
        case cpp::Using:
        case cpp::Virtual:
        case cpp::Void:
        case cpp::Volatile:
        case cpp::Wchar:
        case cpp::LeftParen:
        case cpp::LeftBracket:
        case cpp::Star:
        case cpp::And:
        case cpp::Tilde:
        case cpp::AndAnd:
        case cpp::Colon:
        case cpp::Doublecolon:
        case cpp::Semi:
        case cpp::Ellipsis:
        case cpp::Identifier:
        case cpp::DocBlockComment:
        case cpp::DocLineComment: {
          setState(1783);
          dynamic_cast<MemberSpecificationContext *>(_localctx)->md = memberdeclaration();

                  _localctx->resultDocStream << dynamic_cast<MemberSpecificationContext *>(_localctx)->md->resultDocText;
              
          break;
        }

        case cpp::Private:
        case cpp::Protected:
        case cpp::Public: {
          setState(1786);
          accessSpecifier();
          setState(1787);
          match(cpp::Colon);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1791); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::Alignas)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Constexpr)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Explicit)
      | (1ULL << cpp::Extern)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Friend)
      | (1ULL << cpp::Inline)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::Mutable)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Private)
      | (1ULL << cpp::Protected)
      | (1ULL << cpp::Public)
      | (1ULL << cpp::Register)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (cpp::Static_assert - 64))
      | (1ULL << (cpp::Struct - 64))
      | (1ULL << (cpp::Template - 64))
      | (1ULL << (cpp::Thread_local - 64))
      | (1ULL << (cpp::Typedef - 64))
      | (1ULL << (cpp::Typename_ - 64))
      | (1ULL << (cpp::Union - 64))
      | (1ULL << (cpp::Unsigned - 64))
      | (1ULL << (cpp::Using - 64))
      | (1ULL << (cpp::Virtual - 64))
      | (1ULL << (cpp::Void - 64))
      | (1ULL << (cpp::Volatile - 64))
      | (1ULL << (cpp::Wchar - 64))
      | (1ULL << (cpp::LeftParen - 64))
      | (1ULL << (cpp::LeftBracket - 64))
      | (1ULL << (cpp::Star - 64))
      | (1ULL << (cpp::And - 64))
      | (1ULL << (cpp::Tilde - 64))
      | (1ULL << (cpp::AndAnd - 64))
      | (1ULL << (cpp::Colon - 64))
      | (1ULL << (cpp::Doublecolon - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (cpp::Semi - 128))
      | (1ULL << (cpp::Ellipsis - 128))
      | (1ULL << (cpp::Identifier - 128))
      | (1ULL << (cpp::DocBlockComment - 128))
      | (1ULL << (cpp::DocLineComment - 128)))) != 0));

            dynamic_cast<MemberSpecificationContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclarationContext ------------------------------------------------------------------

cpp::MemberdeclarationContext::MemberdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::MemberdeclarationContext::Semi() {
  return getToken(cpp::Semi, 0);
}

cpp::UsingDeclarationContext* cpp::MemberdeclarationContext::usingDeclaration() {
  return getRuleContext<cpp::UsingDeclarationContext>(0);
}

cpp::StaticAssertDeclarationContext* cpp::MemberdeclarationContext::staticAssertDeclaration() {
  return getRuleContext<cpp::StaticAssertDeclarationContext>(0);
}

cpp::TemplateDeclarationContext* cpp::MemberdeclarationContext::templateDeclaration() {
  return getRuleContext<cpp::TemplateDeclarationContext>(0);
}

cpp::AliasDeclarationContext* cpp::MemberdeclarationContext::aliasDeclaration() {
  return getRuleContext<cpp::AliasDeclarationContext>(0);
}

cpp::EmptyDeclaration_Context* cpp::MemberdeclarationContext::emptyDeclaration_() {
  return getRuleContext<cpp::EmptyDeclaration_Context>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::MemberdeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::DeclSpecifierSeqContext* cpp::MemberdeclarationContext::declSpecifierSeq() {
  return getRuleContext<cpp::DeclSpecifierSeqContext>(0);
}

cpp::MemberDeclaratorListContext* cpp::MemberdeclarationContext::memberDeclaratorList() {
  return getRuleContext<cpp::MemberDeclaratorListContext>(0);
}

cpp::FunctionDefinitionContext* cpp::MemberdeclarationContext::functionDefinition() {
  return getRuleContext<cpp::FunctionDefinitionContext>(0);
}


size_t cpp::MemberdeclarationContext::getRuleIndex() const {
  return cpp::RuleMemberdeclaration;
}


cpp::MemberdeclarationContext* cpp::memberdeclaration() {
  MemberdeclarationContext *_localctx = _tracker.createInstance<MemberdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 292, cpp::RuleMemberdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1813);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 239, _ctx)) {
    case 1: {
      setState(1796);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 236, _ctx)) {
      case 1: {
        setState(1795);
        attributeSpecifierSeq();
        break;
      }

      }
      setState(1799);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 237, _ctx)) {
      case 1: {
        setState(1798);
        declSpecifierSeq();
        break;
      }

      }
      setState(1802);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << cpp::Alignas)
        | (1ULL << cpp::Decltype)
        | (1ULL << cpp::Operator))) != 0) || ((((_la - 85) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 85)) & ((1ULL << (cpp::LeftParen - 85))
        | (1ULL << (cpp::LeftBracket - 85))
        | (1ULL << (cpp::Star - 85))
        | (1ULL << (cpp::And - 85))
        | (1ULL << (cpp::Tilde - 85))
        | (1ULL << (cpp::AndAnd - 85))
        | (1ULL << (cpp::Colon - 85))
        | (1ULL << (cpp::Doublecolon - 85))
        | (1ULL << (cpp::Ellipsis - 85))
        | (1ULL << (cpp::Identifier - 85)))) != 0)) {
        setState(1801);
        memberDeclaratorList();
      }
      setState(1804);
      match(cpp::Semi);
      break;
    }

    case 2: {
      setState(1805);
      dynamic_cast<MemberdeclarationContext *>(_localctx)->fd = functionDefinition();

                  _localctx->resultDocStream << dynamic_cast<MemberdeclarationContext *>(_localctx)->fd->resultDocText;
              
      break;
    }

    case 3: {
      setState(1808);
      usingDeclaration();
      break;
    }

    case 4: {
      setState(1809);
      staticAssertDeclaration();
      break;
    }

    case 5: {
      setState(1810);
      templateDeclaration();
      break;
    }

    case 6: {
      setState(1811);
      aliasDeclaration();
      break;
    }

    case 7: {
      setState(1812);
      emptyDeclaration_();
      break;
    }

    }

            dynamic_cast<MemberdeclarationContext *>(_localctx)->resultDocText =  _localctx->resultDocStream.str();
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberDeclaratorListContext ------------------------------------------------------------------

cpp::MemberDeclaratorListContext::MemberDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::MemberDeclaratorContext *> cpp::MemberDeclaratorListContext::memberDeclarator() {
  return getRuleContexts<cpp::MemberDeclaratorContext>();
}

cpp::MemberDeclaratorContext* cpp::MemberDeclaratorListContext::memberDeclarator(size_t i) {
  return getRuleContext<cpp::MemberDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> cpp::MemberDeclaratorListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::MemberDeclaratorListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::MemberDeclaratorListContext::getRuleIndex() const {
  return cpp::RuleMemberDeclaratorList;
}


cpp::MemberDeclaratorListContext* cpp::memberDeclaratorList() {
  MemberDeclaratorListContext *_localctx = _tracker.createInstance<MemberDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 294, cpp::RuleMemberDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1817);
    memberDeclarator();
    setState(1822);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(1818);
      match(cpp::Comma);
      setState(1819);
      memberDeclarator();
      setState(1824);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberDeclaratorContext ------------------------------------------------------------------

cpp::MemberDeclaratorContext::MemberDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::DeclaratorContext* cpp::MemberDeclaratorContext::declarator() {
  return getRuleContext<cpp::DeclaratorContext>(0);
}

cpp::VirtualSpecifierSeqContext* cpp::MemberDeclaratorContext::virtualSpecifierSeq() {
  return getRuleContext<cpp::VirtualSpecifierSeqContext>(0);
}

cpp::PureSpecifierContext* cpp::MemberDeclaratorContext::pureSpecifier() {
  return getRuleContext<cpp::PureSpecifierContext>(0);
}

cpp::BraceOrEqualInitializerContext* cpp::MemberDeclaratorContext::braceOrEqualInitializer() {
  return getRuleContext<cpp::BraceOrEqualInitializerContext>(0);
}

tree::TerminalNode* cpp::MemberDeclaratorContext::Colon() {
  return getToken(cpp::Colon, 0);
}

cpp::ConstantExpressionContext* cpp::MemberDeclaratorContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}

tree::TerminalNode* cpp::MemberDeclaratorContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::AttributeSpecifierSeqContext* cpp::MemberDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::MemberDeclaratorContext::getRuleIndex() const {
  return cpp::RuleMemberDeclarator;
}


cpp::MemberDeclaratorContext* cpp::memberDeclarator() {
  MemberDeclaratorContext *_localctx = _tracker.createInstance<MemberDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 296, cpp::RuleMemberDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1843);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 244, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1825);
      declarator();
      setState(1832);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
      case 1: {
        setState(1826);
        virtualSpecifierSeq();
        break;
      }

      case 2: {
        setState(1827);
        pureSpecifier();
        break;
      }

      case 3: {
        setState(1828);
        virtualSpecifierSeq();
        setState(1829);
        pureSpecifier();
        break;
      }

      case 4: {
        setState(1831);
        braceOrEqualInitializer();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1834);
      declarator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1836);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Identifier) {
        setState(1835);
        match(cpp::Identifier);
      }
      setState(1839);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
        setState(1838);
        attributeSpecifierSeq();
      }
      setState(1841);
      match(cpp::Colon);
      setState(1842);
      constantExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtualSpecifierSeqContext ------------------------------------------------------------------

cpp::VirtualSpecifierSeqContext::VirtualSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::VirtualSpecifierContext *> cpp::VirtualSpecifierSeqContext::virtualSpecifier() {
  return getRuleContexts<cpp::VirtualSpecifierContext>();
}

cpp::VirtualSpecifierContext* cpp::VirtualSpecifierSeqContext::virtualSpecifier(size_t i) {
  return getRuleContext<cpp::VirtualSpecifierContext>(i);
}


size_t cpp::VirtualSpecifierSeqContext::getRuleIndex() const {
  return cpp::RuleVirtualSpecifierSeq;
}


cpp::VirtualSpecifierSeqContext* cpp::virtualSpecifierSeq() {
  VirtualSpecifierSeqContext *_localctx = _tracker.createInstance<VirtualSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 298, cpp::RuleVirtualSpecifierSeq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1846); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1845);
      virtualSpecifier();
      setState(1848); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == cpp::Final

    || _la == cpp::Override);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtualSpecifierContext ------------------------------------------------------------------

cpp::VirtualSpecifierContext::VirtualSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::VirtualSpecifierContext::Override() {
  return getToken(cpp::Override, 0);
}

tree::TerminalNode* cpp::VirtualSpecifierContext::Final() {
  return getToken(cpp::Final, 0);
}


size_t cpp::VirtualSpecifierContext::getRuleIndex() const {
  return cpp::RuleVirtualSpecifier;
}


cpp::VirtualSpecifierContext* cpp::virtualSpecifier() {
  VirtualSpecifierContext *_localctx = _tracker.createInstance<VirtualSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 300, cpp::RuleVirtualSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1850);
    _la = _input->LA(1);
    if (!(_la == cpp::Final

    || _la == cpp::Override)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PureSpecifierContext ------------------------------------------------------------------

cpp::PureSpecifierContext::PureSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::PureSpecifierContext::Assign() {
  return getToken(cpp::Assign, 0);
}

tree::TerminalNode* cpp::PureSpecifierContext::IntegerLiteral() {
  return getToken(cpp::IntegerLiteral, 0);
}


size_t cpp::PureSpecifierContext::getRuleIndex() const {
  return cpp::RulePureSpecifier;
}


cpp::PureSpecifierContext* cpp::pureSpecifier() {
  PureSpecifierContext *_localctx = _tracker.createInstance<PureSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 302, cpp::RulePureSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1852);
    match(cpp::Assign);
    setState(1853);
    match(cpp::IntegerLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseClauseContext ------------------------------------------------------------------

cpp::BaseClauseContext::BaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::BaseClauseContext::Colon() {
  return getToken(cpp::Colon, 0);
}

cpp::BaseSpecifierListContext* cpp::BaseClauseContext::baseSpecifierList() {
  return getRuleContext<cpp::BaseSpecifierListContext>(0);
}


size_t cpp::BaseClauseContext::getRuleIndex() const {
  return cpp::RuleBaseClause;
}


cpp::BaseClauseContext* cpp::baseClause() {
  BaseClauseContext *_localctx = _tracker.createInstance<BaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 304, cpp::RuleBaseClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1855);
    match(cpp::Colon);
    setState(1856);
    baseSpecifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseSpecifierListContext ------------------------------------------------------------------

cpp::BaseSpecifierListContext::BaseSpecifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::BaseSpecifierContext *> cpp::BaseSpecifierListContext::baseSpecifier() {
  return getRuleContexts<cpp::BaseSpecifierContext>();
}

cpp::BaseSpecifierContext* cpp::BaseSpecifierListContext::baseSpecifier(size_t i) {
  return getRuleContext<cpp::BaseSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> cpp::BaseSpecifierListContext::Ellipsis() {
  return getTokens(cpp::Ellipsis);
}

tree::TerminalNode* cpp::BaseSpecifierListContext::Ellipsis(size_t i) {
  return getToken(cpp::Ellipsis, i);
}

std::vector<tree::TerminalNode *> cpp::BaseSpecifierListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::BaseSpecifierListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::BaseSpecifierListContext::getRuleIndex() const {
  return cpp::RuleBaseSpecifierList;
}


cpp::BaseSpecifierListContext* cpp::baseSpecifierList() {
  BaseSpecifierListContext *_localctx = _tracker.createInstance<BaseSpecifierListContext>(_ctx, getState());
  enterRule(_localctx, 306, cpp::RuleBaseSpecifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1858);
    baseSpecifier();
    setState(1860);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(1859);
      match(cpp::Ellipsis);
    }
    setState(1869);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(1862);
      match(cpp::Comma);
      setState(1863);
      baseSpecifier();
      setState(1865);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Ellipsis) {
        setState(1864);
        match(cpp::Ellipsis);
      }
      setState(1871);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseSpecifierContext ------------------------------------------------------------------

cpp::BaseSpecifierContext::BaseSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::BaseTypeSpecifierContext* cpp::BaseSpecifierContext::baseTypeSpecifier() {
  return getRuleContext<cpp::BaseTypeSpecifierContext>(0);
}

tree::TerminalNode* cpp::BaseSpecifierContext::Virtual() {
  return getToken(cpp::Virtual, 0);
}

cpp::AccessSpecifierContext* cpp::BaseSpecifierContext::accessSpecifier() {
  return getRuleContext<cpp::AccessSpecifierContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::BaseSpecifierContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}


size_t cpp::BaseSpecifierContext::getRuleIndex() const {
  return cpp::RuleBaseSpecifier;
}


cpp::BaseSpecifierContext* cpp::baseSpecifier() {
  BaseSpecifierContext *_localctx = _tracker.createInstance<BaseSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 308, cpp::RuleBaseSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1873);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
      setState(1872);
      attributeSpecifierSeq();
    }
    setState(1887);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Decltype:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        setState(1875);
        baseTypeSpecifier();
        break;
      }

      case cpp::Virtual: {
        setState(1876);
        match(cpp::Virtual);
        setState(1878);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << cpp::Private)
          | (1ULL << cpp::Protected)
          | (1ULL << cpp::Public))) != 0)) {
          setState(1877);
          accessSpecifier();
        }
        setState(1880);
        baseTypeSpecifier();
        break;
      }

      case cpp::Private:
      case cpp::Protected:
      case cpp::Public: {
        setState(1881);
        accessSpecifier();
        setState(1883);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Virtual) {
          setState(1882);
          match(cpp::Virtual);
        }
        setState(1885);
        baseTypeSpecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrDeclTypeContext ------------------------------------------------------------------

cpp::ClassOrDeclTypeContext::ClassOrDeclTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ClassNameContext* cpp::ClassOrDeclTypeContext::className() {
  return getRuleContext<cpp::ClassNameContext>(0);
}

cpp::NestedNameSpecifierContext* cpp::ClassOrDeclTypeContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

cpp::DecltypeSpecifierContext* cpp::ClassOrDeclTypeContext::decltypeSpecifier() {
  return getRuleContext<cpp::DecltypeSpecifierContext>(0);
}


size_t cpp::ClassOrDeclTypeContext::getRuleIndex() const {
  return cpp::RuleClassOrDeclType;
}


cpp::ClassOrDeclTypeContext* cpp::classOrDeclType() {
  ClassOrDeclTypeContext *_localctx = _tracker.createInstance<ClassOrDeclTypeContext>(_ctx, getState());
  enterRule(_localctx, 310, cpp::RuleClassOrDeclType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1894);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 254, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1890);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 253, _ctx)) {
      case 1: {
        setState(1889);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1892);
      className();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1893);
      decltypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeSpecifierContext ------------------------------------------------------------------

cpp::BaseTypeSpecifierContext::BaseTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ClassOrDeclTypeContext* cpp::BaseTypeSpecifierContext::classOrDeclType() {
  return getRuleContext<cpp::ClassOrDeclTypeContext>(0);
}


size_t cpp::BaseTypeSpecifierContext::getRuleIndex() const {
  return cpp::RuleBaseTypeSpecifier;
}


cpp::BaseTypeSpecifierContext* cpp::baseTypeSpecifier() {
  BaseTypeSpecifierContext *_localctx = _tracker.createInstance<BaseTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 312, cpp::RuleBaseTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1896);
    classOrDeclType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessSpecifierContext ------------------------------------------------------------------

cpp::AccessSpecifierContext::AccessSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::AccessSpecifierContext::Private() {
  return getToken(cpp::Private, 0);
}

tree::TerminalNode* cpp::AccessSpecifierContext::Protected() {
  return getToken(cpp::Protected, 0);
}

tree::TerminalNode* cpp::AccessSpecifierContext::Public() {
  return getToken(cpp::Public, 0);
}


size_t cpp::AccessSpecifierContext::getRuleIndex() const {
  return cpp::RuleAccessSpecifier;
}


cpp::AccessSpecifierContext* cpp::accessSpecifier() {
  AccessSpecifierContext *_localctx = _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 314, cpp::RuleAccessSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1898);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::Private)
      | (1ULL << cpp::Protected)
      | (1ULL << cpp::Public))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionFunctionIdContext ------------------------------------------------------------------

cpp::ConversionFunctionIdContext::ConversionFunctionIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ConversionFunctionIdContext::Operator() {
  return getToken(cpp::Operator, 0);
}

cpp::ConversionTypeIdContext* cpp::ConversionFunctionIdContext::conversionTypeId() {
  return getRuleContext<cpp::ConversionTypeIdContext>(0);
}


size_t cpp::ConversionFunctionIdContext::getRuleIndex() const {
  return cpp::RuleConversionFunctionId;
}


cpp::ConversionFunctionIdContext* cpp::conversionFunctionId() {
  ConversionFunctionIdContext *_localctx = _tracker.createInstance<ConversionFunctionIdContext>(_ctx, getState());
  enterRule(_localctx, 316, cpp::RuleConversionFunctionId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1900);
    match(cpp::Operator);
    setState(1901);
    conversionTypeId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionTypeIdContext ------------------------------------------------------------------

cpp::ConversionTypeIdContext::ConversionTypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TypeSpecifierSeqContext* cpp::ConversionTypeIdContext::typeSpecifierSeq() {
  return getRuleContext<cpp::TypeSpecifierSeqContext>(0);
}

cpp::ConversionDeclaratorContext* cpp::ConversionTypeIdContext::conversionDeclarator() {
  return getRuleContext<cpp::ConversionDeclaratorContext>(0);
}


size_t cpp::ConversionTypeIdContext::getRuleIndex() const {
  return cpp::RuleConversionTypeId;
}


cpp::ConversionTypeIdContext* cpp::conversionTypeId() {
  ConversionTypeIdContext *_localctx = _tracker.createInstance<ConversionTypeIdContext>(_ctx, getState());
  enterRule(_localctx, 318, cpp::RuleConversionTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1903);
    typeSpecifierSeq();
    setState(1905);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 255, _ctx)) {
    case 1: {
      setState(1904);
      conversionDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionDeclaratorContext ------------------------------------------------------------------

cpp::ConversionDeclaratorContext::ConversionDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::PointerOperatorContext* cpp::ConversionDeclaratorContext::pointerOperator() {
  return getRuleContext<cpp::PointerOperatorContext>(0);
}

cpp::ConversionDeclaratorContext* cpp::ConversionDeclaratorContext::conversionDeclarator() {
  return getRuleContext<cpp::ConversionDeclaratorContext>(0);
}


size_t cpp::ConversionDeclaratorContext::getRuleIndex() const {
  return cpp::RuleConversionDeclarator;
}


cpp::ConversionDeclaratorContext* cpp::conversionDeclarator() {
  ConversionDeclaratorContext *_localctx = _tracker.createInstance<ConversionDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 320, cpp::RuleConversionDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1907);
    pointerOperator();
    setState(1909);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx)) {
    case 1: {
      setState(1908);
      conversionDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorInitializerContext ------------------------------------------------------------------

cpp::ConstructorInitializerContext::ConstructorInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ConstructorInitializerContext::Colon() {
  return getToken(cpp::Colon, 0);
}

cpp::MemInitializerListContext* cpp::ConstructorInitializerContext::memInitializerList() {
  return getRuleContext<cpp::MemInitializerListContext>(0);
}


size_t cpp::ConstructorInitializerContext::getRuleIndex() const {
  return cpp::RuleConstructorInitializer;
}


cpp::ConstructorInitializerContext* cpp::constructorInitializer() {
  ConstructorInitializerContext *_localctx = _tracker.createInstance<ConstructorInitializerContext>(_ctx, getState());
  enterRule(_localctx, 322, cpp::RuleConstructorInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1911);
    match(cpp::Colon);
    setState(1912);
    memInitializerList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemInitializerListContext ------------------------------------------------------------------

cpp::MemInitializerListContext::MemInitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::MemInitializerContext *> cpp::MemInitializerListContext::memInitializer() {
  return getRuleContexts<cpp::MemInitializerContext>();
}

cpp::MemInitializerContext* cpp::MemInitializerListContext::memInitializer(size_t i) {
  return getRuleContext<cpp::MemInitializerContext>(i);
}

std::vector<tree::TerminalNode *> cpp::MemInitializerListContext::Ellipsis() {
  return getTokens(cpp::Ellipsis);
}

tree::TerminalNode* cpp::MemInitializerListContext::Ellipsis(size_t i) {
  return getToken(cpp::Ellipsis, i);
}

std::vector<tree::TerminalNode *> cpp::MemInitializerListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::MemInitializerListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::MemInitializerListContext::getRuleIndex() const {
  return cpp::RuleMemInitializerList;
}


cpp::MemInitializerListContext* cpp::memInitializerList() {
  MemInitializerListContext *_localctx = _tracker.createInstance<MemInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 324, cpp::RuleMemInitializerList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1914);
    memInitializer();
    setState(1916);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(1915);
      match(cpp::Ellipsis);
    }
    setState(1925);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(1918);
      match(cpp::Comma);
      setState(1919);
      memInitializer();
      setState(1921);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Ellipsis) {
        setState(1920);
        match(cpp::Ellipsis);
      }
      setState(1927);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemInitializerContext ------------------------------------------------------------------

cpp::MemInitializerContext::MemInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::MeminitializeridContext* cpp::MemInitializerContext::meminitializerid() {
  return getRuleContext<cpp::MeminitializeridContext>(0);
}

tree::TerminalNode* cpp::MemInitializerContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::MemInitializerContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::BracedInitListContext* cpp::MemInitializerContext::bracedInitList() {
  return getRuleContext<cpp::BracedInitListContext>(0);
}

cpp::ExpressionListContext* cpp::MemInitializerContext::expressionList() {
  return getRuleContext<cpp::ExpressionListContext>(0);
}


size_t cpp::MemInitializerContext::getRuleIndex() const {
  return cpp::RuleMemInitializer;
}


cpp::MemInitializerContext* cpp::memInitializer() {
  MemInitializerContext *_localctx = _tracker.createInstance<MemInitializerContext>(_ctx, getState());
  enterRule(_localctx, 326, cpp::RuleMemInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1928);
    meminitializerid();
    setState(1935);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::LeftParen: {
        setState(1929);
        match(cpp::LeftParen);
        setState(1931);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
          | (1ULL << cpp::CharacterLiteral)
          | (1ULL << cpp::FloatingLiteral)
          | (1ULL << cpp::StringLiteral)
          | (1ULL << cpp::BooleanLiteral)
          | (1ULL << cpp::PointerLiteral)
          | (1ULL << cpp::UserDefinedLiteral)
          | (1ULL << cpp::Alignof)
          | (1ULL << cpp::Auto)
          | (1ULL << cpp::Bool)
          | (1ULL << cpp::Char)
          | (1ULL << cpp::Char16)
          | (1ULL << cpp::Char32)
          | (1ULL << cpp::Const_cast)
          | (1ULL << cpp::Decltype)
          | (1ULL << cpp::Delete)
          | (1ULL << cpp::Double)
          | (1ULL << cpp::Dynamic_cast)
          | (1ULL << cpp::Float)
          | (1ULL << cpp::Int)
          | (1ULL << cpp::Long)
          | (1ULL << cpp::New)
          | (1ULL << cpp::Noexcept)
          | (1ULL << cpp::Operator)
          | (1ULL << cpp::Reinterpret_cast)
          | (1ULL << cpp::Short)
          | (1ULL << cpp::Signed)
          | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
          | (1ULL << (cpp::This - 65))
          | (1ULL << (cpp::Throw - 65))
          | (1ULL << (cpp::Typeid_ - 65))
          | (1ULL << (cpp::Typename_ - 65))
          | (1ULL << (cpp::Unsigned - 65))
          | (1ULL << (cpp::Void - 65))
          | (1ULL << (cpp::Wchar - 65))
          | (1ULL << (cpp::LeftParen - 65))
          | (1ULL << (cpp::LeftBracket - 65))
          | (1ULL << (cpp::LeftBrace - 65))
          | (1ULL << (cpp::Plus - 65))
          | (1ULL << (cpp::Minus - 65))
          | (1ULL << (cpp::Star - 65))
          | (1ULL << (cpp::And - 65))
          | (1ULL << (cpp::Or - 65))
          | (1ULL << (cpp::Tilde - 65))
          | (1ULL << (cpp::Not - 65))
          | (1ULL << (cpp::PlusPlus - 65))
          | (1ULL << (cpp::MinusMinus - 65))
          | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
          setState(1930);
          expressionList();
        }
        setState(1933);
        match(cpp::RightParen);
        break;
      }

      case cpp::LeftBrace: {
        setState(1934);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializeridContext ------------------------------------------------------------------

cpp::MeminitializeridContext::MeminitializeridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::ClassOrDeclTypeContext* cpp::MeminitializeridContext::classOrDeclType() {
  return getRuleContext<cpp::ClassOrDeclTypeContext>(0);
}

tree::TerminalNode* cpp::MeminitializeridContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::MeminitializeridContext::getRuleIndex() const {
  return cpp::RuleMeminitializerid;
}


cpp::MeminitializeridContext* cpp::meminitializerid() {
  MeminitializeridContext *_localctx = _tracker.createInstance<MeminitializeridContext>(_ctx, getState());
  enterRule(_localctx, 328, cpp::RuleMeminitializerid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1939);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1937);
      classOrDeclType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1938);
      match(cpp::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorFunctionIdContext ------------------------------------------------------------------

cpp::OperatorFunctionIdContext::OperatorFunctionIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::OperatorFunctionIdContext::Operator() {
  return getToken(cpp::Operator, 0);
}

cpp::TheOperatorContext* cpp::OperatorFunctionIdContext::theOperator() {
  return getRuleContext<cpp::TheOperatorContext>(0);
}


size_t cpp::OperatorFunctionIdContext::getRuleIndex() const {
  return cpp::RuleOperatorFunctionId;
}


cpp::OperatorFunctionIdContext* cpp::operatorFunctionId() {
  OperatorFunctionIdContext *_localctx = _tracker.createInstance<OperatorFunctionIdContext>(_ctx, getState());
  enterRule(_localctx, 330, cpp::RuleOperatorFunctionId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1941);
    match(cpp::Operator);
    setState(1942);
    theOperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralOperatorIdContext ------------------------------------------------------------------

cpp::LiteralOperatorIdContext::LiteralOperatorIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::LiteralOperatorIdContext::Operator() {
  return getToken(cpp::Operator, 0);
}

tree::TerminalNode* cpp::LiteralOperatorIdContext::StringLiteral() {
  return getToken(cpp::StringLiteral, 0);
}

tree::TerminalNode* cpp::LiteralOperatorIdContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

tree::TerminalNode* cpp::LiteralOperatorIdContext::UserDefinedStringLiteral() {
  return getToken(cpp::UserDefinedStringLiteral, 0);
}


size_t cpp::LiteralOperatorIdContext::getRuleIndex() const {
  return cpp::RuleLiteralOperatorId;
}


cpp::LiteralOperatorIdContext* cpp::literalOperatorId() {
  LiteralOperatorIdContext *_localctx = _tracker.createInstance<LiteralOperatorIdContext>(_ctx, getState());
  enterRule(_localctx, 332, cpp::RuleLiteralOperatorId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1944);
    match(cpp::Operator);
    setState(1948);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::StringLiteral: {
        setState(1945);
        match(cpp::StringLiteral);
        setState(1946);
        match(cpp::Identifier);
        break;
      }

      case cpp::UserDefinedStringLiteral: {
        setState(1947);
        match(cpp::UserDefinedStringLiteral);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateDeclarationContext ------------------------------------------------------------------

cpp::TemplateDeclarationContext::TemplateDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TemplateDeclarationContext::Template() {
  return getToken(cpp::Template, 0);
}

tree::TerminalNode* cpp::TemplateDeclarationContext::Less() {
  return getToken(cpp::Less, 0);
}

cpp::TemplateparameterListContext* cpp::TemplateDeclarationContext::templateparameterList() {
  return getRuleContext<cpp::TemplateparameterListContext>(0);
}

tree::TerminalNode* cpp::TemplateDeclarationContext::Greater() {
  return getToken(cpp::Greater, 0);
}

cpp::DeclarationContext* cpp::TemplateDeclarationContext::declaration() {
  return getRuleContext<cpp::DeclarationContext>(0);
}


size_t cpp::TemplateDeclarationContext::getRuleIndex() const {
  return cpp::RuleTemplateDeclaration;
}


cpp::TemplateDeclarationContext* cpp::templateDeclaration() {
  TemplateDeclarationContext *_localctx = _tracker.createInstance<TemplateDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 334, cpp::RuleTemplateDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1950);
    match(cpp::Template);
    setState(1951);
    match(cpp::Less);
    setState(1952);
    templateparameterList();
    setState(1953);
    match(cpp::Greater);
    setState(1954);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateparameterListContext ------------------------------------------------------------------

cpp::TemplateparameterListContext::TemplateparameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::TemplateParameterContext *> cpp::TemplateparameterListContext::templateParameter() {
  return getRuleContexts<cpp::TemplateParameterContext>();
}

cpp::TemplateParameterContext* cpp::TemplateparameterListContext::templateParameter(size_t i) {
  return getRuleContext<cpp::TemplateParameterContext>(i);
}

std::vector<tree::TerminalNode *> cpp::TemplateparameterListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::TemplateparameterListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::TemplateparameterListContext::getRuleIndex() const {
  return cpp::RuleTemplateparameterList;
}


cpp::TemplateparameterListContext* cpp::templateparameterList() {
  TemplateparameterListContext *_localctx = _tracker.createInstance<TemplateparameterListContext>(_ctx, getState());
  enterRule(_localctx, 336, cpp::RuleTemplateparameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1956);
    templateParameter();
    setState(1961);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(1957);
      match(cpp::Comma);
      setState(1958);
      templateParameter();
      setState(1963);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateParameterContext ------------------------------------------------------------------

cpp::TemplateParameterContext::TemplateParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TypeParameterContext* cpp::TemplateParameterContext::typeParameter() {
  return getRuleContext<cpp::TypeParameterContext>(0);
}

cpp::ParameterDeclarationContext* cpp::TemplateParameterContext::parameterDeclaration() {
  return getRuleContext<cpp::ParameterDeclarationContext>(0);
}


size_t cpp::TemplateParameterContext::getRuleIndex() const {
  return cpp::RuleTemplateParameter;
}


cpp::TemplateParameterContext* cpp::templateParameter() {
  TemplateParameterContext *_localctx = _tracker.createInstance<TemplateParameterContext>(_ctx, getState());
  enterRule(_localctx, 338, cpp::RuleTemplateParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1966);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 265, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1964);
      typeParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1965);
      parameterDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

cpp::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TypeParameterContext::Class() {
  return getToken(cpp::Class, 0);
}

tree::TerminalNode* cpp::TypeParameterContext::Typename_() {
  return getToken(cpp::Typename_, 0);
}

tree::TerminalNode* cpp::TypeParameterContext::Assign() {
  return getToken(cpp::Assign, 0);
}

cpp::TheTypeIdContext* cpp::TypeParameterContext::theTypeId() {
  return getRuleContext<cpp::TheTypeIdContext>(0);
}

tree::TerminalNode* cpp::TypeParameterContext::Template() {
  return getToken(cpp::Template, 0);
}

tree::TerminalNode* cpp::TypeParameterContext::Less() {
  return getToken(cpp::Less, 0);
}

cpp::TemplateparameterListContext* cpp::TypeParameterContext::templateparameterList() {
  return getRuleContext<cpp::TemplateparameterListContext>(0);
}

tree::TerminalNode* cpp::TypeParameterContext::Greater() {
  return getToken(cpp::Greater, 0);
}

tree::TerminalNode* cpp::TypeParameterContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}

tree::TerminalNode* cpp::TypeParameterContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::TypeParameterContext::getRuleIndex() const {
  return cpp::RuleTypeParameter;
}


cpp::TypeParameterContext* cpp::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 340, cpp::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1977);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Class:
      case cpp::Template: {
        setState(1973);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Template) {
          setState(1968);
          match(cpp::Template);
          setState(1969);
          match(cpp::Less);
          setState(1970);
          templateparameterList();
          setState(1971);
          match(cpp::Greater);
        }
        setState(1975);
        match(cpp::Class);
        break;
      }

      case cpp::Typename_: {
        setState(1976);
        match(cpp::Typename_);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1990);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx)) {
    case 1: {
      setState(1980);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Ellipsis) {
        setState(1979);
        match(cpp::Ellipsis);
      }
      setState(1983);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Identifier) {
        setState(1982);
        match(cpp::Identifier);
      }
      break;
    }

    case 2: {
      setState(1986);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Identifier) {
        setState(1985);
        match(cpp::Identifier);
      }
      setState(1988);
      match(cpp::Assign);
      setState(1989);
      theTypeId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTemplateIdContext ------------------------------------------------------------------

cpp::SimpleTemplateIdContext::SimpleTemplateIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TemplateNameContext* cpp::SimpleTemplateIdContext::templateName() {
  return getRuleContext<cpp::TemplateNameContext>(0);
}

tree::TerminalNode* cpp::SimpleTemplateIdContext::Less() {
  return getToken(cpp::Less, 0);
}

tree::TerminalNode* cpp::SimpleTemplateIdContext::Greater() {
  return getToken(cpp::Greater, 0);
}

cpp::TemplateArgumentListContext* cpp::SimpleTemplateIdContext::templateArgumentList() {
  return getRuleContext<cpp::TemplateArgumentListContext>(0);
}


size_t cpp::SimpleTemplateIdContext::getRuleIndex() const {
  return cpp::RuleSimpleTemplateId;
}


cpp::SimpleTemplateIdContext* cpp::simpleTemplateId() {
  SimpleTemplateIdContext *_localctx = _tracker.createInstance<SimpleTemplateIdContext>(_ctx, getState());
  enterRule(_localctx, 342, cpp::RuleSimpleTemplateId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1992);
    templateName();
    setState(1993);
    match(cpp::Less);
    setState(1995);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral)
      | (1ULL << cpp::Alignof)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Class)
      | (1ULL << cpp::Const)
      | (1ULL << cpp::Const_cast)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Delete)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Dynamic_cast)
      | (1ULL << cpp::Enum)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::New)
      | (1ULL << cpp::Noexcept)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Reinterpret_cast)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
      | (1ULL << (cpp::Struct - 65))
      | (1ULL << (cpp::This - 65))
      | (1ULL << (cpp::Typeid_ - 65))
      | (1ULL << (cpp::Typename_ - 65))
      | (1ULL << (cpp::Union - 65))
      | (1ULL << (cpp::Unsigned - 65))
      | (1ULL << (cpp::Void - 65))
      | (1ULL << (cpp::Volatile - 65))
      | (1ULL << (cpp::Wchar - 65))
      | (1ULL << (cpp::LeftParen - 65))
      | (1ULL << (cpp::LeftBracket - 65))
      | (1ULL << (cpp::Plus - 65))
      | (1ULL << (cpp::Minus - 65))
      | (1ULL << (cpp::Star - 65))
      | (1ULL << (cpp::And - 65))
      | (1ULL << (cpp::Or - 65))
      | (1ULL << (cpp::Tilde - 65))
      | (1ULL << (cpp::Not - 65))
      | (1ULL << (cpp::PlusPlus - 65))
      | (1ULL << (cpp::MinusMinus - 65))
      | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
      setState(1994);
      templateArgumentList();
    }
    setState(1997);
    match(cpp::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateIdContext ------------------------------------------------------------------

cpp::TemplateIdContext::TemplateIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::SimpleTemplateIdContext* cpp::TemplateIdContext::simpleTemplateId() {
  return getRuleContext<cpp::SimpleTemplateIdContext>(0);
}

tree::TerminalNode* cpp::TemplateIdContext::Less() {
  return getToken(cpp::Less, 0);
}

tree::TerminalNode* cpp::TemplateIdContext::Greater() {
  return getToken(cpp::Greater, 0);
}

cpp::OperatorFunctionIdContext* cpp::TemplateIdContext::operatorFunctionId() {
  return getRuleContext<cpp::OperatorFunctionIdContext>(0);
}

cpp::LiteralOperatorIdContext* cpp::TemplateIdContext::literalOperatorId() {
  return getRuleContext<cpp::LiteralOperatorIdContext>(0);
}

cpp::TemplateArgumentListContext* cpp::TemplateIdContext::templateArgumentList() {
  return getRuleContext<cpp::TemplateArgumentListContext>(0);
}


size_t cpp::TemplateIdContext::getRuleIndex() const {
  return cpp::RuleTemplateId;
}


cpp::TemplateIdContext* cpp::templateId() {
  TemplateIdContext *_localctx = _tracker.createInstance<TemplateIdContext>(_ctx, getState());
  enterRule(_localctx, 344, cpp::RuleTemplateId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2010);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1999);
        simpleTemplateId();
        break;
      }

      case cpp::Operator: {
        enterOuterAlt(_localctx, 2);
        setState(2002);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx)) {
        case 1: {
          setState(2000);
          operatorFunctionId();
          break;
        }

        case 2: {
          setState(2001);
          literalOperatorId();
          break;
        }

        }
        setState(2004);
        match(cpp::Less);
        setState(2006);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
          | (1ULL << cpp::CharacterLiteral)
          | (1ULL << cpp::FloatingLiteral)
          | (1ULL << cpp::StringLiteral)
          | (1ULL << cpp::BooleanLiteral)
          | (1ULL << cpp::PointerLiteral)
          | (1ULL << cpp::UserDefinedLiteral)
          | (1ULL << cpp::Alignof)
          | (1ULL << cpp::Auto)
          | (1ULL << cpp::Bool)
          | (1ULL << cpp::Char)
          | (1ULL << cpp::Char16)
          | (1ULL << cpp::Char32)
          | (1ULL << cpp::Class)
          | (1ULL << cpp::Const)
          | (1ULL << cpp::Const_cast)
          | (1ULL << cpp::Decltype)
          | (1ULL << cpp::Delete)
          | (1ULL << cpp::Double)
          | (1ULL << cpp::Dynamic_cast)
          | (1ULL << cpp::Enum)
          | (1ULL << cpp::Float)
          | (1ULL << cpp::Int)
          | (1ULL << cpp::Long)
          | (1ULL << cpp::New)
          | (1ULL << cpp::Noexcept)
          | (1ULL << cpp::Operator)
          | (1ULL << cpp::Reinterpret_cast)
          | (1ULL << cpp::Short)
          | (1ULL << cpp::Signed)
          | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
          | (1ULL << (cpp::Struct - 65))
          | (1ULL << (cpp::This - 65))
          | (1ULL << (cpp::Typeid_ - 65))
          | (1ULL << (cpp::Typename_ - 65))
          | (1ULL << (cpp::Union - 65))
          | (1ULL << (cpp::Unsigned - 65))
          | (1ULL << (cpp::Void - 65))
          | (1ULL << (cpp::Volatile - 65))
          | (1ULL << (cpp::Wchar - 65))
          | (1ULL << (cpp::LeftParen - 65))
          | (1ULL << (cpp::LeftBracket - 65))
          | (1ULL << (cpp::Plus - 65))
          | (1ULL << (cpp::Minus - 65))
          | (1ULL << (cpp::Star - 65))
          | (1ULL << (cpp::And - 65))
          | (1ULL << (cpp::Or - 65))
          | (1ULL << (cpp::Tilde - 65))
          | (1ULL << (cpp::Not - 65))
          | (1ULL << (cpp::PlusPlus - 65))
          | (1ULL << (cpp::MinusMinus - 65))
          | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
          setState(2005);
          templateArgumentList();
        }
        setState(2008);
        match(cpp::Greater);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateNameContext ------------------------------------------------------------------

cpp::TemplateNameContext::TemplateNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TemplateNameContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}


size_t cpp::TemplateNameContext::getRuleIndex() const {
  return cpp::RuleTemplateName;
}


cpp::TemplateNameContext* cpp::templateName() {
  TemplateNameContext *_localctx = _tracker.createInstance<TemplateNameContext>(_ctx, getState());
  enterRule(_localctx, 346, cpp::RuleTemplateName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2012);
    match(cpp::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateArgumentListContext ------------------------------------------------------------------

cpp::TemplateArgumentListContext::TemplateArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::TemplateArgumentContext *> cpp::TemplateArgumentListContext::templateArgument() {
  return getRuleContexts<cpp::TemplateArgumentContext>();
}

cpp::TemplateArgumentContext* cpp::TemplateArgumentListContext::templateArgument(size_t i) {
  return getRuleContext<cpp::TemplateArgumentContext>(i);
}

std::vector<tree::TerminalNode *> cpp::TemplateArgumentListContext::Ellipsis() {
  return getTokens(cpp::Ellipsis);
}

tree::TerminalNode* cpp::TemplateArgumentListContext::Ellipsis(size_t i) {
  return getToken(cpp::Ellipsis, i);
}

std::vector<tree::TerminalNode *> cpp::TemplateArgumentListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::TemplateArgumentListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::TemplateArgumentListContext::getRuleIndex() const {
  return cpp::RuleTemplateArgumentList;
}


cpp::TemplateArgumentListContext* cpp::templateArgumentList() {
  TemplateArgumentListContext *_localctx = _tracker.createInstance<TemplateArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 348, cpp::RuleTemplateArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2014);
    templateArgument();
    setState(2016);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(2015);
      match(cpp::Ellipsis);
    }
    setState(2025);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(2018);
      match(cpp::Comma);
      setState(2019);
      templateArgument();
      setState(2021);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Ellipsis) {
        setState(2020);
        match(cpp::Ellipsis);
      }
      setState(2027);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateArgumentContext ------------------------------------------------------------------

cpp::TemplateArgumentContext::TemplateArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TheTypeIdContext* cpp::TemplateArgumentContext::theTypeId() {
  return getRuleContext<cpp::TheTypeIdContext>(0);
}

cpp::ConstantExpressionContext* cpp::TemplateArgumentContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}

cpp::IdExpressionContext* cpp::TemplateArgumentContext::idExpression() {
  return getRuleContext<cpp::IdExpressionContext>(0);
}


size_t cpp::TemplateArgumentContext::getRuleIndex() const {
  return cpp::RuleTemplateArgument;
}


cpp::TemplateArgumentContext* cpp::templateArgument() {
  TemplateArgumentContext *_localctx = _tracker.createInstance<TemplateArgumentContext>(_ctx, getState());
  enterRule(_localctx, 350, cpp::RuleTemplateArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2031);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2028);
      theTypeId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2029);
      constantExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2030);
      idExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameSpecifierContext ------------------------------------------------------------------

cpp::TypeNameSpecifierContext::TypeNameSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TypeNameSpecifierContext::Typename_() {
  return getToken(cpp::Typename_, 0);
}

cpp::NestedNameSpecifierContext* cpp::TypeNameSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<cpp::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* cpp::TypeNameSpecifierContext::Identifier() {
  return getToken(cpp::Identifier, 0);
}

cpp::SimpleTemplateIdContext* cpp::TypeNameSpecifierContext::simpleTemplateId() {
  return getRuleContext<cpp::SimpleTemplateIdContext>(0);
}

tree::TerminalNode* cpp::TypeNameSpecifierContext::Template() {
  return getToken(cpp::Template, 0);
}


size_t cpp::TypeNameSpecifierContext::getRuleIndex() const {
  return cpp::RuleTypeNameSpecifier;
}


cpp::TypeNameSpecifierContext* cpp::typeNameSpecifier() {
  TypeNameSpecifierContext *_localctx = _tracker.createInstance<TypeNameSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 352, cpp::RuleTypeNameSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2033);
    match(cpp::Typename_);
    setState(2034);
    nestedNameSpecifier(0);
    setState(2040);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 281, _ctx)) {
    case 1: {
      setState(2035);
      match(cpp::Identifier);
      break;
    }

    case 2: {
      setState(2037);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Template) {
        setState(2036);
        match(cpp::Template);
      }
      setState(2039);
      simpleTemplateId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitInstantiationContext ------------------------------------------------------------------

cpp::ExplicitInstantiationContext::ExplicitInstantiationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ExplicitInstantiationContext::Template() {
  return getToken(cpp::Template, 0);
}

cpp::DeclarationContext* cpp::ExplicitInstantiationContext::declaration() {
  return getRuleContext<cpp::DeclarationContext>(0);
}

tree::TerminalNode* cpp::ExplicitInstantiationContext::Extern() {
  return getToken(cpp::Extern, 0);
}


size_t cpp::ExplicitInstantiationContext::getRuleIndex() const {
  return cpp::RuleExplicitInstantiation;
}


cpp::ExplicitInstantiationContext* cpp::explicitInstantiation() {
  ExplicitInstantiationContext *_localctx = _tracker.createInstance<ExplicitInstantiationContext>(_ctx, getState());
  enterRule(_localctx, 354, cpp::RuleExplicitInstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2043);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Extern) {
      setState(2042);
      match(cpp::Extern);
    }
    setState(2045);
    match(cpp::Template);
    setState(2046);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitSpecializationContext ------------------------------------------------------------------

cpp::ExplicitSpecializationContext::ExplicitSpecializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ExplicitSpecializationContext::Template() {
  return getToken(cpp::Template, 0);
}

tree::TerminalNode* cpp::ExplicitSpecializationContext::Less() {
  return getToken(cpp::Less, 0);
}

tree::TerminalNode* cpp::ExplicitSpecializationContext::Greater() {
  return getToken(cpp::Greater, 0);
}

cpp::DeclarationContext* cpp::ExplicitSpecializationContext::declaration() {
  return getRuleContext<cpp::DeclarationContext>(0);
}


size_t cpp::ExplicitSpecializationContext::getRuleIndex() const {
  return cpp::RuleExplicitSpecialization;
}


cpp::ExplicitSpecializationContext* cpp::explicitSpecialization() {
  ExplicitSpecializationContext *_localctx = _tracker.createInstance<ExplicitSpecializationContext>(_ctx, getState());
  enterRule(_localctx, 356, cpp::RuleExplicitSpecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2048);
    match(cpp::Template);
    setState(2049);
    match(cpp::Less);
    setState(2050);
    match(cpp::Greater);
    setState(2051);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryBlockContext ------------------------------------------------------------------

cpp::TryBlockContext::TryBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TryBlockContext::Try() {
  return getToken(cpp::Try, 0);
}

cpp::CompoundStatementContext* cpp::TryBlockContext::compoundStatement() {
  return getRuleContext<cpp::CompoundStatementContext>(0);
}

cpp::HandlerSeqContext* cpp::TryBlockContext::handlerSeq() {
  return getRuleContext<cpp::HandlerSeqContext>(0);
}


size_t cpp::TryBlockContext::getRuleIndex() const {
  return cpp::RuleTryBlock;
}


cpp::TryBlockContext* cpp::tryBlock() {
  TryBlockContext *_localctx = _tracker.createInstance<TryBlockContext>(_ctx, getState());
  enterRule(_localctx, 358, cpp::RuleTryBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2053);
    match(cpp::Try);
    setState(2054);
    compoundStatement();
    setState(2055);
    handlerSeq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTryBlockContext ------------------------------------------------------------------

cpp::FunctionTryBlockContext::FunctionTryBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::FunctionTryBlockContext::Try() {
  return getToken(cpp::Try, 0);
}

cpp::CompoundStatementContext* cpp::FunctionTryBlockContext::compoundStatement() {
  return getRuleContext<cpp::CompoundStatementContext>(0);
}

cpp::HandlerSeqContext* cpp::FunctionTryBlockContext::handlerSeq() {
  return getRuleContext<cpp::HandlerSeqContext>(0);
}

cpp::ConstructorInitializerContext* cpp::FunctionTryBlockContext::constructorInitializer() {
  return getRuleContext<cpp::ConstructorInitializerContext>(0);
}


size_t cpp::FunctionTryBlockContext::getRuleIndex() const {
  return cpp::RuleFunctionTryBlock;
}


cpp::FunctionTryBlockContext* cpp::functionTryBlock() {
  FunctionTryBlockContext *_localctx = _tracker.createInstance<FunctionTryBlockContext>(_ctx, getState());
  enterRule(_localctx, 360, cpp::RuleFunctionTryBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2057);
    match(cpp::Try);
    setState(2059);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Colon) {
      setState(2058);
      constructorInitializer();
    }
    setState(2061);
    compoundStatement();
    setState(2062);
    handlerSeq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerSeqContext ------------------------------------------------------------------

cpp::HandlerSeqContext::HandlerSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::HandlerContext *> cpp::HandlerSeqContext::handler() {
  return getRuleContexts<cpp::HandlerContext>();
}

cpp::HandlerContext* cpp::HandlerSeqContext::handler(size_t i) {
  return getRuleContext<cpp::HandlerContext>(i);
}


size_t cpp::HandlerSeqContext::getRuleIndex() const {
  return cpp::RuleHandlerSeq;
}


cpp::HandlerSeqContext* cpp::handlerSeq() {
  HandlerSeqContext *_localctx = _tracker.createInstance<HandlerSeqContext>(_ctx, getState());
  enterRule(_localctx, 362, cpp::RuleHandlerSeq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2065); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(2064);
      handler();
      setState(2067); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == cpp::Catch);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerContext ------------------------------------------------------------------

cpp::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::HandlerContext::Catch() {
  return getToken(cpp::Catch, 0);
}

tree::TerminalNode* cpp::HandlerContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ExceptionDeclarationContext* cpp::HandlerContext::exceptionDeclaration() {
  return getRuleContext<cpp::ExceptionDeclarationContext>(0);
}

tree::TerminalNode* cpp::HandlerContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::CompoundStatementContext* cpp::HandlerContext::compoundStatement() {
  return getRuleContext<cpp::CompoundStatementContext>(0);
}


size_t cpp::HandlerContext::getRuleIndex() const {
  return cpp::RuleHandler;
}


cpp::HandlerContext* cpp::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 364, cpp::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2069);
    match(cpp::Catch);
    setState(2070);
    match(cpp::LeftParen);
    setState(2071);
    exceptionDeclaration();
    setState(2072);
    match(cpp::RightParen);
    setState(2073);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionDeclarationContext ------------------------------------------------------------------

cpp::ExceptionDeclarationContext::ExceptionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::TypeSpecifierSeqContext* cpp::ExceptionDeclarationContext::typeSpecifierSeq() {
  return getRuleContext<cpp::TypeSpecifierSeqContext>(0);
}

cpp::AttributeSpecifierSeqContext* cpp::ExceptionDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<cpp::AttributeSpecifierSeqContext>(0);
}

cpp::DeclaratorContext* cpp::ExceptionDeclarationContext::declarator() {
  return getRuleContext<cpp::DeclaratorContext>(0);
}

cpp::AbstractDeclaratorContext* cpp::ExceptionDeclarationContext::abstractDeclarator() {
  return getRuleContext<cpp::AbstractDeclaratorContext>(0);
}

tree::TerminalNode* cpp::ExceptionDeclarationContext::Ellipsis() {
  return getToken(cpp::Ellipsis, 0);
}


size_t cpp::ExceptionDeclarationContext::getRuleIndex() const {
  return cpp::RuleExceptionDeclaration;
}


cpp::ExceptionDeclarationContext* cpp::exceptionDeclaration() {
  ExceptionDeclarationContext *_localctx = _tracker.createInstance<ExceptionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 366, cpp::RuleExceptionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2084);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Alignas:
      case cpp::Auto:
      case cpp::Bool:
      case cpp::Char:
      case cpp::Char16:
      case cpp::Char32:
      case cpp::Class:
      case cpp::Const:
      case cpp::Decltype:
      case cpp::Double:
      case cpp::Enum:
      case cpp::Float:
      case cpp::Int:
      case cpp::Long:
      case cpp::Short:
      case cpp::Signed:
      case cpp::Struct:
      case cpp::Typename_:
      case cpp::Union:
      case cpp::Unsigned:
      case cpp::Void:
      case cpp::Volatile:
      case cpp::Wchar:
      case cpp::LeftBracket:
      case cpp::Doublecolon:
      case cpp::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(2076);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == cpp::Alignas || _la == cpp::LeftBracket) {
          setState(2075);
          attributeSpecifierSeq();
        }
        setState(2078);
        typeSpecifierSeq();
        setState(2081);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
        case 1: {
          setState(2079);
          declarator();
          break;
        }

        case 2: {
          setState(2080);
          abstractDeclarator();
          break;
        }

        }
        break;
      }

      case cpp::Ellipsis: {
        enterOuterAlt(_localctx, 2);
        setState(2083);
        match(cpp::Ellipsis);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowExpressionContext ------------------------------------------------------------------

cpp::ThrowExpressionContext::ThrowExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::ThrowExpressionContext::Throw() {
  return getToken(cpp::Throw, 0);
}

cpp::AssignmentExpressionContext* cpp::ThrowExpressionContext::assignmentExpression() {
  return getRuleContext<cpp::AssignmentExpressionContext>(0);
}


size_t cpp::ThrowExpressionContext::getRuleIndex() const {
  return cpp::RuleThrowExpression;
}


cpp::ThrowExpressionContext* cpp::throwExpression() {
  ThrowExpressionContext *_localctx = _tracker.createInstance<ThrowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 368, cpp::RuleThrowExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2086);
    match(cpp::Throw);
    setState(2088);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral)
      | (1ULL << cpp::Alignof)
      | (1ULL << cpp::Auto)
      | (1ULL << cpp::Bool)
      | (1ULL << cpp::Char)
      | (1ULL << cpp::Char16)
      | (1ULL << cpp::Char32)
      | (1ULL << cpp::Const_cast)
      | (1ULL << cpp::Decltype)
      | (1ULL << cpp::Delete)
      | (1ULL << cpp::Double)
      | (1ULL << cpp::Dynamic_cast)
      | (1ULL << cpp::Float)
      | (1ULL << cpp::Int)
      | (1ULL << cpp::Long)
      | (1ULL << cpp::New)
      | (1ULL << cpp::Noexcept)
      | (1ULL << cpp::Operator)
      | (1ULL << cpp::Reinterpret_cast)
      | (1ULL << cpp::Short)
      | (1ULL << cpp::Signed)
      | (1ULL << cpp::Sizeof))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (cpp::Static_cast - 65))
      | (1ULL << (cpp::This - 65))
      | (1ULL << (cpp::Throw - 65))
      | (1ULL << (cpp::Typeid_ - 65))
      | (1ULL << (cpp::Typename_ - 65))
      | (1ULL << (cpp::Unsigned - 65))
      | (1ULL << (cpp::Void - 65))
      | (1ULL << (cpp::Wchar - 65))
      | (1ULL << (cpp::LeftParen - 65))
      | (1ULL << (cpp::LeftBracket - 65))
      | (1ULL << (cpp::Plus - 65))
      | (1ULL << (cpp::Minus - 65))
      | (1ULL << (cpp::Star - 65))
      | (1ULL << (cpp::And - 65))
      | (1ULL << (cpp::Or - 65))
      | (1ULL << (cpp::Tilde - 65))
      | (1ULL << (cpp::Not - 65))
      | (1ULL << (cpp::PlusPlus - 65))
      | (1ULL << (cpp::MinusMinus - 65))
      | (1ULL << (cpp::Doublecolon - 65)))) != 0) || _la == cpp::Identifier) {
      setState(2087);
      assignmentExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionSpecificationContext ------------------------------------------------------------------

cpp::ExceptionSpecificationContext::ExceptionSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cpp::DynamicExceptionSpecificationContext* cpp::ExceptionSpecificationContext::dynamicExceptionSpecification() {
  return getRuleContext<cpp::DynamicExceptionSpecificationContext>(0);
}

cpp::NoeExceptSpecificationContext* cpp::ExceptionSpecificationContext::noeExceptSpecification() {
  return getRuleContext<cpp::NoeExceptSpecificationContext>(0);
}


size_t cpp::ExceptionSpecificationContext::getRuleIndex() const {
  return cpp::RuleExceptionSpecification;
}


cpp::ExceptionSpecificationContext* cpp::exceptionSpecification() {
  ExceptionSpecificationContext *_localctx = _tracker.createInstance<ExceptionSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 370, cpp::RuleExceptionSpecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2092);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::Throw: {
        enterOuterAlt(_localctx, 1);
        setState(2090);
        dynamicExceptionSpecification();
        break;
      }

      case cpp::Noexcept: {
        enterOuterAlt(_localctx, 2);
        setState(2091);
        noeExceptSpecification();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DynamicExceptionSpecificationContext ------------------------------------------------------------------

cpp::DynamicExceptionSpecificationContext::DynamicExceptionSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::DynamicExceptionSpecificationContext::Throw() {
  return getToken(cpp::Throw, 0);
}

tree::TerminalNode* cpp::DynamicExceptionSpecificationContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::DynamicExceptionSpecificationContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}

cpp::TypeIdListContext* cpp::DynamicExceptionSpecificationContext::typeIdList() {
  return getRuleContext<cpp::TypeIdListContext>(0);
}


size_t cpp::DynamicExceptionSpecificationContext::getRuleIndex() const {
  return cpp::RuleDynamicExceptionSpecification;
}


cpp::DynamicExceptionSpecificationContext* cpp::dynamicExceptionSpecification() {
  DynamicExceptionSpecificationContext *_localctx = _tracker.createInstance<DynamicExceptionSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 372, cpp::RuleDynamicExceptionSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2094);
    match(cpp::Throw);
    setState(2095);
    match(cpp::LeftParen);
    setState(2097);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 13) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 13)) & ((1ULL << (cpp::Auto - 13))
      | (1ULL << (cpp::Bool - 13))
      | (1ULL << (cpp::Char - 13))
      | (1ULL << (cpp::Char16 - 13))
      | (1ULL << (cpp::Char32 - 13))
      | (1ULL << (cpp::Class - 13))
      | (1ULL << (cpp::Const - 13))
      | (1ULL << (cpp::Decltype - 13))
      | (1ULL << (cpp::Double - 13))
      | (1ULL << (cpp::Enum - 13))
      | (1ULL << (cpp::Float - 13))
      | (1ULL << (cpp::Int - 13))
      | (1ULL << (cpp::Long - 13))
      | (1ULL << (cpp::Short - 13))
      | (1ULL << (cpp::Signed - 13))
      | (1ULL << (cpp::Struct - 13))
      | (1ULL << (cpp::Typename_ - 13)))) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & ((1ULL << (cpp::Union - 77))
      | (1ULL << (cpp::Unsigned - 77))
      | (1ULL << (cpp::Void - 77))
      | (1ULL << (cpp::Volatile - 77))
      | (1ULL << (cpp::Wchar - 77))
      | (1ULL << (cpp::Doublecolon - 77))
      | (1ULL << (cpp::Identifier - 77)))) != 0)) {
      setState(2096);
      typeIdList();
    }
    setState(2099);
    match(cpp::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdListContext ------------------------------------------------------------------

cpp::TypeIdListContext::TypeIdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cpp::TheTypeIdContext *> cpp::TypeIdListContext::theTypeId() {
  return getRuleContexts<cpp::TheTypeIdContext>();
}

cpp::TheTypeIdContext* cpp::TypeIdListContext::theTypeId(size_t i) {
  return getRuleContext<cpp::TheTypeIdContext>(i);
}

std::vector<tree::TerminalNode *> cpp::TypeIdListContext::Ellipsis() {
  return getTokens(cpp::Ellipsis);
}

tree::TerminalNode* cpp::TypeIdListContext::Ellipsis(size_t i) {
  return getToken(cpp::Ellipsis, i);
}

std::vector<tree::TerminalNode *> cpp::TypeIdListContext::Comma() {
  return getTokens(cpp::Comma);
}

tree::TerminalNode* cpp::TypeIdListContext::Comma(size_t i) {
  return getToken(cpp::Comma, i);
}


size_t cpp::TypeIdListContext::getRuleIndex() const {
  return cpp::RuleTypeIdList;
}


cpp::TypeIdListContext* cpp::typeIdList() {
  TypeIdListContext *_localctx = _tracker.createInstance<TypeIdListContext>(_ctx, getState());
  enterRule(_localctx, 374, cpp::RuleTypeIdList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2101);
    theTypeId();
    setState(2103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cpp::Ellipsis) {
      setState(2102);
      match(cpp::Ellipsis);
    }
    setState(2112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cpp::Comma) {
      setState(2105);
      match(cpp::Comma);
      setState(2106);
      theTypeId();
      setState(2108);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cpp::Ellipsis) {
        setState(2107);
        match(cpp::Ellipsis);
      }
      setState(2114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoeExceptSpecificationContext ------------------------------------------------------------------

cpp::NoeExceptSpecificationContext::NoeExceptSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::NoeExceptSpecificationContext::Noexcept() {
  return getToken(cpp::Noexcept, 0);
}

tree::TerminalNode* cpp::NoeExceptSpecificationContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

cpp::ConstantExpressionContext* cpp::NoeExceptSpecificationContext::constantExpression() {
  return getRuleContext<cpp::ConstantExpressionContext>(0);
}

tree::TerminalNode* cpp::NoeExceptSpecificationContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}


size_t cpp::NoeExceptSpecificationContext::getRuleIndex() const {
  return cpp::RuleNoeExceptSpecification;
}


cpp::NoeExceptSpecificationContext* cpp::noeExceptSpecification() {
  NoeExceptSpecificationContext *_localctx = _tracker.createInstance<NoeExceptSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 376, cpp::RuleNoeExceptSpecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2121);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2115);
      match(cpp::Noexcept);
      setState(2116);
      match(cpp::LeftParen);
      setState(2117);
      constantExpression();
      setState(2118);
      match(cpp::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2120);
      match(cpp::Noexcept);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheOperatorContext ------------------------------------------------------------------

cpp::TheOperatorContext::TheOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::TheOperatorContext::New() {
  return getToken(cpp::New, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::LeftBracket() {
  return getToken(cpp::LeftBracket, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::RightBracket() {
  return getToken(cpp::RightBracket, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Delete() {
  return getToken(cpp::Delete, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Plus() {
  return getToken(cpp::Plus, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Minus() {
  return getToken(cpp::Minus, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Star() {
  return getToken(cpp::Star, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Div() {
  return getToken(cpp::Div, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Mod() {
  return getToken(cpp::Mod, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Caret() {
  return getToken(cpp::Caret, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::And() {
  return getToken(cpp::And, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Or() {
  return getToken(cpp::Or, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Tilde() {
  return getToken(cpp::Tilde, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Not() {
  return getToken(cpp::Not, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Assign() {
  return getToken(cpp::Assign, 0);
}

std::vector<tree::TerminalNode *> cpp::TheOperatorContext::Greater() {
  return getTokens(cpp::Greater);
}

tree::TerminalNode* cpp::TheOperatorContext::Greater(size_t i) {
  return getToken(cpp::Greater, i);
}

std::vector<tree::TerminalNode *> cpp::TheOperatorContext::Less() {
  return getTokens(cpp::Less);
}

tree::TerminalNode* cpp::TheOperatorContext::Less(size_t i) {
  return getToken(cpp::Less, i);
}

tree::TerminalNode* cpp::TheOperatorContext::GreaterEqual() {
  return getToken(cpp::GreaterEqual, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::PlusAssign() {
  return getToken(cpp::PlusAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::MinusAssign() {
  return getToken(cpp::MinusAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::StarAssign() {
  return getToken(cpp::StarAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::ModAssign() {
  return getToken(cpp::ModAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::XorAssign() {
  return getToken(cpp::XorAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::AndAssign() {
  return getToken(cpp::AndAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::OrAssign() {
  return getToken(cpp::OrAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::RightShiftAssign() {
  return getToken(cpp::RightShiftAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::LeftShiftAssign() {
  return getToken(cpp::LeftShiftAssign, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Equal() {
  return getToken(cpp::Equal, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::NotEqual() {
  return getToken(cpp::NotEqual, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::LessEqual() {
  return getToken(cpp::LessEqual, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::AndAnd() {
  return getToken(cpp::AndAnd, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::OrOr() {
  return getToken(cpp::OrOr, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::PlusPlus() {
  return getToken(cpp::PlusPlus, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::MinusMinus() {
  return getToken(cpp::MinusMinus, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Comma() {
  return getToken(cpp::Comma, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::ArrowStar() {
  return getToken(cpp::ArrowStar, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::Arrow() {
  return getToken(cpp::Arrow, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::LeftParen() {
  return getToken(cpp::LeftParen, 0);
}

tree::TerminalNode* cpp::TheOperatorContext::RightParen() {
  return getToken(cpp::RightParen, 0);
}


size_t cpp::TheOperatorContext::getRuleIndex() const {
  return cpp::RuleTheOperator;
}


cpp::TheOperatorContext* cpp::theOperator() {
  TheOperatorContext *_localctx = _tracker.createInstance<TheOperatorContext>(_ctx, getState());
  enterRule(_localctx, 378, cpp::RuleTheOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2174);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2123);
      match(cpp::New);
      setState(2126);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx)) {
      case 1: {
        setState(2124);
        match(cpp::LeftBracket);
        setState(2125);
        match(cpp::RightBracket);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2128);
      match(cpp::Delete);
      setState(2131);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx)) {
      case 1: {
        setState(2129);
        match(cpp::LeftBracket);
        setState(2130);
        match(cpp::RightBracket);
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2133);
      match(cpp::Plus);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2134);
      match(cpp::Minus);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2135);
      match(cpp::Star);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2136);
      match(cpp::Div);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2137);
      match(cpp::Mod);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2138);
      match(cpp::Caret);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2139);
      match(cpp::And);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2140);
      match(cpp::Or);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2141);
      match(cpp::Tilde);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2142);
      match(cpp::Not);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2143);
      match(cpp::Assign);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2144);
      match(cpp::Greater);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2145);
      match(cpp::Less);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2146);
      match(cpp::GreaterEqual);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2147);
      match(cpp::PlusAssign);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2148);
      match(cpp::MinusAssign);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2149);
      match(cpp::StarAssign);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2150);
      match(cpp::ModAssign);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2151);
      match(cpp::XorAssign);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2152);
      match(cpp::AndAssign);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2153);
      match(cpp::OrAssign);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2154);
      match(cpp::Less);
      setState(2155);
      match(cpp::Less);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2156);
      match(cpp::Greater);
      setState(2157);
      match(cpp::Greater);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2158);
      match(cpp::RightShiftAssign);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2159);
      match(cpp::LeftShiftAssign);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2160);
      match(cpp::Equal);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2161);
      match(cpp::NotEqual);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2162);
      match(cpp::LessEqual);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2163);
      match(cpp::AndAnd);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2164);
      match(cpp::OrOr);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2165);
      match(cpp::PlusPlus);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2166);
      match(cpp::MinusMinus);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2167);
      match(cpp::Comma);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2168);
      match(cpp::ArrowStar);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2169);
      match(cpp::Arrow);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2170);
      match(cpp::LeftParen);
      setState(2171);
      match(cpp::RightParen);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2172);
      match(cpp::LeftBracket);
      setState(2173);
      match(cpp::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

cpp::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::LiteralContext::IntegerLiteral() {
  return getToken(cpp::IntegerLiteral, 0);
}

tree::TerminalNode* cpp::LiteralContext::CharacterLiteral() {
  return getToken(cpp::CharacterLiteral, 0);
}

tree::TerminalNode* cpp::LiteralContext::FloatingLiteral() {
  return getToken(cpp::FloatingLiteral, 0);
}

tree::TerminalNode* cpp::LiteralContext::StringLiteral() {
  return getToken(cpp::StringLiteral, 0);
}

tree::TerminalNode* cpp::LiteralContext::BooleanLiteral() {
  return getToken(cpp::BooleanLiteral, 0);
}

tree::TerminalNode* cpp::LiteralContext::PointerLiteral() {
  return getToken(cpp::PointerLiteral, 0);
}

tree::TerminalNode* cpp::LiteralContext::UserDefinedLiteral() {
  return getToken(cpp::UserDefinedLiteral, 0);
}


size_t cpp::LiteralContext::getRuleIndex() const {
  return cpp::RuleLiteral;
}


cpp::LiteralContext* cpp::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 380, cpp::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2176);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cpp::IntegerLiteral)
      | (1ULL << cpp::CharacterLiteral)
      | (1ULL << cpp::FloatingLiteral)
      | (1ULL << cpp::StringLiteral)
      | (1ULL << cpp::BooleanLiteral)
      | (1ULL << cpp::PointerLiteral)
      | (1ULL << cpp::UserDefinedLiteral))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DocCommentContext ------------------------------------------------------------------

cpp::DocCommentContext::DocCommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cpp::DocCommentContext::DocLineComment() {
  return getToken(cpp::DocLineComment, 0);
}

tree::TerminalNode* cpp::DocCommentContext::DocBlockComment() {
  return getToken(cpp::DocBlockComment, 0);
}


size_t cpp::DocCommentContext::getRuleIndex() const {
  return cpp::RuleDocComment;
}


cpp::DocCommentContext* cpp::docComment() {
  DocCommentContext *_localctx = _tracker.createInstance<DocCommentContext>(_ctx, getState());
  enterRule(_localctx, 382, cpp::RuleDocComment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2182);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cpp::DocLineComment: {
        enterOuterAlt(_localctx, 1);
        setState(2178);
        dynamic_cast<DocCommentContext *>(_localctx)->comment = match(cpp::DocLineComment);

                dynamic_cast<DocCommentContext *>(_localctx)->commentText =  (dynamic_cast<DocCommentContext *>(_localctx)->comment != nullptr ? dynamic_cast<DocCommentContext *>(_localctx)->comment->getText() : "").substr(3);
             
        break;
      }

      case cpp::DocBlockComment: {
        enterOuterAlt(_localctx, 2);
        setState(2180);
        dynamic_cast<DocCommentContext *>(_localctx)->comment = match(cpp::DocBlockComment);

                dynamic_cast<DocCommentContext *>(_localctx)->commentText =  (dynamic_cast<DocCommentContext *>(_localctx)->comment != nullptr ? dynamic_cast<DocCommentContext *>(_localctx)->comment->getText() : "");
                dynamic_cast<DocCommentContext *>(_localctx)->commentText =  _localctx->commentText.substr(3, _localctx->commentText.length() - 5);
             
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool cpp::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return nestedNameSpecifierSempred(dynamic_cast<NestedNameSpecifierContext *>(context), predicateIndex);
    case 15: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);
    case 25: return noPointerNewDeclaratorSempred(dynamic_cast<NoPointerNewDeclaratorContext *>(context), predicateIndex);
    case 115: return noPointerDeclaratorSempred(dynamic_cast<NoPointerDeclaratorContext *>(context), predicateIndex);
    case 126: return noPointerAbstractDeclaratorSempred(dynamic_cast<NoPointerAbstractDeclaratorContext *>(context), predicateIndex);
    case 128: return noPointerAbstractPackDeclaratorSempred(dynamic_cast<NoPointerAbstractPackDeclaratorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool cpp::nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool cpp::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool cpp::noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool cpp::noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool cpp::noPointerAbstractDeclaratorSempred(NoPointerAbstractDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool cpp::noPointerAbstractPackDeclaratorSempred(NoPointerAbstractPackDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> cpp::_decisionToDFA;
atn::PredictionContextCache cpp::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN cpp::_atn;
std::vector<uint16_t> cpp::_serializedATN;

std::vector<std::string> cpp::_ruleNames = {
  "translationUnit", "primaryExpression", "idExpression", "unqualifiedId", 
  "qualifiedId", "nestedNameSpecifier", "lambdaExpression", "lambdaIntroducer", 
  "lambdaCapture", "captureDefault", "captureList", "capture", "simpleCapture", 
  "initcapture", "lambdaDeclarator", "postfixExpression", "typeIdOfTheTypeId", 
  "expressionList", "pseudoDestructorName", "unaryExpression", "unaryOperator", 
  "newExpression_", "newPlacement", "newTypeId", "newDeclarator_", "noPointerNewDeclarator", 
  "newInitializer_", "deleteExpression", "noExceptExpression", "castExpression", 
  "pointerMemberExpression", "multiplicativeExpression", "additiveExpression", 
  "shiftExpression", "shiftOperator", "relationalExpression", "equalityExpression", 
  "andExpression", "exclusiveOrExpression", "inclusiveOrExpression", "logicalAndExpression", 
  "logicalOrExpression", "conditionalExpression", "assignmentExpression", 
  "assignmentOperator", "expression", "constantExpression", "statement", 
  "labeledStatement", "expressionStatement", "compoundStatement", "statementSeq", 
  "selectionStatement", "condition", "iterationStatement", "forInitStatement", 
  "forRangeDeclaration", "forRangeInitializer", "jumpStatement", "declarationStatement", 
  "declarationseq", "declaration", "blockDeclaration", "aliasDeclaration", 
  "simpleDeclaration", "staticAssertDeclaration", "emptyDeclaration_", "attributeDeclaration", 
  "declSpecifier", "declSpecifierSeq", "storageClassSpecifier", "functionSpecifier", 
  "typedefName", "typeSpecifier", "trailingTypeSpecifier", "typeSpecifierSeq", 
  "trailingTypeSpecifierSeq", "simpleTypeLengthModifier", "simpleTypeSignednessModifier", 
  "simpleTypeSpecifier", "theTypeName", "decltypeSpecifier", "elaboratedTypeSpecifier", 
  "enumName", "enumSpecifier", "enumHead", "opaqueEnumDeclaration", "enumkey", 
  "enumbase", "enumeratorList", "enumeratorDefinition", "enumerator", "namespaceName", 
  "originalNamespaceName", "namespaceDefinition", "namespaceAlias", "namespaceAliasDefinition", 
  "qualifiednamespacespecifier", "usingDeclaration", "usingDirective", "asmDefinition", 
  "linkageSpecification", "attributeSpecifierSeq", "attributeSpecifier", 
  "alignmentspecifier", "attributeList", "attribute", "attributeNamespace", 
  "attributeArgumentClause", "balancedTokenSeq", "balancedtoken", "initDeclaratorList", 
  "initDeclarator", "declarator", "pointerDeclarator", "noPointerDeclarator", 
  "parametersAndQualifiers", "trailingReturnType", "pointerOperator", "cvqualifierseq", 
  "cvQualifier", "refqualifier", "declaratorid", "theTypeId", "abstractDeclarator", 
  "pointerAbstractDeclarator", "noPointerAbstractDeclarator", "abstractPackDeclarator", 
  "noPointerAbstractPackDeclarator", "parameterDeclarationClause", "parameterDeclarationList", 
  "parameterDeclaration", "functionDefinition", "functionBody", "initializer", 
  "braceOrEqualInitializer", "initializerClause", "initializerList", "bracedInitList", 
  "className", "classSpecifier", "classHead", "classHeadName", "classVirtSpecifier", 
  "classKey", "memberSpecification", "memberdeclaration", "memberDeclaratorList", 
  "memberDeclarator", "virtualSpecifierSeq", "virtualSpecifier", "pureSpecifier", 
  "baseClause", "baseSpecifierList", "baseSpecifier", "classOrDeclType", 
  "baseTypeSpecifier", "accessSpecifier", "conversionFunctionId", "conversionTypeId", 
  "conversionDeclarator", "constructorInitializer", "memInitializerList", 
  "memInitializer", "meminitializerid", "operatorFunctionId", "literalOperatorId", 
  "templateDeclaration", "templateparameterList", "templateParameter", "typeParameter", 
  "simpleTemplateId", "templateId", "templateName", "templateArgumentList", 
  "templateArgument", "typeNameSpecifier", "explicitInstantiation", "explicitSpecialization", 
  "tryBlock", "functionTryBlock", "handlerSeq", "handler", "exceptionDeclaration", 
  "throwExpression", "exceptionSpecification", "dynamicExceptionSpecification", 
  "typeIdList", "noeExceptSpecification", "theOperator", "literal", "docComment"
};

std::vector<std::string> cpp::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "'alignas'", "'alignof'", "'asm'", 
  "'auto'", "'bool'", "'break'", "'case'", "'catch'", "'char'", "'char16_t'", 
  "'char32_t'", "'class'", "'const'", "'constexpr'", "'const_cast'", "'continue'", 
  "'decltype'", "'default'", "'delete'", "'do'", "'double'", "'dynamic_cast'", 
  "'else'", "'enum'", "'explicit'", "'export'", "'extern'", "'false'", "'final'", 
  "'float'", "'for'", "'friend'", "'goto'", "'if'", "'inline'", "'int'", 
  "'long'", "'mutable'", "'namespace'", "'new'", "'noexcept'", "'nullptr'", 
  "'operator'", "'override'", "'private'", "'protected'", "'public'", "'register'", 
  "'reinterpret_cast'", "'return'", "'short'", "'signed'", "'sizeof'", "'static'", 
  "'static_assert'", "'static_cast'", "'struct'", "'switch'", "'template'", 
  "'this'", "'thread_local'", "'throw'", "'true'", "'try'", "'typedef'", 
  "'typeid'", "'typename'", "'union'", "'unsigned'", "'using'", "'virtual'", 
  "'void'", "'volatile'", "'wchar_t'", "'while'", "'('", "')'", "'['", "']'", 
  "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'", "'|'", 
  "'~'", "", "'='", "'<'", "'>'", "'+='", "'-='", "'*='", "'/='", "'%='", 
  "'^='", "'&='", "'|='", "'<<='", "'>>='", "'=='", "'!='", "'<='", "'>='", 
  "", "", "'++'", "'--'", "','", "'->*'", "'->'", "'?'", "':'", "'::'", 
  "';'", "'.'", "'.*'", "'...'"
};

std::vector<std::string> cpp::_symbolicNames = {
  "", "IntegerLiteral", "CharacterLiteral", "FloatingLiteral", "StringLiteral", 
  "BooleanLiteral", "PointerLiteral", "UserDefinedLiteral", "MultiLineMacro", 
  "Directive", "Alignas", "Alignof", "Asm", "Auto", "Bool", "Break", "Case", 
  "Catch", "Char", "Char16", "Char32", "Class", "Const", "Constexpr", "Const_cast", 
  "Continue", "Decltype", "Default", "Delete", "Do", "Double", "Dynamic_cast", 
  "Else", "Enum", "Explicit", "Export", "Extern", "False_", "Final", "Float", 
  "For", "Friend", "Goto", "If", "Inline", "Int", "Long", "Mutable", "Namespace", 
  "New", "Noexcept", "Nullptr", "Operator", "Override", "Private", "Protected", 
  "Public", "Register", "Reinterpret_cast", "Return", "Short", "Signed", 
  "Sizeof", "Static", "Static_assert", "Static_cast", "Struct", "Switch", 
  "Template", "This", "Thread_local", "Throw", "True_", "Try", "Typedef", 
  "Typeid_", "Typename_", "Union", "Unsigned", "Using", "Virtual", "Void", 
  "Volatile", "Wchar", "While", "LeftParen", "RightParen", "LeftBracket", 
  "RightBracket", "LeftBrace", "RightBrace", "Plus", "Minus", "Star", "Div", 
  "Mod", "Caret", "And", "Or", "Tilde", "Not", "Assign", "Less", "Greater", 
  "PlusAssign", "MinusAssign", "StarAssign", "DivAssign", "ModAssign", "XorAssign", 
  "AndAssign", "OrAssign", "LeftShiftAssign", "RightShiftAssign", "Equal", 
  "NotEqual", "LessEqual", "GreaterEqual", "AndAnd", "OrOr", "PlusPlus", 
  "MinusMinus", "Comma", "ArrowStar", "Arrow", "Question", "Colon", "Doublecolon", 
  "Semi", "Dot", "DotStar", "Ellipsis", "Identifier", "DecimalLiteral", 
  "OctalLiteral", "HexadecimalLiteral", "BinaryLiteral", "Integersuffix", 
  "UserDefinedIntegerLiteral", "UserDefinedFloatingLiteral", "UserDefinedStringLiteral", 
  "UserDefinedCharacterLiteral", "Whitespace", "Newline", "DocBlockComment", 
  "DocLineComment", "BlockComment", "LineComment"
};

dfa::Vocabulary cpp::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> cpp::_tokenNames;

cpp::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x95, 0x88b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 
    0x9a, 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 
    0x4, 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 
    0xa1, 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
    0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 0x9, 
    0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 0x9, 0xaa, 
    0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 0x9, 0xad, 0x4, 
    0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 0x9, 0xb0, 0x4, 0xb1, 
    0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 0x9, 0xb3, 0x4, 0xb4, 0x9, 
    0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 
    0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 
    0xbb, 0x9, 0xbb, 0x4, 0xbc, 0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 
    0x9, 0xbe, 0x4, 0xbf, 0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 
    0xc1, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x186, 0xa, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x18b, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0x18c, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x196, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x19a, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x1a3, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x1a6, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1aa, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1b2, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1b9, 0xa, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x1bc, 0xa, 0x7, 0x3, 0x7, 0x7, 0x7, 0x1bf, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x1c2, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x1c6, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x1cc, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0x1d4, 0xa, 0xa, 0x5, 0xa, 0x1d6, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1dd, 0xa, 0xc, 0xc, 0xc, 
    0xe, 0xc, 0x1e0, 0xb, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1e3, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0x1e7, 0xa, 0xd, 0x3, 0xe, 0x5, 0xe, 0x1ea, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1ee, 0xa, 0xe, 0x3, 0xf, 0x5, 
    0xf, 0x1f1, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0x1f8, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x1fc, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1ff, 0xa, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x202, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x205, 0xa, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x20b, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x20f, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x213, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0x221, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x225, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x22b, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x232, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x238, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x23c, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x240, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0x243, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x5, 0x14, 0x24a, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x24f, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x5, 0x14, 0x25c, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x263, 0xa, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x26f, 0xa, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0x279, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x5, 0x17, 0x27e, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x282, 
    0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 
    0x17, 0x289, 0xa, 0x17, 0x3, 0x17, 0x5, 0x17, 0x28c, 0xa, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x294, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x298, 0xa, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x29b, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x2a2, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x2a9, 0xa, 0x1b, 0x7, 0x1b, 
    0x2ab, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x2ae, 0xb, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x2b2, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x2b6, 0xa, 0x1c, 0x3, 0x1d, 0x5, 0x1d, 0x2b9, 0xa, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x2be, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x2cd, 
    0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x2d2, 0xa, 0x20, 
    0xc, 0x20, 0xe, 0x20, 0x2d5, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x7, 0x21, 0x2da, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x2dd, 0xb, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x2e2, 0xa, 0x22, 0xc, 0x22, 
    0xe, 0x22, 0x2e5, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x7, 0x23, 0x2eb, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2ee, 0xb, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x2f4, 0xa, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x2f9, 0xa, 0x25, 0xc, 0x25, 
    0xe, 0x25, 0x2fc, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 
    0x301, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x304, 0xb, 0x26, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x309, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 
    0x30c, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x311, 
    0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x314, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x7, 0x29, 0x319, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x31c, 
    0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x321, 0xa, 0x2a, 
    0xc, 0x2a, 0xe, 0x2a, 0x324, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x7, 0x2b, 0x329, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x32c, 0xb, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 
    0x2c, 0x334, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x33c, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x343, 0xa, 0x2f, 0xc, 0x2f, 
    0xe, 0x2f, 0x346, 0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x34f, 0xa, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x357, 
    0xa, 0x31, 0x5, 0x31, 0x359, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 
    0x5, 0x32, 0x35e, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x5, 0x32, 0x364, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 
    0x5, 0x33, 0x36a, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x372, 0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x6, 0x35, 0x37a, 0xa, 0x35, 
    0xd, 0x35, 0xe, 0x35, 0x37b, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x387, 
    0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
    0x36, 0x5, 0x36, 0x38f, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 
    0x393, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x5, 0x37, 0x39a, 0xa, 0x37, 0x5, 0x37, 0x39c, 0xa, 0x37, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x3b0, 0xa, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x3b4, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x3ba, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x5, 0x38, 0x3bf, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 
    0x3c3, 0xa, 0x39, 0x3, 0x3a, 0x5, 0x3a, 0x3c6, 0xa, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x3cd, 0xa, 0x3b, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x3d4, 
    0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x3d8, 0xa, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x6, 0x3e, 0x3e2, 0xa, 0x3e, 0xd, 0x3e, 0xe, 0x3e, 0x3e3, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 
    0x3f, 0x3f3, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 
    0x40, 0x3ff, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
    0x404, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 0x40d, 0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 
    0x410, 0xb, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x415, 
    0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x41a, 0xa, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 0x420, 0xa, 0x42, 
    0xc, 0x42, 0xe, 0x42, 0x423, 0xb, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 
    0x427, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x42c, 
    0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
    0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x445, 
    0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x6, 0x47, 0x44a, 0xa, 0x47, 
    0xd, 0x47, 0xe, 0x47, 0x44b, 0x3, 0x47, 0x5, 0x47, 0x44f, 0xa, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x5, 0x4b, 0x45e, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x5, 0x4c, 0x464, 0xa, 0x4c, 0x3, 0x4d, 0x6, 0x4d, 0x467, 0xa, 0x4d, 
    0xd, 0x4d, 0xe, 0x4d, 0x468, 0x3, 0x4d, 0x5, 0x4d, 0x46c, 0xa, 0x4d, 
    0x3, 0x4e, 0x6, 0x4e, 0x46f, 0xa, 0x4e, 0xd, 0x4e, 0xe, 0x4e, 0x470, 
    0x3, 0x4e, 0x5, 0x4e, 0x474, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x51, 0x5, 0x51, 0x47b, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 
    0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 
    0x51, 0x492, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x5, 0x52, 0x498, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x5, 0x53, 0x49e, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 
    0x5, 0x54, 0x4a4, 0xa, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4a7, 0xa, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4ad, 0xa, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4b1, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x5, 0x54, 0x4b5, 0xa, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4b8, 0xa, 0x54, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 
    0x56, 0x4c0, 0xa, 0x56, 0x5, 0x56, 0x4c2, 0xa, 0x56, 0x3, 0x56, 0x3, 
    0x56, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x4c8, 0xa, 0x57, 0x3, 0x57, 
    0x5, 0x57, 0x4cb, 0xa, 0x57, 0x3, 0x57, 0x5, 0x57, 0x4ce, 0xa, 0x57, 
    0x3, 0x57, 0x5, 0x57, 0x4d1, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 
    0x4d5, 0xa, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x4d9, 0xa, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x4df, 0xa, 0x59, 
    0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x7, 
    0x5b, 0x4e7, 0xa, 0x5b, 0xc, 0x5b, 0xe, 0x5b, 0x4ea, 0xb, 0x5b, 0x3, 
    0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x4ef, 0xa, 0x5c, 0x3, 0x5d, 
    0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4f5, 0xa, 0x5e, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x60, 0x5, 0x60, 0x4fa, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x60, 0x5, 0x60, 0x4ff, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 
    0x503, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x5, 
    0x63, 0x510, 0xa, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 
    0x5, 0x64, 0x516, 0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0x51a, 
    0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x5, 0x65, 0x520, 
    0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x525, 0xa, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x5, 0x67, 0x534, 0xa, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x538, 
    0xa, 0x67, 0x3, 0x68, 0x6, 0x68, 0x53b, 0xa, 0x68, 0xd, 0x68, 0xe, 0x68, 
    0x53c, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x542, 0xa, 0x69, 
    0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x547, 0xa, 0x69, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x54d, 0xa, 0x6a, 0x3, 0x6a, 
    0x5, 0x6a, 0x550, 0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x7, 0x6b, 0x557, 0xa, 0x6b, 0xc, 0x6b, 0xe, 0x6b, 0x55a, 
    0xb, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x55d, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 
    0x3, 0x6c, 0x5, 0x6c, 0x562, 0xa, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 
    0x566, 0xa, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 
    0x56c, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x6, 0x6f, 0x571, 
    0xa, 0x6f, 0xd, 0x6f, 0xe, 0x6f, 0x572, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
    0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 
    0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x6, 0x70, 0x582, 0xa, 0x70, 
    0xd, 0x70, 0xe, 0x70, 0x583, 0x5, 0x70, 0x586, 0xa, 0x70, 0x3, 0x71, 
    0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x7, 
    0x71, 0x58f, 0xa, 0x71, 0xc, 0x71, 0xe, 0x71, 0x592, 0xb, 0x71, 0x3, 
    0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 
    0x59a, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x5a3, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 
    0x5, 0x74, 0x5a7, 0xa, 0x74, 0x7, 0x74, 0x5a9, 0xa, 0x74, 0xc, 0x74, 
    0xe, 0x74, 0x5ac, 0xb, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x75, 0x5, 0x75, 0x5b3, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x75, 0x5, 0x75, 0x5b9, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x75, 0x5, 0x75, 0x5bf, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 0x5, 0x75, 
    0x5c3, 0xa, 0x75, 0x5, 0x75, 0x5c5, 0xa, 0x75, 0x7, 0x75, 0x5c7, 0xa, 
    0x75, 0xc, 0x75, 0xe, 0x75, 0x5ca, 0xb, 0x75, 0x3, 0x76, 0x3, 0x76, 
    0x5, 0x76, 0x5ce, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x5d2, 
    0xa, 0x76, 0x3, 0x76, 0x5, 0x76, 0x5d5, 0xa, 0x76, 0x3, 0x76, 0x5, 0x76, 
    0x5d8, 0xa, 0x76, 0x3, 0x76, 0x5, 0x76, 0x5db, 0xa, 0x76, 0x3, 0x77, 
    0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 0x5e0, 0xa, 0x77, 0x3, 0x78, 0x3, 0x78, 
    0x5, 0x78, 0x5e4, 0xa, 0x78, 0x3, 0x78, 0x5, 0x78, 0x5e7, 0xa, 0x78, 
    0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x5eb, 0xa, 0x78, 0x3, 0x78, 0x5, 0x78, 
    0x5ee, 0xa, 0x78, 0x5, 0x78, 0x5f0, 0xa, 0x78, 0x3, 0x79, 0x6, 0x79, 
    0x5f3, 0xa, 0x79, 0xd, 0x79, 0xe, 0x79, 0x5f4, 0x3, 0x7a, 0x3, 0x7a, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x5, 0x7c, 0x5fc, 0xa, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x602, 0xa, 0x7d, 0x3, 0x7e, 
    0x3, 0x7e, 0x5, 0x7e, 0x606, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
    0x3, 0x7e, 0x5, 0x7e, 0x60c, 0xa, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x6, 0x7f, 
    0x610, 0xa, 0x7f, 0xd, 0x7f, 0xe, 0x7f, 0x611, 0x3, 0x7f, 0x5, 0x7f, 
    0x615, 0xa, 0x7f, 0x5, 0x7f, 0x617, 0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x61d, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 
    0x5, 0x80, 0x621, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 
    0x5, 0x80, 0x627, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x80, 0x5, 0x80, 0x62e, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 
    0x632, 0xa, 0x80, 0x5, 0x80, 0x634, 0xa, 0x80, 0x7, 0x80, 0x636, 0xa, 
    0x80, 0xc, 0x80, 0xe, 0x80, 0x639, 0xb, 0x80, 0x3, 0x81, 0x7, 0x81, 
    0x63c, 0xa, 0x81, 0xc, 0x81, 0xe, 0x81, 0x63f, 0xb, 0x81, 0x3, 0x81, 
    0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 
    0x82, 0x3, 0x82, 0x5, 0x82, 0x64a, 0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 
    0x5, 0x82, 0x64e, 0xa, 0x82, 0x5, 0x82, 0x650, 0xa, 0x82, 0x7, 0x82, 
    0x652, 0xa, 0x82, 0xc, 0x82, 0xe, 0x82, 0x655, 0xb, 0x82, 0x3, 0x83, 
    0x3, 0x83, 0x5, 0x83, 0x659, 0xa, 0x83, 0x3, 0x83, 0x5, 0x83, 0x65c, 
    0xa, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x7, 0x84, 0x661, 0xa, 0x84, 
    0xc, 0x84, 0xe, 0x84, 0x664, 0xb, 0x84, 0x3, 0x85, 0x5, 0x85, 0x667, 
    0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x66c, 0xa, 0x85, 
    0x5, 0x85, 0x66e, 0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x672, 
    0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x7, 0x86, 0x677, 0xa, 0x86, 
    0xc, 0x86, 0xe, 0x86, 0x67a, 0xb, 0x86, 0x3, 0x86, 0x5, 0x86, 0x67d, 
    0xa, 0x86, 0x3, 0x86, 0x5, 0x86, 0x680, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 
    0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x686, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 
    0x3, 0x86, 0x7, 0x86, 0x68b, 0xa, 0x86, 0xc, 0x86, 0xe, 0x86, 0x68e, 
    0xb, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 
    0x87, 0x5, 0x87, 0x696, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x69f, 0xa, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 
    0x88, 0x5, 0x88, 0x6a8, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 
    0x5, 0x89, 0x6ad, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x5, 0x8a, 0x6b1, 
    0xa, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x6b5, 0xa, 0x8b, 0x3, 0x8b, 
    0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x6ba, 0xa, 0x8b, 0x7, 0x8b, 0x6bc, 
    0xa, 0x8b, 0xc, 0x8b, 0xe, 0x8b, 0x6bf, 0xb, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 
    0x3, 0x8c, 0x5, 0x8c, 0x6c4, 0xa, 0x8c, 0x5, 0x8c, 0x6c6, 0xa, 0x8c, 
    0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x6cc, 0xa, 0x8d, 
    0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x5, 0x8e, 0x6d3, 
    0xa, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x5, 
    0x8f, 0x6da, 0xa, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x6de, 0xa, 
    0x8f, 0x5, 0x8f, 0x6e0, 0xa, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x6e3, 0xa, 
    0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x6e7, 0xa, 0x8f, 0x3, 0x8f, 
    0x3, 0x8f, 0x5, 0x8f, 0x6eb, 0xa, 0x8f, 0x5, 0x8f, 0x6ed, 0xa, 0x8f, 
    0x5, 0x8f, 0x6ef, 0xa, 0x8f, 0x3, 0x90, 0x5, 0x90, 0x6f2, 0xa, 0x90, 
    0x3, 0x90, 0x3, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 
    0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x6, 0x93, 
    0x700, 0xa, 0x93, 0xd, 0x93, 0xe, 0x93, 0x701, 0x3, 0x93, 0x3, 0x93, 
    0x3, 0x94, 0x5, 0x94, 0x707, 0xa, 0x94, 0x3, 0x94, 0x5, 0x94, 0x70a, 
    0xa, 0x94, 0x3, 0x94, 0x5, 0x94, 0x70d, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 
    0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 
    0x94, 0x5, 0x94, 0x718, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 
    0x3, 0x95, 0x3, 0x95, 0x7, 0x95, 0x71f, 0xa, 0x95, 0xc, 0x95, 0xe, 0x95, 
    0x722, 0xb, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 
    0x3, 0x96, 0x3, 0x96, 0x5, 0x96, 0x72b, 0xa, 0x96, 0x3, 0x96, 0x3, 0x96, 
    0x5, 0x96, 0x72f, 0xa, 0x96, 0x3, 0x96, 0x5, 0x96, 0x732, 0xa, 0x96, 
    0x3, 0x96, 0x3, 0x96, 0x5, 0x96, 0x736, 0xa, 0x96, 0x3, 0x97, 0x6, 0x97, 
    0x739, 0xa, 0x97, 0xd, 0x97, 0xe, 0x97, 0x73a, 0x3, 0x98, 0x3, 0x98, 
    0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 
    0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x747, 0xa, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 
    0x3, 0x9b, 0x5, 0x9b, 0x74c, 0xa, 0x9b, 0x7, 0x9b, 0x74e, 0xa, 0x9b, 
    0xc, 0x9b, 0xe, 0x9b, 0x751, 0xb, 0x9b, 0x3, 0x9c, 0x5, 0x9c, 0x754, 
    0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x759, 0xa, 0x9c, 
    0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x75e, 0xa, 0x9c, 0x3, 0x9c, 
    0x3, 0x9c, 0x5, 0x9c, 0x762, 0xa, 0x9c, 0x3, 0x9d, 0x5, 0x9d, 0x765, 
    0xa, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x769, 0xa, 0x9d, 0x3, 0x9e, 
    0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 
    0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x774, 0xa, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 
    0x5, 0xa2, 0x778, 0xa, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 
    0x3, 0xa4, 0x5, 0xa4, 0x77f, 0xa, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
    0x5, 0xa4, 0x784, 0xa, 0xa4, 0x7, 0xa4, 0x786, 0xa, 0xa4, 0xc, 0xa4, 
    0xe, 0xa4, 0x789, 0xb, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 
    0x78e, 0xa, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x792, 0xa, 0xa5, 
    0x3, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x796, 0xa, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 
    0x3, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x79f, 
    0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
    0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x7, 0xaa, 0x7aa, 0xa, 0xaa, 
    0xc, 0xaa, 0xe, 0xaa, 0x7ad, 0xb, 0xaa, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 
    0x7b1, 0xa, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 
    0x5, 0xac, 0x7b8, 0xa, 0xac, 0x3, 0xac, 0x3, 0xac, 0x5, 0xac, 0x7bc, 
    0xa, 0xac, 0x3, 0xac, 0x5, 0xac, 0x7bf, 0xa, 0xac, 0x3, 0xac, 0x5, 0xac, 
    0x7c2, 0xa, 0xac, 0x3, 0xac, 0x5, 0xac, 0x7c5, 0xa, 0xac, 0x3, 0xac, 
    0x3, 0xac, 0x5, 0xac, 0x7c9, 0xa, 0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 
    0x5, 0xad, 0x7ce, 0xa, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 
    0x3, 0xae, 0x5, 0xae, 0x7d5, 0xa, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 
    0x7d9, 0xa, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x7dd, 0xa, 0xae, 
    0x3, 0xaf, 0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x7e3, 0xa, 0xb0, 
    0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x7e8, 0xa, 0xb0, 0x7, 0xb0, 
    0x7ea, 0xa, 0xb0, 0xc, 0xb0, 0xe, 0xb0, 0x7ed, 0xb, 0xb0, 0x3, 0xb1, 
    0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x7f2, 0xa, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 
    0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x7f8, 0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 
    0x7fb, 0xa, 0xb2, 0x3, 0xb3, 0x5, 0xb3, 0x7fe, 0xa, 0xb3, 0x3, 0xb3, 
    0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 
    0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 
    0x5, 0xb6, 0x80e, 0xa, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb7, 
    0x6, 0xb7, 0x814, 0xa, 0xb7, 0xd, 0xb7, 0xe, 0xb7, 0x815, 0x3, 0xb8, 
    0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb9, 0x5, 
    0xb9, 0x81f, 0xa, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 
    0x824, 0xa, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 0x827, 0xa, 0xb9, 0x3, 0xba, 
    0x3, 0xba, 0x5, 0xba, 0x82b, 0xa, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 
    0x82f, 0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x834, 
    0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x83a, 
    0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x83f, 0xa, 0xbd, 
    0x7, 0xbd, 0x841, 0xa, 0xbd, 0xc, 0xbd, 0xe, 0xbd, 0x844, 0xb, 0xbd, 
    0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 
    0xbe, 0x84c, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 
    0x851, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x856, 
    0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 
    0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
    0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 
    0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
    0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 
    0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
    0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x881, 0xa, 0xbf, 0x3, 0xc0, 
    0x3, 0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x5, 0xc1, 0x889, 
    0xa, 0xc1, 0x3, 0xc1, 0x3, 0x44b, 0x8, 0xc, 0x20, 0x34, 0xe8, 0xfe, 
    0x102, 0xc2, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
    0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
    0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
    0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 
    0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 
    0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 
    0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 
    0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 
    0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 
    0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 
    0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 
    0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 
    0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 
    0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 
    0x17e, 0x180, 0x2, 0x19, 0x4, 0x2, 0x63, 0x63, 0x67, 0x67, 0x6, 0x2, 
    0x1a, 0x1a, 0x21, 0x21, 0x3c, 0x3c, 0x43, 0x43, 0x4, 0x2, 0x7e, 0x7e, 
    0x83, 0x83, 0x3, 0x2, 0x7a, 0x7b, 0x4, 0x2, 0x5d, 0x5f, 0x63, 0x66, 
    0x4, 0x2, 0x7d, 0x7d, 0x84, 0x84, 0x3, 0x2, 0x5f, 0x61, 0x3, 0x2, 0x5d, 
    0x5e, 0x4, 0x2, 0x68, 0x69, 0x76, 0x77, 0x3, 0x2, 0x74, 0x75, 0x4, 0x2, 
    0x67, 0x67, 0x6a, 0x73, 0x7, 0x2, 0x26, 0x26, 0x31, 0x31, 0x3b, 0x3b, 
    0x41, 0x41, 0x48, 0x48, 0x5, 0x2, 0x24, 0x24, 0x2e, 0x2e, 0x52, 0x52, 
    0x4, 0x2, 0x30, 0x30, 0x3e, 0x3e, 0x4, 0x2, 0x3f, 0x3f, 0x50, 0x50, 
    0x4, 0x2, 0x17, 0x17, 0x44, 0x44, 0x3, 0x2, 0x57, 0x5c, 0x4, 0x2, 0x63, 
    0x63, 0x78, 0x78, 0x4, 0x2, 0x18, 0x18, 0x54, 0x54, 0x3, 0x2, 0x1d, 
    0x1e, 0x4, 0x2, 0x28, 0x28, 0x37, 0x37, 0x3, 0x2, 0x38, 0x3a, 0x3, 0x2, 
    0x3, 0x9, 0x2, 0x972, 0x2, 0x185, 0x3, 0x2, 0x2, 0x2, 0x4, 0x195, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x199, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1a5, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1ad, 0x3, 0x2, 0x2, 
    0x2, 0xe, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x12, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x16, 
    0x1d9, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1ed, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f5, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x224, 0x3, 0x2, 0x2, 0x2, 0x22, 0x244, 0x3, 0x2, 
    0x2, 0x2, 0x24, 0x246, 0x3, 0x2, 0x2, 0x2, 0x26, 0x25b, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x278, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x27a, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x30, 
    0x291, 0x3, 0x2, 0x2, 0x2, 0x32, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x34, 0x29c, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x38, 0x2b8, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x2cc, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2d6, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x44, 0x2e6, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x48, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x2fd, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x305, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x30d, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x315, 0x3, 0x2, 0x2, 0x2, 0x52, 0x31d, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x325, 0x3, 0x2, 0x2, 0x2, 0x56, 0x32d, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x33d, 0x3, 0x2, 0x2, 
    0x2, 0x5c, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x347, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x358, 0x3, 0x2, 0x2, 0x2, 0x62, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0x369, 0x3, 0x2, 0x2, 0x2, 0x66, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x68, 0x379, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x39b, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x70, 0x3c2, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x74, 0x3cc, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x78, 0x3db, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x3fe, 0x3, 0x2, 0x2, 0x2, 0x80, 0x400, 0x3, 0x2, 0x2, 0x2, 0x82, 0x42b, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x86, 0x437, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x439, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x444, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x449, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x452, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0x454, 0x3, 0x2, 0x2, 0x2, 0x92, 0x456, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x96, 0x463, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x466, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x475, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0x477, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x491, 0x3, 
    0x2, 0x2, 0x2, 0xa2, 0x497, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x499, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x4b9, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0xac, 0x4c5, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0x4e0, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x4eb, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0xba, 0x4f4, 0x3, 
    0x2, 0x2, 0x2, 0xbc, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x4f9, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0x506, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x508, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0x50f, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x513, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0x51f, 0x3, 0x2, 0x2, 0x2, 0xca, 0x529, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0x52f, 0x3, 0x2, 0x2, 0x2, 0xce, 0x53a, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x546, 
    0x3, 0x2, 0x2, 0x2, 0xd2, 0x548, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x553, 0x3, 
    0x2, 0x2, 0x2, 0xd6, 0x561, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x567, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0x569, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x570, 0x3, 0x2, 0x2, 
    0x2, 0xde, 0x585, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x587, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0x595, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x5a2, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0x5aa, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x5b8, 0x3, 0x2, 0x2, 0x2, 0xea, 0x5cb, 
    0x3, 0x2, 0x2, 0x2, 0xec, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0xee, 0x5ef, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x5f6, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x5fb, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0x5ff, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x60b, 0x3, 0x2, 0x2, 0x2, 
    0xfc, 0x616, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x626, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x63d, 0x3, 0x2, 0x2, 0x2, 0x102, 0x642, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x656, 0x3, 0x2, 0x2, 0x2, 0x106, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x666, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x678, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x69e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x6a7, 0x3, 0x2, 0x2, 0x2, 0x110, 
    0x6ac, 0x3, 0x2, 0x2, 0x2, 0x112, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x6b2, 0x3, 0x2, 0x2, 0x2, 0x116, 0x6c0, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x6cb, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x6cd, 0x3, 0x2, 0x2, 0x2, 0x11c, 
    0x6ee, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x6f5, 0x3, 0x2, 0x2, 0x2, 0x122, 0x6f7, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x6ff, 0x3, 0x2, 0x2, 0x2, 0x126, 0x717, 0x3, 0x2, 0x2, 0x2, 0x128, 
    0x71b, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x735, 0x3, 0x2, 0x2, 0x2, 0x12c, 
    0x738, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x130, 
    0x73e, 0x3, 0x2, 0x2, 0x2, 0x132, 0x741, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x744, 0x3, 0x2, 0x2, 0x2, 0x136, 0x753, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x768, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x13c, 
    0x76c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x76e, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x771, 0x3, 0x2, 0x2, 0x2, 0x142, 0x775, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x779, 0x3, 0x2, 0x2, 0x2, 0x146, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x148, 
    0x78a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x795, 0x3, 0x2, 0x2, 0x2, 0x14c, 
    0x797, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x150, 
    0x7a0, 0x3, 0x2, 0x2, 0x2, 0x152, 0x7a6, 0x3, 0x2, 0x2, 0x2, 0x154, 
    0x7b0, 0x3, 0x2, 0x2, 0x2, 0x156, 0x7bb, 0x3, 0x2, 0x2, 0x2, 0x158, 
    0x7ca, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x15c, 
    0x7de, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x7e0, 0x3, 0x2, 0x2, 0x2, 0x160, 
    0x7f1, 0x3, 0x2, 0x2, 0x2, 0x162, 0x7f3, 0x3, 0x2, 0x2, 0x2, 0x164, 
    0x7fd, 0x3, 0x2, 0x2, 0x2, 0x166, 0x802, 0x3, 0x2, 0x2, 0x2, 0x168, 
    0x807, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x80b, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x813, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x817, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x826, 0x3, 0x2, 0x2, 0x2, 0x172, 0x828, 0x3, 0x2, 0x2, 0x2, 0x174, 
    0x82e, 0x3, 0x2, 0x2, 0x2, 0x176, 0x830, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x837, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x84b, 0x3, 0x2, 0x2, 0x2, 0x17c, 
    0x880, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x882, 0x3, 0x2, 0x2, 0x2, 0x180, 
    0x888, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x5, 0x7a, 0x3e, 0x2, 0x183, 
    0x184, 0x8, 0x2, 0x1, 0x2, 0x184, 0x186, 0x3, 0x2, 0x2, 0x2, 0x185, 
    0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 
    0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x2, 0x2, 0x3, 0x188, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18b, 0x5, 0x17e, 0xc0, 0x2, 0x18a, 
    0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 
    0x196, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x196, 0x7, 0x47, 0x2, 0x2, 0x18f, 
    0x190, 0x7, 0x57, 0x2, 0x2, 0x190, 0x191, 0x5, 0x5c, 0x2f, 0x2, 0x191, 
    0x192, 0x7, 0x58, 0x2, 0x2, 0x192, 0x196, 0x3, 0x2, 0x2, 0x2, 0x193, 
    0x196, 0x5, 0x6, 0x4, 0x2, 0x194, 0x196, 0x5, 0xe, 0x8, 0x2, 0x195, 
    0x18a, 0x3, 0x2, 0x2, 0x2, 0x195, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x195, 
    0x18f, 0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x195, 
    0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 0x5, 0x3, 0x2, 0x2, 0x2, 0x197, 0x19a, 
    0x5, 0x8, 0x5, 0x2, 0x198, 0x19a, 0x5, 0xa, 0x6, 0x2, 0x199, 0x197, 
    0x3, 0x2, 0x2, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x19b, 0x1a6, 0x7, 0x86, 0x2, 0x2, 0x19c, 0x1a6, 0x5, 
    0x14c, 0xa7, 0x2, 0x19d, 0x1a6, 0x5, 0x13e, 0xa0, 0x2, 0x19e, 0x1a6, 
    0x5, 0x14e, 0xa8, 0x2, 0x19f, 0x1a2, 0x7, 0x65, 0x2, 0x2, 0x1a0, 0x1a3, 
    0x5, 0x118, 0x8d, 0x2, 0x1a1, 0x1a3, 0x5, 0xa4, 0x53, 0x2, 0x1a2, 0x1a0, 
    0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a6, 0x5, 0x15a, 0xae, 0x2, 0x1a5, 0x19b, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x19d, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x19f, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x1a7, 0x1a9, 0x5, 0xc, 0x7, 0x2, 0x1a8, 0x1aa, 0x7, 
    0x46, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 
    0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x5, 
    0x8, 0x5, 0x2, 0x1ac, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b1, 0x8, 0x7, 
    0x1, 0x2, 0x1ae, 0x1b2, 0x5, 0xa2, 0x52, 0x2, 0x1af, 0x1b2, 0x5, 0xba, 
    0x5e, 0x2, 0x1b0, 0x1b2, 0x5, 0xa4, 0x53, 0x2, 0x1b1, 0x1ae, 0x3, 0x2, 
    0x2, 0x2, 0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b0, 0x3, 0x2, 
    0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x81, 0x2, 0x2, 0x1b4, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x1bb, 0xc, 0x3, 0x2, 0x2, 0x1b6, 0x1bc, 0x7, 0x86, 
    0x2, 0x2, 0x1b7, 0x1b9, 0x7, 0x46, 0x2, 0x2, 0x1b8, 0x1b7, 0x3, 0x2, 
    0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 
    0x2, 0x2, 0x1ba, 0x1bc, 0x5, 0x158, 0xad, 0x2, 0x1bb, 0x1b6, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 0x2, 
    0x2, 0x2, 0x1bd, 0x1bf, 0x7, 0x81, 0x2, 0x2, 0x1be, 0x1b5, 0x3, 0x2, 
    0x2, 0x2, 0x1bf, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x1c2, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c5, 0x5, 0x10, 0x9, 
    0x2, 0x1c4, 0x1c6, 0x5, 0x1e, 0x10, 0x2, 0x1c5, 0x1c4, 0x3, 0x2, 0x2, 
    0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c8, 0x5, 0x66, 0x34, 0x2, 0x1c8, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1cb, 0x7, 0x59, 0x2, 0x2, 0x1ca, 0x1cc, 0x5, 0x12, 0xa, 
    0x2, 0x1cb, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x7, 0x5a, 0x2, 
    0x2, 0x1ce, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d6, 0x5, 0x16, 0xc, 
    0x2, 0x1d0, 0x1d3, 0x5, 0x14, 0xb, 0x2, 0x1d1, 0x1d2, 0x7, 0x7c, 0x2, 
    0x2, 0x1d2, 0x1d4, 0x5, 0x16, 0xc, 0x2, 0x1d3, 0x1d1, 0x3, 0x2, 0x2, 
    0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d6, 0x3, 0x2, 0x2, 
    0x2, 0x1d5, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d0, 0x3, 0x2, 0x2, 
    0x2, 0x1d6, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x9, 0x2, 0x2, 0x2, 
    0x1d8, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1de, 0x5, 0x18, 0xd, 0x2, 
    0x1da, 0x1db, 0x7, 0x7c, 0x2, 0x2, 0x1db, 0x1dd, 0x5, 0x18, 0xd, 0x2, 
    0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e0, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 0x2, 0x2, 
    0x1df, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1e1, 0x1e3, 0x7, 0x85, 0x2, 0x2, 0x1e2, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e7, 0x5, 0x1a, 0xe, 0x2, 0x1e5, 0x1e7, 0x5, 0x1c, 0xf, 0x2, 0x1e6, 
    0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e7, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ea, 0x7, 0x63, 0x2, 0x2, 0x1e9, 
    0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
    0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ee, 0x7, 0x86, 0x2, 0x2, 0x1ec, 
    0x1ee, 0x7, 0x47, 0x2, 0x2, 0x1ed, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ed, 
    0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f1, 
    0x7, 0x63, 0x2, 0x2, 0x1f0, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 
    0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 
    0x7, 0x86, 0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0x10e, 0x88, 0x2, 0x1f4, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f7, 0x7, 0x57, 0x2, 0x2, 0x1f6, 0x1f8, 
    0x5, 0x104, 0x83, 0x2, 0x1f7, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 
    0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fb, 
    0x7, 0x58, 0x2, 0x2, 0x1fa, 0x1fc, 0x7, 0x31, 0x2, 0x2, 0x1fb, 0x1fa, 
    0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fe, 
    0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1ff, 0x5, 0x174, 0xbb, 0x2, 0x1fe, 0x1fd, 
    0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x201, 
    0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 0x5, 0xce, 0x68, 0x2, 0x201, 0x200, 
    0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 0x202, 0x204, 
    0x3, 0x2, 0x2, 0x2, 0x203, 0x205, 0x5, 0xec, 0x77, 0x2, 0x204, 0x203, 
    0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x3, 0x2, 0x2, 0x2, 0x205, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x206, 0x207, 0x8, 0x11, 0x1, 0x2, 0x207, 0x225, 0x5, 
    0x4, 0x3, 0x2, 0x208, 0x20b, 0x5, 0xa0, 0x51, 0x2, 0x209, 0x20b, 0x5, 
    0x162, 0xb2, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x209, 0x3, 
    0x2, 0x2, 0x2, 0x20b, 0x212, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20e, 0x7, 
    0x57, 0x2, 0x2, 0x20d, 0x20f, 0x5, 0x24, 0x13, 0x2, 0x20e, 0x20d, 0x3, 
    0x2, 0x2, 0x2, 0x20e, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 
    0x2, 0x2, 0x2, 0x210, 0x213, 0x7, 0x58, 0x2, 0x2, 0x211, 0x213, 0x5, 
    0x116, 0x8c, 0x2, 0x212, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x212, 0x211, 0x3, 
    0x2, 0x2, 0x2, 0x213, 0x225, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x9, 
    0x3, 0x2, 0x2, 0x215, 0x216, 0x7, 0x68, 0x2, 0x2, 0x216, 0x217, 0x5, 
    0xf8, 0x7d, 0x2, 0x217, 0x218, 0x7, 0x69, 0x2, 0x2, 0x218, 0x219, 0x7, 
    0x57, 0x2, 0x2, 0x219, 0x21a, 0x5, 0x5c, 0x2f, 0x2, 0x21a, 0x21b, 0x7, 
    0x58, 0x2, 0x2, 0x21b, 0x225, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x5, 
    0x22, 0x12, 0x2, 0x21d, 0x220, 0x7, 0x57, 0x2, 0x2, 0x21e, 0x221, 0x5, 
    0x5c, 0x2f, 0x2, 0x21f, 0x221, 0x5, 0xf8, 0x7d, 0x2, 0x220, 0x21e, 0x3, 
    0x2, 0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 
    0x2, 0x2, 0x2, 0x222, 0x223, 0x7, 0x58, 0x2, 0x2, 0x223, 0x225, 0x3, 
    0x2, 0x2, 0x2, 0x224, 0x206, 0x3, 0x2, 0x2, 0x2, 0x224, 0x20a, 0x3, 
    0x2, 0x2, 0x2, 0x224, 0x214, 0x3, 0x2, 0x2, 0x2, 0x224, 0x21c, 0x3, 
    0x2, 0x2, 0x2, 0x225, 0x241, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0xc, 
    0x9, 0x2, 0x2, 0x227, 0x22a, 0x7, 0x59, 0x2, 0x2, 0x228, 0x22b, 0x5, 
    0x5c, 0x2f, 0x2, 0x229, 0x22b, 0x5, 0x116, 0x8c, 0x2, 0x22a, 0x228, 
    0x3, 0x2, 0x2, 0x2, 0x22a, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 
    0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x7, 0x5a, 0x2, 0x2, 0x22d, 0x240, 
    0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0xc, 0x8, 0x2, 0x2, 0x22f, 0x231, 
    0x7, 0x57, 0x2, 0x2, 0x230, 0x232, 0x5, 0x24, 0x13, 0x2, 0x231, 0x230, 
    0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 
    0x3, 0x2, 0x2, 0x2, 0x233, 0x240, 0x7, 0x58, 0x2, 0x2, 0x234, 0x235, 
    0xc, 0x6, 0x2, 0x2, 0x235, 0x23b, 0x9, 0x4, 0x2, 0x2, 0x236, 0x238, 
    0x7, 0x46, 0x2, 0x2, 0x237, 0x236, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 
    0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23c, 
    0x5, 0x6, 0x4, 0x2, 0x23a, 0x23c, 0x5, 0x26, 0x14, 0x2, 0x23b, 0x237, 
    0x3, 0x2, 0x2, 0x2, 0x23b, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x240, 
    0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0xc, 0x5, 0x2, 0x2, 0x23e, 0x240, 
    0x9, 0x5, 0x2, 0x2, 0x23f, 0x226, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x22e, 
    0x3, 0x2, 0x2, 0x2, 0x23f, 0x234, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x23d, 
    0x3, 0x2, 0x2, 0x2, 0x240, 0x243, 0x3, 0x2, 0x2, 0x2, 0x241, 0x23f, 
    0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x7, 
    0x4d, 0x2, 0x2, 0x245, 0x23, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x5, 
    0x114, 0x8b, 0x2, 0x247, 0x25, 0x3, 0x2, 0x2, 0x2, 0x248, 0x24a, 0x5, 
    0xc, 0x7, 0x2, 0x249, 0x248, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 
    0x2, 0x2, 0x2, 0x24a, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x5, 
    0xa2, 0x52, 0x2, 0x24c, 0x24d, 0x7, 0x81, 0x2, 0x2, 0x24d, 0x24f, 0x3, 
    0x2, 0x2, 0x2, 0x24e, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 
    0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x7, 
    0x65, 0x2, 0x2, 0x251, 0x25c, 0x5, 0xa2, 0x52, 0x2, 0x252, 0x253, 0x5, 
    0xc, 0x7, 0x2, 0x253, 0x254, 0x7, 0x46, 0x2, 0x2, 0x254, 0x255, 0x5, 
    0x158, 0xad, 0x2, 0x255, 0x256, 0x7, 0x81, 0x2, 0x2, 0x256, 0x257, 0x7, 
    0x65, 0x2, 0x2, 0x257, 0x258, 0x5, 0xa2, 0x52, 0x2, 0x258, 0x25c, 0x3, 
    0x2, 0x2, 0x2, 0x259, 0x25a, 0x7, 0x65, 0x2, 0x2, 0x25a, 0x25c, 0x5, 
    0xa4, 0x53, 0x2, 0x25b, 0x249, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x252, 0x3, 
    0x2, 0x2, 0x2, 0x25b, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x25d, 0x279, 0x5, 0x20, 0x11, 0x2, 0x25e, 0x263, 0x7, 0x7a, 
    0x2, 0x2, 0x25f, 0x263, 0x7, 0x7b, 0x2, 0x2, 0x260, 0x263, 0x5, 0x2a, 
    0x16, 0x2, 0x261, 0x263, 0x7, 0x40, 0x2, 0x2, 0x262, 0x25e, 0x3, 0x2, 
    0x2, 0x2, 0x262, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 
    0x2, 0x2, 0x262, 0x261, 0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0x3, 0x2, 
    0x2, 0x2, 0x264, 0x279, 0x5, 0x28, 0x15, 0x2, 0x265, 0x26e, 0x7, 0x40, 
    0x2, 0x2, 0x266, 0x267, 0x7, 0x57, 0x2, 0x2, 0x267, 0x268, 0x5, 0xf8, 
    0x7d, 0x2, 0x268, 0x269, 0x7, 0x58, 0x2, 0x2, 0x269, 0x26f, 0x3, 0x2, 
    0x2, 0x2, 0x26a, 0x26b, 0x7, 0x85, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x57, 
    0x2, 0x2, 0x26c, 0x26d, 0x7, 0x86, 0x2, 0x2, 0x26d, 0x26f, 0x7, 0x58, 
    0x2, 0x2, 0x26e, 0x266, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26a, 0x3, 0x2, 
    0x2, 0x2, 0x26f, 0x279, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x7, 0xd, 
    0x2, 0x2, 0x271, 0x272, 0x7, 0x57, 0x2, 0x2, 0x272, 0x273, 0x5, 0xf8, 
    0x7d, 0x2, 0x273, 0x274, 0x7, 0x58, 0x2, 0x2, 0x274, 0x279, 0x3, 0x2, 
    0x2, 0x2, 0x275, 0x279, 0x5, 0x3a, 0x1e, 0x2, 0x276, 0x279, 0x5, 0x2c, 
    0x17, 0x2, 0x277, 0x279, 0x5, 0x38, 0x1d, 0x2, 0x278, 0x25d, 0x3, 0x2, 
    0x2, 0x2, 0x278, 0x262, 0x3, 0x2, 0x2, 0x2, 0x278, 0x265, 0x3, 0x2, 
    0x2, 0x2, 0x278, 0x270, 0x3, 0x2, 0x2, 0x2, 0x278, 0x275, 0x3, 0x2, 
    0x2, 0x2, 0x278, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x277, 0x3, 0x2, 
    0x2, 0x2, 0x279, 0x29, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x9, 0x6, 0x2, 
    0x2, 0x27b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27e, 0x7, 0x81, 0x2, 
    0x2, 0x27d, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x3, 0x2, 0x2, 
    0x2, 0x27e, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x281, 0x7, 0x33, 0x2, 
    0x2, 0x280, 0x282, 0x5, 0x2e, 0x18, 0x2, 0x281, 0x280, 0x3, 0x2, 0x2, 
    0x2, 0x281, 0x282, 0x3, 0x2, 0x2, 0x2, 0x282, 0x288, 0x3, 0x2, 0x2, 
    0x2, 0x283, 0x289, 0x5, 0x30, 0x19, 0x2, 0x284, 0x285, 0x7, 0x57, 0x2, 
    0x2, 0x285, 0x286, 0x5, 0xf8, 0x7d, 0x2, 0x286, 0x287, 0x7, 0x58, 0x2, 
    0x2, 0x287, 0x289, 0x3, 0x2, 0x2, 0x2, 0x288, 0x283, 0x3, 0x2, 0x2, 
    0x2, 0x288, 0x284, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28b, 0x3, 0x2, 0x2, 
    0x2, 0x28a, 0x28c, 0x5, 0x36, 0x1c, 0x2, 0x28b, 0x28a, 0x3, 0x2, 0x2, 
    0x2, 0x28b, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x28d, 0x28e, 0x7, 0x57, 0x2, 0x2, 0x28e, 0x28f, 0x5, 0x24, 0x13, 0x2, 
    0x28f, 0x290, 0x7, 0x58, 0x2, 0x2, 0x290, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x291, 0x293, 0x5, 0x98, 0x4d, 0x2, 0x292, 0x294, 0x5, 0x32, 0x1a, 0x2, 
    0x293, 0x292, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x31, 0x3, 0x2, 0x2, 0x2, 0x295, 0x297, 0x5, 0xee, 0x78, 0x2, 
    0x296, 0x298, 0x5, 0x32, 0x1a, 0x2, 0x297, 0x296, 0x3, 0x2, 0x2, 0x2, 
    0x297, 0x298, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29b, 0x3, 0x2, 0x2, 0x2, 
    0x299, 0x29b, 0x5, 0x34, 0x1b, 0x2, 0x29a, 0x295, 0x3, 0x2, 0x2, 0x2, 
    0x29a, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x33, 0x3, 0x2, 0x2, 0x2, 0x29c, 
    0x29d, 0x8, 0x1b, 0x1, 0x2, 0x29d, 0x29e, 0x7, 0x59, 0x2, 0x2, 0x29e, 
    0x29f, 0x5, 0x5c, 0x2f, 0x2, 0x29f, 0x2a1, 0x7, 0x5a, 0x2, 0x2, 0x2a0, 
    0x2a2, 0x5, 0xce, 0x68, 0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a1, 
    0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
    0x2a4, 0xc, 0x3, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x59, 0x2, 0x2, 0x2a5, 
    0x2a6, 0x5, 0x5e, 0x30, 0x2, 0x2a6, 0x2a8, 0x7, 0x5a, 0x2, 0x2, 0x2a7, 
    0x2a9, 0x5, 0xce, 0x68, 0x2, 0x2a8, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a8, 
    0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
    0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ac, 
    0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ad, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b1, 
    0x7, 0x57, 0x2, 0x2, 0x2b0, 0x2b2, 0x5, 0x24, 0x13, 0x2, 0x2b1, 0x2b0, 
    0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 
    0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b6, 0x7, 0x58, 0x2, 0x2, 0x2b4, 0x2b6, 
    0x5, 0x116, 0x8c, 0x2, 0x2b5, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b4, 
    0x3, 0x2, 0x2, 0x2, 0x2b6, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b9, 0x7, 
    0x81, 0x2, 0x2, 0x2b8, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 0x3, 
    0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bd, 0x7, 
    0x1e, 0x2, 0x2, 0x2bb, 0x2bc, 0x7, 0x59, 0x2, 0x2, 0x2bc, 0x2be, 0x7, 
    0x5a, 0x2, 0x2, 0x2bd, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2be, 0x3, 
    0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x5, 
    0x3c, 0x1f, 0x2, 0x2c0, 0x39, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x7, 
    0x34, 0x2, 0x2, 0x2c2, 0x2c3, 0x7, 0x57, 0x2, 0x2, 0x2c3, 0x2c4, 0x5, 
    0x5c, 0x2f, 0x2, 0x2c4, 0x2c5, 0x7, 0x58, 0x2, 0x2, 0x2c5, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x2c6, 0x2cd, 0x5, 0x28, 0x15, 0x2, 0x2c7, 0x2c8, 0x7, 
    0x57, 0x2, 0x2, 0x2c8, 0x2c9, 0x5, 0xf8, 0x7d, 0x2, 0x2c9, 0x2ca, 0x7, 
    0x58, 0x2, 0x2, 0x2ca, 0x2cb, 0x5, 0x3c, 0x1f, 0x2, 0x2cb, 0x2cd, 0x3, 
    0x2, 0x2, 0x2, 0x2cc, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2c7, 0x3, 
    0x2, 0x2, 0x2, 0x2cd, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d3, 0x5, 0x3c, 
    0x1f, 0x2, 0x2cf, 0x2d0, 0x9, 0x7, 0x2, 0x2, 0x2d0, 0x2d2, 0x5, 0x3c, 
    0x1f, 0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d5, 0x3, 0x2, 
    0x2, 0x2, 0x2d3, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 
    0x2, 0x2, 0x2d4, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d3, 0x3, 0x2, 0x2, 
    0x2, 0x2d6, 0x2db, 0x5, 0x3e, 0x20, 0x2, 0x2d7, 0x2d8, 0x9, 0x8, 0x2, 
    0x2, 0x2d8, 0x2da, 0x5, 0x3e, 0x20, 0x2, 0x2d9, 0x2d7, 0x3, 0x2, 0x2, 
    0x2, 0x2da, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 
    0x2, 0x2db, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x2dd, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2e3, 0x5, 0x40, 0x21, 0x2, 
    0x2df, 0x2e0, 0x9, 0x9, 0x2, 0x2, 0x2e0, 0x2e2, 0x5, 0x40, 0x21, 0x2, 
    0x2e1, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 0x3, 0x2, 0x2, 0x2, 
    0x2e3, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 0x2, 
    0x2e4, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e6, 
    0x2ec, 0x5, 0x42, 0x22, 0x2, 0x2e7, 0x2e8, 0x5, 0x46, 0x24, 0x2, 0x2e8, 
    0x2e9, 0x5, 0x42, 0x22, 0x2, 0x2e9, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2ea, 
    0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ec, 
    0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ed, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 
    0x7, 0x69, 0x2, 0x2, 0x2f0, 0x2f4, 0x7, 0x69, 0x2, 0x2, 0x2f1, 0x2f2, 
    0x7, 0x68, 0x2, 0x2, 0x2f2, 0x2f4, 0x7, 0x68, 0x2, 0x2, 0x2f3, 0x2ef, 
    0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x2f5, 0x2fa, 0x5, 0x44, 0x23, 0x2, 0x2f6, 0x2f7, 0x9, 
    0xa, 0x2, 0x2, 0x2f7, 0x2f9, 0x5, 0x44, 0x23, 0x2, 0x2f8, 0x2f6, 0x3, 
    0x2, 0x2, 0x2, 0x2f9, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f8, 0x3, 
    0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x2fc, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x302, 0x5, 0x48, 
    0x25, 0x2, 0x2fe, 0x2ff, 0x9, 0xb, 0x2, 0x2, 0x2ff, 0x301, 0x5, 0x48, 
    0x25, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x301, 0x304, 0x3, 0x2, 
    0x2, 0x2, 0x302, 0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 
    0x2, 0x2, 0x303, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x304, 0x302, 0x3, 0x2, 0x2, 
    0x2, 0x305, 0x30a, 0x5, 0x4a, 0x26, 0x2, 0x306, 0x307, 0x7, 0x63, 0x2, 
    0x2, 0x307, 0x309, 0x5, 0x4a, 0x26, 0x2, 0x308, 0x306, 0x3, 0x2, 0x2, 
    0x2, 0x309, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x308, 0x3, 0x2, 0x2, 
    0x2, 0x30a, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x30c, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x312, 0x5, 0x4c, 0x27, 0x2, 
    0x30e, 0x30f, 0x7, 0x62, 0x2, 0x2, 0x30f, 0x311, 0x5, 0x4c, 0x27, 0x2, 
    0x310, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x311, 0x314, 0x3, 0x2, 0x2, 0x2, 
    0x312, 0x310, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x3, 0x2, 0x2, 0x2, 
    0x313, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x314, 0x312, 0x3, 0x2, 0x2, 0x2, 0x315, 
    0x31a, 0x5, 0x4e, 0x28, 0x2, 0x316, 0x317, 0x7, 0x64, 0x2, 0x2, 0x317, 
    0x319, 0x5, 0x4e, 0x28, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x319, 
    0x31c, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31a, 
    0x31b, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31a, 
    0x3, 0x2, 0x2, 0x2, 0x31d, 0x322, 0x5, 0x50, 0x29, 0x2, 0x31e, 0x31f, 
    0x7, 0x78, 0x2, 0x2, 0x31f, 0x321, 0x5, 0x50, 0x29, 0x2, 0x320, 0x31e, 
    0x3, 0x2, 0x2, 0x2, 0x321, 0x324, 0x3, 0x2, 0x2, 0x2, 0x322, 0x320, 
    0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x3, 0x2, 0x2, 0x2, 0x323, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x324, 0x322, 0x3, 0x2, 0x2, 0x2, 0x325, 0x32a, 0x5, 
    0x52, 0x2a, 0x2, 0x326, 0x327, 0x7, 0x79, 0x2, 0x2, 0x327, 0x329, 0x5, 
    0x52, 0x2a, 0x2, 0x328, 0x326, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32c, 0x3, 
    0x2, 0x2, 0x2, 0x32a, 0x328, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x3, 
    0x2, 0x2, 0x2, 0x32b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32a, 0x3, 0x2, 
    0x2, 0x2, 0x32d, 0x333, 0x5, 0x54, 0x2b, 0x2, 0x32e, 0x32f, 0x7, 0x7f, 
    0x2, 0x2, 0x32f, 0x330, 0x5, 0x5c, 0x2f, 0x2, 0x330, 0x331, 0x7, 0x80, 
    0x2, 0x2, 0x331, 0x332, 0x5, 0x58, 0x2d, 0x2, 0x332, 0x334, 0x3, 0x2, 
    0x2, 0x2, 0x333, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x333, 0x334, 0x3, 0x2, 
    0x2, 0x2, 0x334, 0x57, 0x3, 0x2, 0x2, 0x2, 0x335, 0x33c, 0x5, 0x56, 
    0x2c, 0x2, 0x336, 0x337, 0x5, 0x54, 0x2b, 0x2, 0x337, 0x338, 0x5, 0x5a, 
    0x2e, 0x2, 0x338, 0x339, 0x5, 0x112, 0x8a, 0x2, 0x339, 0x33c, 0x3, 0x2, 
    0x2, 0x2, 0x33a, 0x33c, 0x5, 0x172, 0xba, 0x2, 0x33b, 0x335, 0x3, 0x2, 
    0x2, 0x2, 0x33b, 0x336, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33a, 0x3, 0x2, 
    0x2, 0x2, 0x33c, 0x59, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x9, 0xc, 0x2, 
    0x2, 0x33e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x344, 0x5, 0x58, 0x2d, 
    0x2, 0x340, 0x341, 0x7, 0x7c, 0x2, 0x2, 0x341, 0x343, 0x5, 0x58, 0x2d, 
    0x2, 0x342, 0x340, 0x3, 0x2, 0x2, 0x2, 0x343, 0x346, 0x3, 0x2, 0x2, 
    0x2, 0x344, 0x342, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0x3, 0x2, 0x2, 
    0x2, 0x345, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x346, 0x344, 0x3, 0x2, 0x2, 0x2, 
    0x347, 0x348, 0x5, 0x56, 0x2c, 0x2, 0x348, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x349, 0x359, 0x5, 0x62, 0x32, 0x2, 0x34a, 0x34b, 0x5, 0x78, 0x3d, 0x2, 
    0x34b, 0x34c, 0x8, 0x31, 0x1, 0x2, 0x34c, 0x359, 0x3, 0x2, 0x2, 0x2, 
    0x34d, 0x34f, 0x5, 0xce, 0x68, 0x2, 0x34e, 0x34d, 0x3, 0x2, 0x2, 0x2, 
    0x34e, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x356, 0x3, 0x2, 0x2, 0x2, 
    0x350, 0x357, 0x5, 0x64, 0x33, 0x2, 0x351, 0x357, 0x5, 0x66, 0x34, 0x2, 
    0x352, 0x357, 0x5, 0x6a, 0x36, 0x2, 0x353, 0x357, 0x5, 0x6e, 0x38, 0x2, 
    0x354, 0x357, 0x5, 0x76, 0x3c, 0x2, 0x355, 0x357, 0x5, 0x168, 0xb5, 
    0x2, 0x356, 0x350, 0x3, 0x2, 0x2, 0x2, 0x356, 0x351, 0x3, 0x2, 0x2, 
    0x2, 0x356, 0x352, 0x3, 0x2, 0x2, 0x2, 0x356, 0x353, 0x3, 0x2, 0x2, 
    0x2, 0x356, 0x354, 0x3, 0x2, 0x2, 0x2, 0x356, 0x355, 0x3, 0x2, 0x2, 
    0x2, 0x357, 0x359, 0x3, 0x2, 0x2, 0x2, 0x358, 0x349, 0x3, 0x2, 0x2, 
    0x2, 0x358, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x358, 0x34e, 0x3, 0x2, 0x2, 
    0x2, 0x359, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x8, 0x31, 0x1, 
    0x2, 0x35b, 0x61, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35e, 0x5, 0xce, 0x68, 
    0x2, 0x35d, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 0x3, 0x2, 0x2, 
    0x2, 0x35e, 0x363, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x364, 0x7, 0x86, 0x2, 
    0x2, 0x360, 0x361, 0x7, 0x12, 0x2, 0x2, 0x361, 0x364, 0x5, 0x5e, 0x30, 
    0x2, 0x362, 0x364, 0x7, 0x1d, 0x2, 0x2, 0x363, 0x35f, 0x3, 0x2, 0x2, 
    0x2, 0x363, 0x360, 0x3, 0x2, 0x2, 0x2, 0x363, 0x362, 0x3, 0x2, 0x2, 
    0x2, 0x364, 0x365, 0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x7, 0x80, 0x2, 
    0x2, 0x366, 0x367, 0x5, 0x60, 0x31, 0x2, 0x367, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x368, 0x36a, 0x5, 0x5c, 0x2f, 0x2, 0x369, 0x368, 0x3, 0x2, 0x2, 
    0x2, 0x369, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 0x3, 0x2, 0x2, 
    0x2, 0x36b, 0x36c, 0x7, 0x82, 0x2, 0x2, 0x36c, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x36d, 0x371, 0x7, 0x5b, 0x2, 0x2, 0x36e, 0x36f, 0x5, 0x68, 0x35, 
    0x2, 0x36f, 0x370, 0x8, 0x34, 0x1, 0x2, 0x370, 0x372, 0x3, 0x2, 0x2, 
    0x2, 0x371, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x371, 0x372, 0x3, 0x2, 0x2, 
    0x2, 0x372, 0x373, 0x3, 0x2, 0x2, 0x2, 0x373, 0x374, 0x7, 0x5c, 0x2, 
    0x2, 0x374, 0x375, 0x8, 0x34, 0x1, 0x2, 0x375, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x376, 0x377, 0x5, 0x60, 0x31, 0x2, 0x377, 0x378, 0x8, 0x35, 0x1, 
    0x2, 0x378, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x379, 0x376, 0x3, 0x2, 0x2, 
    0x2, 0x37a, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x379, 0x3, 0x2, 0x2, 
    0x2, 0x37b, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 0x3, 0x2, 0x2, 
    0x2, 0x37d, 0x37e, 0x8, 0x35, 0x1, 0x2, 0x37e, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x37f, 0x380, 0x7, 0x2d, 0x2, 0x2, 0x380, 0x381, 0x7, 0x57, 0x2, 
    0x2, 0x381, 0x382, 0x5, 0x6c, 0x37, 0x2, 0x382, 0x383, 0x7, 0x58, 0x2, 
    0x2, 0x383, 0x386, 0x5, 0x60, 0x31, 0x2, 0x384, 0x385, 0x7, 0x22, 0x2, 
    0x2, 0x385, 0x387, 0x5, 0x60, 0x31, 0x2, 0x386, 0x384, 0x3, 0x2, 0x2, 
    0x2, 0x386, 0x387, 0x3, 0x2, 0x2, 0x2, 0x387, 0x38f, 0x3, 0x2, 0x2, 
    0x2, 0x388, 0x389, 0x7, 0x45, 0x2, 0x2, 0x389, 0x38a, 0x7, 0x57, 0x2, 
    0x2, 0x38a, 0x38b, 0x5, 0x6c, 0x37, 0x2, 0x38b, 0x38c, 0x7, 0x58, 0x2, 
    0x2, 0x38c, 0x38d, 0x5, 0x60, 0x31, 0x2, 0x38d, 0x38f, 0x3, 0x2, 0x2, 
    0x2, 0x38e, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x388, 0x3, 0x2, 0x2, 
    0x2, 0x38f, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x390, 0x39c, 0x5, 0x5c, 0x2f, 
    0x2, 0x391, 0x393, 0x5, 0xce, 0x68, 0x2, 0x392, 0x391, 0x3, 0x2, 0x2, 
    0x2, 0x392, 0x393, 0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x395, 0x5, 0x8c, 0x47, 0x2, 0x395, 0x399, 0x5, 0xe4, 0x73, 
    0x2, 0x396, 0x397, 0x7, 0x67, 0x2, 0x2, 0x397, 0x39a, 0x5, 0x112, 0x8a, 
    0x2, 0x398, 0x39a, 0x5, 0x116, 0x8c, 0x2, 0x399, 0x396, 0x3, 0x2, 0x2, 
    0x2, 0x399, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39c, 0x3, 0x2, 0x2, 
    0x2, 0x39b, 0x390, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x392, 0x3, 0x2, 0x2, 
    0x2, 0x39c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 0x7, 0x56, 0x2, 
    0x2, 0x39e, 0x39f, 0x7, 0x57, 0x2, 0x2, 0x39f, 0x3a0, 0x5, 0x6c, 0x37, 
    0x2, 0x3a0, 0x3a1, 0x7, 0x58, 0x2, 0x2, 0x3a1, 0x3a2, 0x5, 0x60, 0x31, 
    0x2, 0x3a2, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 0x7, 0x1f, 0x2, 
    0x2, 0x3a4, 0x3a5, 0x5, 0x60, 0x31, 0x2, 0x3a5, 0x3a6, 0x7, 0x56, 0x2, 
    0x2, 0x3a6, 0x3a7, 0x7, 0x57, 0x2, 0x2, 0x3a7, 0x3a8, 0x5, 0x5c, 0x2f, 
    0x2, 0x3a8, 0x3a9, 0x7, 0x58, 0x2, 0x2, 0x3a9, 0x3aa, 0x7, 0x82, 0x2, 
    0x2, 0x3aa, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0x7, 0x2a, 0x2, 
    0x2, 0x3ac, 0x3b9, 0x7, 0x57, 0x2, 0x2, 0x3ad, 0x3af, 0x5, 0x70, 0x39, 
    0x2, 0x3ae, 0x3b0, 0x5, 0x6c, 0x37, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 0x2, 
    0x2, 0x3af, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b1, 0x3, 0x2, 0x2, 
    0x2, 0x3b1, 0x3b3, 0x7, 0x82, 0x2, 0x2, 0x3b2, 0x3b4, 0x5, 0x5c, 0x2f, 
    0x2, 0x3b3, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x3, 0x2, 0x2, 
    0x2, 0x3b4, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x5, 0x72, 0x3a, 
    0x2, 0x3b6, 0x3b7, 0x7, 0x80, 0x2, 0x2, 0x3b7, 0x3b8, 0x5, 0x74, 0x3b, 
    0x2, 0x3b8, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ad, 0x3, 0x2, 0x2, 
    0x2, 0x3b9, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bb, 0x3, 0x2, 0x2, 
    0x2, 0x3bb, 0x3bc, 0x7, 0x58, 0x2, 0x2, 0x3bc, 0x3bd, 0x5, 0x60, 0x31, 
    0x2, 0x3bd, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x39d, 0x3, 0x2, 0x2, 
    0x2, 0x3be, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3ab, 0x3, 0x2, 0x2, 
    0x2, 0x3bf, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c3, 0x5, 0x64, 0x33, 
    0x2, 0x3c1, 0x3c3, 0x5, 0x82, 0x42, 0x2, 0x3c2, 0x3c0, 0x3, 0x2, 0x2, 
    0x2, 0x3c2, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x3c4, 0x3c6, 0x5, 0xce, 0x68, 0x2, 0x3c5, 0x3c4, 0x3, 0x2, 0x2, 0x2, 
    0x3c5, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c7, 0x3, 0x2, 0x2, 0x2, 
    0x3c7, 0x3c8, 0x5, 0x8c, 0x47, 0x2, 0x3c8, 0x3c9, 0x5, 0xe4, 0x73, 0x2, 
    0x3c9, 0x73, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cd, 0x5, 0x5c, 0x2f, 0x2, 
    0x3cb, 0x3cd, 0x5, 0x116, 0x8c, 0x2, 0x3cc, 0x3ca, 0x3, 0x2, 0x2, 0x2, 
    0x3cc, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x75, 0x3, 0x2, 0x2, 0x2, 0x3ce, 
    0x3d8, 0x7, 0x11, 0x2, 0x2, 0x3cf, 0x3d8, 0x7, 0x1b, 0x2, 0x2, 0x3d0, 
    0x3d3, 0x7, 0x3d, 0x2, 0x2, 0x3d1, 0x3d4, 0x5, 0x5c, 0x2f, 0x2, 0x3d2, 
    0x3d4, 0x5, 0x116, 0x8c, 0x2, 0x3d3, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d3, 
    0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
    0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x7, 0x2c, 0x2, 0x2, 0x3d6, 
    0x3d8, 0x7, 0x86, 0x2, 0x2, 0x3d7, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3d7, 
    0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d7, 
    0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d9, 
    0x3da, 0x7, 0x82, 0x2, 0x2, 0x3da, 0x77, 0x3, 0x2, 0x2, 0x2, 0x3db, 
    0x3dc, 0x5, 0x7e, 0x40, 0x2, 0x3dc, 0x3dd, 0x8, 0x3d, 0x1, 0x2, 0x3dd, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 0x5, 0x7c, 0x3f, 0x2, 0x3df, 
    0x3e0, 0x8, 0x3e, 0x1, 0x2, 0x3e0, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e1, 
    0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
    0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
    0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x8, 0x3e, 0x1, 0x2, 0x3e6, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 0x5, 0x7e, 0x40, 0x2, 0x3e8, 
    0x3e9, 0x8, 0x3f, 0x1, 0x2, 0x3e9, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3ea, 
    0x3f3, 0x5, 0x10a, 0x86, 0x2, 0x3eb, 0x3f3, 0x5, 0x150, 0xa9, 0x2, 0x3ec, 
    0x3f3, 0x5, 0x164, 0xb3, 0x2, 0x3ed, 0x3f3, 0x5, 0x166, 0xb4, 0x2, 0x3ee, 
    0x3f3, 0x5, 0xcc, 0x67, 0x2, 0x3ef, 0x3f3, 0x5, 0xbe, 0x60, 0x2, 0x3f0, 
    0x3f3, 0x5, 0x86, 0x44, 0x2, 0x3f1, 0x3f3, 0x5, 0x88, 0x45, 0x2, 0x3f2, 
    0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
    0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
    0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
    0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
    0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 
    0x5, 0x82, 0x42, 0x2, 0x3f5, 0x3f6, 0x8, 0x40, 0x1, 0x2, 0x3f6, 0x3ff, 
    0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3ff, 0x5, 0xca, 0x66, 0x2, 0x3f8, 0x3ff, 
    0x5, 0xc2, 0x62, 0x2, 0x3f9, 0x3ff, 0x5, 0xc6, 0x64, 0x2, 0x3fa, 0x3ff, 
    0x5, 0xc8, 0x65, 0x2, 0x3fb, 0x3ff, 0x5, 0x84, 0x43, 0x2, 0x3fc, 0x3ff, 
    0x5, 0x80, 0x41, 0x2, 0x3fd, 0x3ff, 0x5, 0xae, 0x58, 0x2, 0x3fe, 0x3f4, 
    0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3f8, 
    0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3fa, 
    0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3fc, 
    0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x400, 0x401, 0x7, 0x51, 0x2, 0x2, 0x401, 0x403, 0x7, 
    0x86, 0x2, 0x2, 0x402, 0x404, 0x5, 0xce, 0x68, 0x2, 0x403, 0x402, 0x3, 
    0x2, 0x2, 0x2, 0x403, 0x404, 0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x3, 
    0x2, 0x2, 0x2, 0x405, 0x406, 0x7, 0x67, 0x2, 0x2, 0x406, 0x407, 0x5, 
    0xf8, 0x7d, 0x2, 0x407, 0x408, 0x7, 0x82, 0x2, 0x2, 0x408, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x409, 0x40a, 0x5, 0x180, 0xc1, 0x2, 0x40a, 0x40b, 0x8, 
    0x42, 0x1, 0x2, 0x40b, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x409, 0x3, 
    0x2, 0x2, 0x2, 0x40d, 0x410, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40c, 0x3, 
    0x2, 0x2, 0x2, 0x40e, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x414, 0x3, 
    0x2, 0x2, 0x2, 0x410, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 0x5, 
    0x8c, 0x47, 0x2, 0x412, 0x413, 0x8, 0x42, 0x1, 0x2, 0x413, 0x415, 0x3, 
    0x2, 0x2, 0x2, 0x414, 0x411, 0x3, 0x2, 0x2, 0x2, 0x414, 0x415, 0x3, 
    0x2, 0x2, 0x2, 0x415, 0x419, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x5, 
    0xe0, 0x71, 0x2, 0x417, 0x418, 0x8, 0x42, 0x1, 0x2, 0x418, 0x41a, 0x3, 
    0x2, 0x2, 0x2, 0x419, 0x416, 0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x3, 
    0x2, 0x2, 0x2, 0x41a, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x421, 0x7, 
    0x82, 0x2, 0x2, 0x41c, 0x41d, 0x5, 0x180, 0xc1, 0x2, 0x41d, 0x41e, 0x8, 
    0x42, 0x1, 0x2, 0x41e, 0x420, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x41c, 0x3, 
    0x2, 0x2, 0x2, 0x420, 0x423, 0x3, 0x2, 0x2, 0x2, 0x421, 0x41f, 0x3, 
    0x2, 0x2, 0x2, 0x421, 0x422, 0x3, 0x2, 0x2, 0x2, 0x422, 0x42c, 0x3, 
    0x2, 0x2, 0x2, 0x423, 0x421, 0x3, 0x2, 0x2, 0x2, 0x424, 0x426, 0x5, 
    0xce, 0x68, 0x2, 0x425, 0x427, 0x5, 0x8c, 0x47, 0x2, 0x426, 0x425, 0x3, 
    0x2, 0x2, 0x2, 0x426, 0x427, 0x3, 0x2, 0x2, 0x2, 0x427, 0x428, 0x3, 
    0x2, 0x2, 0x2, 0x428, 0x429, 0x5, 0xe0, 0x71, 0x2, 0x429, 0x42a, 0x7, 
    0x82, 0x2, 0x2, 0x42a, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x40e, 0x3, 
    0x2, 0x2, 0x2, 0x42b, 0x424, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x3, 
    0x2, 0x2, 0x2, 0x42d, 0x42e, 0x8, 0x42, 0x1, 0x2, 0x42e, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x42f, 0x430, 0x7, 0x42, 0x2, 0x2, 0x430, 0x431, 0x7, 
    0x57, 0x2, 0x2, 0x431, 0x432, 0x5, 0x5e, 0x30, 0x2, 0x432, 0x433, 0x7, 
    0x7c, 0x2, 0x2, 0x433, 0x434, 0x7, 0x6, 0x2, 0x2, 0x434, 0x435, 0x7, 
    0x58, 0x2, 0x2, 0x435, 0x436, 0x7, 0x82, 0x2, 0x2, 0x436, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x437, 0x438, 0x7, 0x82, 0x2, 0x2, 0x438, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x439, 0x43a, 0x5, 0xce, 0x68, 0x2, 0x43a, 0x43b, 0x7, 
    0x82, 0x2, 0x2, 0x43b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x445, 0x5, 
    0x8e, 0x48, 0x2, 0x43d, 0x43e, 0x5, 0x94, 0x4b, 0x2, 0x43e, 0x43f, 0x8, 
    0x46, 0x1, 0x2, 0x43f, 0x445, 0x3, 0x2, 0x2, 0x2, 0x440, 0x445, 0x5, 
    0x90, 0x49, 0x2, 0x441, 0x445, 0x7, 0x2b, 0x2, 0x2, 0x442, 0x445, 0x7, 
    0x4c, 0x2, 0x2, 0x443, 0x445, 0x7, 0x19, 0x2, 0x2, 0x444, 0x43c, 0x3, 
    0x2, 0x2, 0x2, 0x444, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x444, 0x440, 0x3, 
    0x2, 0x2, 0x2, 0x444, 0x441, 0x3, 0x2, 0x2, 0x2, 0x444, 0x442, 0x3, 
    0x2, 0x2, 0x2, 0x444, 0x443, 0x3, 0x2, 0x2, 0x2, 0x445, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x446, 0x447, 0x5, 0x8a, 0x46, 0x2, 0x447, 0x448, 0x8, 0x47, 
    0x1, 0x2, 0x448, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x449, 0x446, 0x3, 0x2, 
    0x2, 0x2, 0x44a, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44c, 0x3, 0x2, 
    0x2, 0x2, 0x44b, 0x449, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44e, 0x3, 0x2, 
    0x2, 0x2, 0x44d, 0x44f, 0x5, 0xce, 0x68, 0x2, 0x44e, 0x44d, 0x3, 0x2, 
    0x2, 0x2, 0x44e, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 0x3, 0x2, 
    0x2, 0x2, 0x450, 0x451, 0x8, 0x47, 0x1, 0x2, 0x451, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x452, 0x453, 0x9, 0xd, 0x2, 0x2, 0x453, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x454, 0x455, 0x9, 0xe, 0x2, 0x2, 0x455, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x456, 0x457, 0x7, 0x86, 0x2, 0x2, 0x457, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x458, 0x45e, 0x5, 0x96, 0x4c, 0x2, 0x459, 0x45a, 0x5, 0x11a, 0x8e, 
    0x2, 0x45a, 0x45b, 0x8, 0x4b, 0x1, 0x2, 0x45b, 0x45e, 0x3, 0x2, 0x2, 
    0x2, 0x45c, 0x45e, 0x5, 0xaa, 0x56, 0x2, 0x45d, 0x458, 0x3, 0x2, 0x2, 
    0x2, 0x45d, 0x459, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45c, 0x3, 0x2, 0x2, 
    0x2, 0x45e, 0x95, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x464, 0x5, 0xa0, 0x51, 
    0x2, 0x460, 0x464, 0x5, 0xa6, 0x54, 0x2, 0x461, 0x464, 0x5, 0x162, 0xb2, 
    0x2, 0x462, 0x464, 0x5, 0xf2, 0x7a, 0x2, 0x463, 0x45f, 0x3, 0x2, 0x2, 
    0x2, 0x463, 0x460, 0x3, 0x2, 0x2, 0x2, 0x463, 0x461, 0x3, 0x2, 0x2, 
    0x2, 0x463, 0x462, 0x3, 0x2, 0x2, 0x2, 0x464, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x465, 0x467, 0x5, 0x94, 0x4b, 0x2, 0x466, 0x465, 0x3, 0x2, 0x2, 0x2, 
    0x467, 0x468, 0x3, 0x2, 0x2, 0x2, 0x468, 0x466, 0x3, 0x2, 0x2, 0x2, 
    0x468, 0x469, 0x3, 0x2, 0x2, 0x2, 0x469, 0x46b, 0x3, 0x2, 0x2, 0x2, 
    0x46a, 0x46c, 0x5, 0xce, 0x68, 0x2, 0x46b, 0x46a, 0x3, 0x2, 0x2, 0x2, 
    0x46b, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x99, 0x3, 0x2, 0x2, 0x2, 0x46d, 
    0x46f, 0x5, 0x96, 0x4c, 0x2, 0x46e, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x46f, 
    0x470, 0x3, 0x2, 0x2, 0x2, 0x470, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x470, 
    0x471, 0x3, 0x2, 0x2, 0x2, 0x471, 0x473, 0x3, 0x2, 0x2, 0x2, 0x472, 
    0x474, 0x5, 0xce, 0x68, 0x2, 0x473, 0x472, 0x3, 0x2, 0x2, 0x2, 0x473, 
    0x474, 0x3, 0x2, 0x2, 0x2, 0x474, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 
    0x9, 0xf, 0x2, 0x2, 0x476, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 0x9, 
    0x10, 0x2, 0x2, 0x478, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47b, 0x5, 
    0xc, 0x7, 0x2, 0x47a, 0x479, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x47b, 0x3, 
    0x2, 0x2, 0x2, 0x47b, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x492, 0x5, 
    0xa2, 0x52, 0x2, 0x47d, 0x47e, 0x5, 0xc, 0x7, 0x2, 0x47e, 0x47f, 0x7, 
    0x46, 0x2, 0x2, 0x47f, 0x480, 0x5, 0x158, 0xad, 0x2, 0x480, 0x492, 0x3, 
    0x2, 0x2, 0x2, 0x481, 0x492, 0x7, 0x14, 0x2, 0x2, 0x482, 0x492, 0x7, 
    0x15, 0x2, 0x2, 0x483, 0x492, 0x7, 0x16, 0x2, 0x2, 0x484, 0x492, 0x7, 
    0x55, 0x2, 0x2, 0x485, 0x492, 0x7, 0x10, 0x2, 0x2, 0x486, 0x492, 0x7, 
    0x3e, 0x2, 0x2, 0x487, 0x492, 0x7, 0x2f, 0x2, 0x2, 0x488, 0x492, 0x7, 
    0x30, 0x2, 0x2, 0x489, 0x492, 0x7, 0x29, 0x2, 0x2, 0x48a, 0x492, 0x7, 
    0x3f, 0x2, 0x2, 0x48b, 0x492, 0x7, 0x50, 0x2, 0x2, 0x48c, 0x492, 0x7, 
    0x29, 0x2, 0x2, 0x48d, 0x492, 0x7, 0x20, 0x2, 0x2, 0x48e, 0x492, 0x7, 
    0x53, 0x2, 0x2, 0x48f, 0x492, 0x7, 0xf, 0x2, 0x2, 0x490, 0x492, 0x5, 
    0xa4, 0x53, 0x2, 0x491, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x491, 0x47d, 0x3, 
    0x2, 0x2, 0x2, 0x491, 0x481, 0x3, 0x2, 0x2, 0x2, 0x491, 0x482, 0x3, 
    0x2, 0x2, 0x2, 0x491, 0x483, 0x3, 0x2, 0x2, 0x2, 0x491, 0x484, 0x3, 
    0x2, 0x2, 0x2, 0x491, 0x485, 0x3, 0x2, 0x2, 0x2, 0x491, 0x486, 0x3, 
    0x2, 0x2, 0x2, 0x491, 0x487, 0x3, 0x2, 0x2, 0x2, 0x491, 0x488, 0x3, 
    0x2, 0x2, 0x2, 0x491, 0x489, 0x3, 0x2, 0x2, 0x2, 0x491, 0x48a, 0x3, 
    0x2, 0x2, 0x2, 0x491, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x491, 0x48c, 0x3, 
    0x2, 0x2, 0x2, 0x491, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x491, 0x48e, 0x3, 
    0x2, 0x2, 0x2, 0x491, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x491, 0x490, 0x3, 
    0x2, 0x2, 0x2, 0x492, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x493, 0x498, 0x5, 0x118, 
    0x8d, 0x2, 0x494, 0x498, 0x5, 0xa8, 0x55, 0x2, 0x495, 0x498, 0x5, 0x92, 
    0x4a, 0x2, 0x496, 0x498, 0x5, 0x158, 0xad, 0x2, 0x497, 0x493, 0x3, 0x2, 
    0x2, 0x2, 0x497, 0x494, 0x3, 0x2, 0x2, 0x2, 0x497, 0x495, 0x3, 0x2, 
    0x2, 0x2, 0x497, 0x496, 0x3, 0x2, 0x2, 0x2, 0x498, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0x499, 0x49a, 0x7, 0x1c, 0x2, 0x2, 0x49a, 0x49d, 0x7, 0x57, 0x2, 
    0x2, 0x49b, 0x49e, 0x5, 0x5c, 0x2f, 0x2, 0x49c, 0x49e, 0x7, 0xf, 0x2, 
    0x2, 0x49d, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x49d, 0x49c, 0x3, 0x2, 0x2, 
    0x2, 0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a0, 0x7, 0x58, 0x2, 
    0x2, 0x4a0, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4b0, 0x5, 0x122, 0x92, 
    0x2, 0x4a2, 0x4a4, 0x5, 0xce, 0x68, 0x2, 0x4a3, 0x4a2, 0x3, 0x2, 0x2, 
    0x2, 0x4a3, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a6, 0x3, 0x2, 0x2, 
    0x2, 0x4a5, 0x4a7, 0x5, 0xc, 0x7, 0x2, 0x4a6, 0x4a5, 0x3, 0x2, 0x2, 
    0x2, 0x4a6, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x4a8, 0x3, 0x2, 0x2, 
    0x2, 0x4a8, 0x4b1, 0x7, 0x86, 0x2, 0x2, 0x4a9, 0x4b1, 0x5, 0x158, 0xad, 
    0x2, 0x4aa, 0x4ac, 0x5, 0xc, 0x7, 0x2, 0x4ab, 0x4ad, 0x7, 0x46, 0x2, 
    0x2, 0x4ac, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ad, 0x3, 0x2, 0x2, 
    0x2, 0x4ad, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4af, 0x5, 0x158, 0xad, 
    0x2, 0x4af, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4a3, 0x3, 0x2, 0x2, 
    0x2, 0x4b0, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4aa, 0x3, 0x2, 0x2, 
    0x2, 0x4b1, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b4, 0x7, 0x23, 0x2, 
    0x2, 0x4b3, 0x4b5, 0x5, 0xc, 0x7, 0x2, 0x4b4, 0x4b3, 0x3, 0x2, 0x2, 
    0x2, 0x4b4, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x3, 0x2, 0x2, 
    0x2, 0x4b6, 0x4b8, 0x7, 0x86, 0x2, 0x2, 0x4b7, 0x4a1, 0x3, 0x2, 0x2, 
    0x2, 0x4b7, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0x4b9, 0x4ba, 0x7, 0x86, 0x2, 0x2, 0x4ba, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0x4bb, 0x4bc, 0x5, 0xac, 0x57, 0x2, 0x4bc, 0x4c1, 0x7, 0x5b, 0x2, 0x2, 
    0x4bd, 0x4bf, 0x5, 0xb4, 0x5b, 0x2, 0x4be, 0x4c0, 0x7, 0x7c, 0x2, 0x2, 
    0x4bf, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 0x3, 0x2, 0x2, 0x2, 
    0x4c0, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4bd, 0x3, 0x2, 0x2, 0x2, 
    0x4c1, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c3, 0x3, 0x2, 0x2, 0x2, 
    0x4c3, 0x4c4, 0x7, 0x5c, 0x2, 0x2, 0x4c4, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x4c5, 0x4c7, 0x5, 0xb0, 0x59, 0x2, 0x4c6, 0x4c8, 0x5, 0xce, 0x68, 0x2, 
    0x4c7, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4c8, 0x3, 0x2, 0x2, 0x2, 
    0x4c8, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4cb, 0x5, 0xc, 0x7, 0x2, 
    0x4ca, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x3, 0x2, 0x2, 0x2, 
    0x4cb, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4cc, 0x4ce, 0x7, 0x86, 0x2, 0x2, 
    0x4cd, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4ce, 0x3, 0x2, 0x2, 0x2, 
    0x4ce, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4d1, 0x5, 0xb2, 0x5a, 0x2, 
    0x4d0, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d1, 0x3, 0x2, 0x2, 0x2, 
    0x4d1, 0xad, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d4, 0x5, 0xb0, 0x59, 0x2, 
    0x4d3, 0x4d5, 0x5, 0xce, 0x68, 0x2, 0x4d4, 0x4d3, 0x3, 0x2, 0x2, 0x2, 
    0x4d4, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d6, 0x3, 0x2, 0x2, 0x2, 
    0x4d6, 0x4d8, 0x7, 0x86, 0x2, 0x2, 0x4d7, 0x4d9, 0x5, 0xb2, 0x5a, 0x2, 
    0x4d8, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4d9, 0x3, 0x2, 0x2, 0x2, 
    0x4d9, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x7, 0x82, 0x2, 0x2, 
    0x4db, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4de, 0x7, 0x23, 0x2, 0x2, 
    0x4dd, 0x4df, 0x9, 0x11, 0x2, 0x2, 0x4de, 0x4dd, 0x3, 0x2, 0x2, 0x2, 
    0x4de, 0x4df, 0x3, 0x2, 0x2, 0x2, 0x4df, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x4e0, 
    0x4e1, 0x7, 0x80, 0x2, 0x2, 0x4e1, 0x4e2, 0x5, 0x98, 0x4d, 0x2, 0x4e2, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e8, 0x5, 0xb6, 0x5c, 0x2, 0x4e4, 
    0x4e5, 0x7, 0x7c, 0x2, 0x2, 0x4e5, 0x4e7, 0x5, 0xb6, 0x5c, 0x2, 0x4e6, 
    0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4e8, 
    0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x4e9, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4ee, 
    0x5, 0xb8, 0x5d, 0x2, 0x4ec, 0x4ed, 0x7, 0x67, 0x2, 0x2, 0x4ed, 0x4ef, 
    0x5, 0x5e, 0x30, 0x2, 0x4ee, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4ef, 
    0x3, 0x2, 0x2, 0x2, 0x4ef, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f1, 0x7, 
    0x86, 0x2, 0x2, 0x4f1, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f5, 0x5, 
    0xbc, 0x5f, 0x2, 0x4f3, 0x4f5, 0x5, 0xc0, 0x61, 0x2, 0x4f4, 0x4f2, 0x3, 
    0x2, 0x2, 0x2, 0x4f4, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x4f6, 0x4f7, 0x7, 0x86, 0x2, 0x2, 0x4f7, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0x4f8, 0x4fa, 0x7, 0x2e, 0x2, 0x2, 0x4f9, 0x4f8, 0x3, 0x2, 
    0x2, 0x2, 0x4f9, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4fb, 0x3, 0x2, 
    0x2, 0x2, 0x4fb, 0x4fe, 0x7, 0x32, 0x2, 0x2, 0x4fc, 0x4ff, 0x7, 0x86, 
    0x2, 0x2, 0x4fd, 0x4ff, 0x5, 0xbc, 0x5f, 0x2, 0x4fe, 0x4fc, 0x3, 0x2, 
    0x2, 0x2, 0x4fe, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4ff, 0x3, 0x2, 
    0x2, 0x2, 0x4ff, 0x500, 0x3, 0x2, 0x2, 0x2, 0x500, 0x502, 0x7, 0x5b, 
    0x2, 0x2, 0x501, 0x503, 0x5, 0x7a, 0x3e, 0x2, 0x502, 0x501, 0x3, 0x2, 
    0x2, 0x2, 0x502, 0x503, 0x3, 0x2, 0x2, 0x2, 0x503, 0x504, 0x3, 0x2, 
    0x2, 0x2, 0x504, 0x505, 0x7, 0x5c, 0x2, 0x2, 0x505, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0x506, 0x507, 0x7, 0x86, 0x2, 0x2, 0x507, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0x508, 0x509, 0x7, 0x32, 0x2, 0x2, 0x509, 0x50a, 0x7, 0x86, 
    0x2, 0x2, 0x50a, 0x50b, 0x7, 0x67, 0x2, 0x2, 0x50b, 0x50c, 0x5, 0xc4, 
    0x63, 0x2, 0x50c, 0x50d, 0x7, 0x82, 0x2, 0x2, 0x50d, 0xc3, 0x3, 0x2, 
    0x2, 0x2, 0x50e, 0x510, 0x5, 0xc, 0x7, 0x2, 0x50f, 0x50e, 0x3, 0x2, 
    0x2, 0x2, 0x50f, 0x510, 0x3, 0x2, 0x2, 0x2, 0x510, 0x511, 0x3, 0x2, 
    0x2, 0x2, 0x511, 0x512, 0x5, 0xba, 0x5e, 0x2, 0x512, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0x513, 0x519, 0x7, 0x51, 0x2, 0x2, 0x514, 0x516, 0x7, 0x4e, 
    0x2, 0x2, 0x515, 0x514, 0x3, 0x2, 0x2, 0x2, 0x515, 0x516, 0x3, 0x2, 
    0x2, 0x2, 0x516, 0x517, 0x3, 0x2, 0x2, 0x2, 0x517, 0x51a, 0x5, 0xc, 
    0x7, 0x2, 0x518, 0x51a, 0x7, 0x81, 0x2, 0x2, 0x519, 0x515, 0x3, 0x2, 
    0x2, 0x2, 0x519, 0x518, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x51b, 0x3, 0x2, 
    0x2, 0x2, 0x51b, 0x51c, 0x5, 0x8, 0x5, 0x2, 0x51c, 0x51d, 0x7, 0x82, 
    0x2, 0x2, 0x51d, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x520, 0x5, 0xce, 
    0x68, 0x2, 0x51f, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x520, 0x3, 0x2, 
    0x2, 0x2, 0x520, 0x521, 0x3, 0x2, 0x2, 0x2, 0x521, 0x522, 0x7, 0x51, 
    0x2, 0x2, 0x522, 0x524, 0x7, 0x32, 0x2, 0x2, 0x523, 0x525, 0x5, 0xc, 
    0x7, 0x2, 0x524, 0x523, 0x3, 0x2, 0x2, 0x2, 0x524, 0x525, 0x3, 0x2, 
    0x2, 0x2, 0x525, 0x526, 0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x5, 0xba, 
    0x5e, 0x2, 0x527, 0x528, 0x7, 0x82, 0x2, 0x2, 0x528, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0x529, 0x52a, 0x7, 0xe, 0x2, 0x2, 0x52a, 0x52b, 0x7, 0x57, 
    0x2, 0x2, 0x52b, 0x52c, 0x7, 0x6, 0x2, 0x2, 0x52c, 0x52d, 0x7, 0x58, 
    0x2, 0x2, 0x52d, 0x52e, 0x7, 0x82, 0x2, 0x2, 0x52e, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0x52f, 0x530, 0x7, 0x26, 0x2, 0x2, 0x530, 0x537, 0x7, 0x6, 
    0x2, 0x2, 0x531, 0x533, 0x7, 0x5b, 0x2, 0x2, 0x532, 0x534, 0x5, 0x7a, 
    0x3e, 0x2, 0x533, 0x532, 0x3, 0x2, 0x2, 0x2, 0x533, 0x534, 0x3, 0x2, 
    0x2, 0x2, 0x534, 0x535, 0x3, 0x2, 0x2, 0x2, 0x535, 0x538, 0x7, 0x5c, 
    0x2, 0x2, 0x536, 0x538, 0x5, 0x7c, 0x3f, 0x2, 0x537, 0x531, 0x3, 0x2, 
    0x2, 0x2, 0x537, 0x536, 0x3, 0x2, 0x2, 0x2, 0x538, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0x539, 0x53b, 0x5, 0xd0, 0x69, 0x2, 0x53a, 0x539, 0x3, 0x2, 0x2, 
    0x2, 0x53b, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53a, 0x3, 0x2, 0x2, 
    0x2, 0x53c, 0x53d, 0x3, 0x2, 0x2, 0x2, 0x53d, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0x53e, 0x53f, 0x7, 0x59, 0x2, 0x2, 0x53f, 0x541, 0x7, 0x59, 0x2, 0x2, 
    0x540, 0x542, 0x5, 0xd4, 0x6b, 0x2, 0x541, 0x540, 0x3, 0x2, 0x2, 0x2, 
    0x541, 0x542, 0x3, 0x2, 0x2, 0x2, 0x542, 0x543, 0x3, 0x2, 0x2, 0x2, 
    0x543, 0x544, 0x7, 0x5a, 0x2, 0x2, 0x544, 0x547, 0x7, 0x5a, 0x2, 0x2, 
    0x545, 0x547, 0x5, 0xd2, 0x6a, 0x2, 0x546, 0x53e, 0x3, 0x2, 0x2, 0x2, 
    0x546, 0x545, 0x3, 0x2, 0x2, 0x2, 0x547, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x548, 
    0x549, 0x7, 0xc, 0x2, 0x2, 0x549, 0x54c, 0x7, 0x57, 0x2, 0x2, 0x54a, 
    0x54d, 0x5, 0xf8, 0x7d, 0x2, 0x54b, 0x54d, 0x5, 0x5e, 0x30, 0x2, 0x54c, 
    0x54a, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54d, 
    0x54f, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x550, 0x7, 0x85, 0x2, 0x2, 0x54f, 
    0x54e, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 0x3, 0x2, 0x2, 0x2, 0x550, 
    0x551, 0x3, 0x2, 0x2, 0x2, 0x551, 0x552, 0x7, 0x58, 0x2, 0x2, 0x552, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0x553, 0x558, 0x5, 0xd6, 0x6c, 0x2, 0x554, 
    0x555, 0x7, 0x7c, 0x2, 0x2, 0x555, 0x557, 0x5, 0xd6, 0x6c, 0x2, 0x556, 
    0x554, 0x3, 0x2, 0x2, 0x2, 0x557, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x558, 
    0x556, 0x3, 0x2, 0x2, 0x2, 0x558, 0x559, 0x3, 0x2, 0x2, 0x2, 0x559, 
    0x55c, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x558, 0x3, 0x2, 0x2, 0x2, 0x55b, 
    0x55d, 0x7, 0x85, 0x2, 0x2, 0x55c, 0x55b, 0x3, 0x2, 0x2, 0x2, 0x55c, 
    0x55d, 0x3, 0x2, 0x2, 0x2, 0x55d, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x55f, 
    0x5, 0xd8, 0x6d, 0x2, 0x55f, 0x560, 0x7, 0x81, 0x2, 0x2, 0x560, 0x562, 
    0x3, 0x2, 0x2, 0x2, 0x561, 0x55e, 0x3, 0x2, 0x2, 0x2, 0x561, 0x562, 
    0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x3, 0x2, 0x2, 0x2, 0x563, 0x565, 
    0x7, 0x86, 0x2, 0x2, 0x564, 0x566, 0x5, 0xda, 0x6e, 0x2, 0x565, 0x564, 
    0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 0x3, 0x2, 0x2, 0x2, 0x566, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0x567, 0x568, 0x7, 0x86, 0x2, 0x2, 0x568, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0x569, 0x56b, 0x7, 0x57, 0x2, 0x2, 0x56a, 0x56c, 0x5, 
    0xdc, 0x6f, 0x2, 0x56b, 0x56a, 0x3, 0x2, 0x2, 0x2, 0x56b, 0x56c, 0x3, 
    0x2, 0x2, 0x2, 0x56c, 0x56d, 0x3, 0x2, 0x2, 0x2, 0x56d, 0x56e, 0x7, 
    0x58, 0x2, 0x2, 0x56e, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x571, 0x5, 
    0xde, 0x70, 0x2, 0x570, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x571, 0x572, 0x3, 
    0x2, 0x2, 0x2, 0x572, 0x570, 0x3, 0x2, 0x2, 0x2, 0x572, 0x573, 0x3, 
    0x2, 0x2, 0x2, 0x573, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x574, 0x575, 0x7, 0x57, 
    0x2, 0x2, 0x575, 0x576, 0x5, 0xdc, 0x6f, 0x2, 0x576, 0x577, 0x7, 0x58, 
    0x2, 0x2, 0x577, 0x586, 0x3, 0x2, 0x2, 0x2, 0x578, 0x579, 0x7, 0x59, 
    0x2, 0x2, 0x579, 0x57a, 0x5, 0xdc, 0x6f, 0x2, 0x57a, 0x57b, 0x7, 0x5a, 
    0x2, 0x2, 0x57b, 0x586, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57d, 0x7, 0x5b, 
    0x2, 0x2, 0x57d, 0x57e, 0x5, 0xdc, 0x6f, 0x2, 0x57e, 0x57f, 0x7, 0x5c, 
    0x2, 0x2, 0x57f, 0x586, 0x3, 0x2, 0x2, 0x2, 0x580, 0x582, 0xa, 0x12, 
    0x2, 0x2, 0x581, 0x580, 0x3, 0x2, 0x2, 0x2, 0x582, 0x583, 0x3, 0x2, 
    0x2, 0x2, 0x583, 0x581, 0x3, 0x2, 0x2, 0x2, 0x583, 0x584, 0x3, 0x2, 
    0x2, 0x2, 0x584, 0x586, 0x3, 0x2, 0x2, 0x2, 0x585, 0x574, 0x3, 0x2, 
    0x2, 0x2, 0x585, 0x578, 0x3, 0x2, 0x2, 0x2, 0x585, 0x57c, 0x3, 0x2, 
    0x2, 0x2, 0x585, 0x581, 0x3, 0x2, 0x2, 0x2, 0x586, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0x587, 0x588, 0x5, 0xe2, 0x72, 0x2, 0x588, 0x589, 0x8, 0x71, 0x1, 
    0x2, 0x589, 0x590, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x58b, 0x7, 0x7c, 0x2, 
    0x2, 0x58b, 0x58c, 0x5, 0xe2, 0x72, 0x2, 0x58c, 0x58d, 0x8, 0x71, 0x1, 
    0x2, 0x58d, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x58a, 0x3, 0x2, 0x2, 
    0x2, 0x58f, 0x592, 0x3, 0x2, 0x2, 0x2, 0x590, 0x58e, 0x3, 0x2, 0x2, 
    0x2, 0x590, 0x591, 0x3, 0x2, 0x2, 0x2, 0x591, 0x593, 0x3, 0x2, 0x2, 
    0x2, 0x592, 0x590, 0x3, 0x2, 0x2, 0x2, 0x593, 0x594, 0x8, 0x71, 0x1, 
    0x2, 0x594, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x595, 0x596, 0x5, 0xe4, 0x73, 
    0x2, 0x596, 0x597, 0x8, 0x72, 0x1, 0x2, 0x597, 0x599, 0x3, 0x2, 0x2, 
    0x2, 0x598, 0x59a, 0x5, 0x10e, 0x88, 0x2, 0x599, 0x598, 0x3, 0x2, 0x2, 
    0x2, 0x599, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59b, 0x3, 0x2, 0x2, 
    0x2, 0x59b, 0x59c, 0x8, 0x72, 0x1, 0x2, 0x59c, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0x59d, 0x5a3, 0x5, 0xe6, 0x74, 0x2, 0x59e, 0x59f, 0x5, 0xe8, 0x75, 
    0x2, 0x59f, 0x5a0, 0x5, 0xea, 0x76, 0x2, 0x5a0, 0x5a1, 0x5, 0xec, 0x77, 
    0x2, 0x5a1, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x59d, 0x3, 0x2, 0x2, 
    0x2, 0x5a2, 0x59e, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0x5a4, 0x5a6, 0x5, 0xee, 0x78, 0x2, 0x5a5, 0x5a7, 0x7, 0x18, 0x2, 0x2, 
    0x5a6, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a7, 0x3, 0x2, 0x2, 0x2, 
    0x5a7, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x5a4, 0x3, 0x2, 0x2, 0x2, 
    0x5a9, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5a8, 0x3, 0x2, 0x2, 0x2, 
    0x5aa, 0x5ab, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5ad, 0x3, 0x2, 0x2, 0x2, 
    0x5ac, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x5, 0xe8, 0x75, 0x2, 
    0x5ae, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x5af, 0x5b0, 0x8, 0x75, 0x1, 0x2, 
    0x5b0, 0x5b2, 0x5, 0xf6, 0x7c, 0x2, 0x5b1, 0x5b3, 0x5, 0xce, 0x68, 0x2, 
    0x5b2, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 0x3, 0x2, 0x2, 0x2, 
    0x5b3, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b5, 0x7, 0x57, 0x2, 0x2, 
    0x5b5, 0x5b6, 0x5, 0xe6, 0x74, 0x2, 0x5b6, 0x5b7, 0x7, 0x58, 0x2, 0x2, 
    0x5b7, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0x5af, 0x3, 0x2, 0x2, 0x2, 
    0x5b8, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b9, 0x5c8, 0x3, 0x2, 0x2, 0x2, 
    0x5ba, 0x5c4, 0xc, 0x4, 0x2, 0x2, 0x5bb, 0x5c5, 0x5, 0xea, 0x76, 0x2, 
    0x5bc, 0x5be, 0x7, 0x59, 0x2, 0x2, 0x5bd, 0x5bf, 0x5, 0x5e, 0x30, 0x2, 
    0x5be, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5be, 0x5bf, 0x3, 0x2, 0x2, 0x2, 
    0x5bf, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c2, 0x7, 0x5a, 0x2, 0x2, 
    0x5c1, 0x5c3, 0x5, 0xce, 0x68, 0x2, 0x5c2, 0x5c1, 0x3, 0x2, 0x2, 0x2, 
    0x5c2, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c5, 0x3, 0x2, 0x2, 0x2, 
    0x5c4, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5bc, 0x3, 0x2, 0x2, 0x2, 
    0x5c5, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5ba, 0x3, 0x2, 0x2, 0x2, 
    0x5c7, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c6, 0x3, 0x2, 0x2, 0x2, 
    0x5c8, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x5ca, 
    0x5c8, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5cd, 0x7, 0x57, 0x2, 0x2, 0x5cc, 
    0x5ce, 0x5, 0x104, 0x83, 0x2, 0x5cd, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5cd, 
    0x5ce, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5cf, 
    0x5d1, 0x7, 0x58, 0x2, 0x2, 0x5d0, 0x5d2, 0x5, 0xf0, 0x79, 0x2, 0x5d1, 
    0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d2, 0x3, 0x2, 0x2, 0x2, 0x5d2, 
    0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5d5, 0x5, 0xf4, 0x7b, 0x2, 0x5d4, 
    0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d5, 0x3, 0x2, 0x2, 0x2, 0x5d5, 
    0x5d7, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x5d8, 0x5, 0x174, 0xbb, 0x2, 0x5d7, 
    0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5d8, 
    0x5da, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5db, 0x5, 0xce, 0x68, 0x2, 0x5da, 
    0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5da, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x5db, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5dd, 0x7, 0x7e, 0x2, 0x2, 0x5dd, 
    0x5df, 0x5, 0x9a, 0x4e, 0x2, 0x5de, 0x5e0, 0x5, 0xfa, 0x7e, 0x2, 0x5df, 
    0x5de, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0x5e0, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e3, 0x9, 0x13, 0x2, 0x2, 0x5e2, 
    0x5e4, 0x5, 0xce, 0x68, 0x2, 0x5e3, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0x5e3, 
    0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5f0, 0x3, 0x2, 0x2, 0x2, 0x5e5, 
    0x5e7, 0x5, 0xc, 0x7, 0x2, 0x5e6, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5e6, 
    0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5e8, 
    0x5ea, 0x7, 0x5f, 0x2, 0x2, 0x5e9, 0x5eb, 0x5, 0xce, 0x68, 0x2, 0x5ea, 
    0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5eb, 
    0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ee, 0x5, 0xf0, 0x79, 0x2, 0x5ed, 
    0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5ee, 
    0x5f0, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5e1, 0x3, 0x2, 0x2, 0x2, 0x5ef, 
    0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5f0, 0xef, 0x3, 0x2, 0x2, 0x2, 0x5f1, 0x5f3, 
    0x5, 0xf2, 0x7a, 0x2, 0x5f2, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f3, 0x5f4, 
    0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f5, 
    0x3, 0x2, 0x2, 0x2, 0x5f5, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f7, 0x9, 
    0x14, 0x2, 0x2, 0x5f7, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5f9, 0x9, 
    0x13, 0x2, 0x2, 0x5f9, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fc, 0x7, 
    0x85, 0x2, 0x2, 0x5fb, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5fc, 0x3, 
    0x2, 0x2, 0x2, 0x5fc, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5fe, 0x5, 
    0x6, 0x4, 0x2, 0x5fe, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x5ff, 0x601, 0x5, 0x98, 
    0x4d, 0x2, 0x600, 0x602, 0x5, 0xfa, 0x7e, 0x2, 0x601, 0x600, 0x3, 0x2, 
    0x2, 0x2, 0x601, 0x602, 0x3, 0x2, 0x2, 0x2, 0x602, 0xf9, 0x3, 0x2, 0x2, 
    0x2, 0x603, 0x60c, 0x5, 0xfc, 0x7f, 0x2, 0x604, 0x606, 0x5, 0xfe, 0x80, 
    0x2, 0x605, 0x604, 0x3, 0x2, 0x2, 0x2, 0x605, 0x606, 0x3, 0x2, 0x2, 
    0x2, 0x606, 0x607, 0x3, 0x2, 0x2, 0x2, 0x607, 0x608, 0x5, 0xea, 0x76, 
    0x2, 0x608, 0x609, 0x5, 0xec, 0x77, 0x2, 0x609, 0x60c, 0x3, 0x2, 0x2, 
    0x2, 0x60a, 0x60c, 0x5, 0x100, 0x81, 0x2, 0x60b, 0x603, 0x3, 0x2, 0x2, 
    0x2, 0x60b, 0x605, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60a, 0x3, 0x2, 0x2, 
    0x2, 0x60c, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x617, 0x5, 0xfe, 0x80, 
    0x2, 0x60e, 0x610, 0x5, 0xee, 0x78, 0x2, 0x60f, 0x60e, 0x3, 0x2, 0x2, 
    0x2, 0x610, 0x611, 0x3, 0x2, 0x2, 0x2, 0x611, 0x60f, 0x3, 0x2, 0x2, 
    0x2, 0x611, 0x612, 0x3, 0x2, 0x2, 0x2, 0x612, 0x614, 0x3, 0x2, 0x2, 
    0x2, 0x613, 0x615, 0x5, 0xfe, 0x80, 0x2, 0x614, 0x613, 0x3, 0x2, 0x2, 
    0x2, 0x614, 0x615, 0x3, 0x2, 0x2, 0x2, 0x615, 0x617, 0x3, 0x2, 0x2, 
    0x2, 0x616, 0x60d, 0x3, 0x2, 0x2, 0x2, 0x616, 0x60f, 0x3, 0x2, 0x2, 
    0x2, 0x617, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x618, 0x619, 0x8, 0x80, 0x1, 
    0x2, 0x619, 0x627, 0x5, 0xea, 0x76, 0x2, 0x61a, 0x61c, 0x7, 0x59, 0x2, 
    0x2, 0x61b, 0x61d, 0x5, 0x5e, 0x30, 0x2, 0x61c, 0x61b, 0x3, 0x2, 0x2, 
    0x2, 0x61c, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x61e, 0x3, 0x2, 0x2, 
    0x2, 0x61e, 0x620, 0x7, 0x5a, 0x2, 0x2, 0x61f, 0x621, 0x5, 0xce, 0x68, 
    0x2, 0x620, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x3, 0x2, 0x2, 
    0x2, 0x621, 0x627, 0x3, 0x2, 0x2, 0x2, 0x622, 0x623, 0x7, 0x57, 0x2, 
    0x2, 0x623, 0x624, 0x5, 0xfc, 0x7f, 0x2, 0x624, 0x625, 0x7, 0x58, 0x2, 
    0x2, 0x625, 0x627, 0x3, 0x2, 0x2, 0x2, 0x626, 0x618, 0x3, 0x2, 0x2, 
    0x2, 0x626, 0x61a, 0x3, 0x2, 0x2, 0x2, 0x626, 0x622, 0x3, 0x2, 0x2, 
    0x2, 0x627, 0x637, 0x3, 0x2, 0x2, 0x2, 0x628, 0x633, 0xc, 0x6, 0x2, 
    0x2, 0x629, 0x634, 0x5, 0xea, 0x76, 0x2, 0x62a, 0x62b, 0x5, 0xfe, 0x80, 
    0x2, 0x62b, 0x62d, 0x7, 0x59, 0x2, 0x2, 0x62c, 0x62e, 0x5, 0x5e, 0x30, 
    0x2, 0x62d, 0x62c, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x62e, 0x3, 0x2, 0x2, 
    0x2, 0x62e, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x631, 0x7, 0x5a, 0x2, 
    0x2, 0x630, 0x632, 0x5, 0xce, 0x68, 0x2, 0x631, 0x630, 0x3, 0x2, 0x2, 
    0x2, 0x631, 0x632, 0x3, 0x2, 0x2, 0x2, 0x632, 0x634, 0x3, 0x2, 0x2, 
    0x2, 0x633, 0x629, 0x3, 0x2, 0x2, 0x2, 0x633, 0x62a, 0x3, 0x2, 0x2, 
    0x2, 0x634, 0x636, 0x3, 0x2, 0x2, 0x2, 0x635, 0x628, 0x3, 0x2, 0x2, 
    0x2, 0x636, 0x639, 0x3, 0x2, 0x2, 0x2, 0x637, 0x635, 0x3, 0x2, 0x2, 
    0x2, 0x637, 0x638, 0x3, 0x2, 0x2, 0x2, 0x638, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0x639, 0x637, 0x3, 0x2, 0x2, 0x2, 0x63a, 0x63c, 0x5, 0xee, 0x78, 0x2, 
    0x63b, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x63c, 0x63f, 0x3, 0x2, 0x2, 0x2, 
    0x63d, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x63d, 0x63e, 0x3, 0x2, 0x2, 0x2, 
    0x63e, 0x640, 0x3, 0x2, 0x2, 0x2, 0x63f, 0x63d, 0x3, 0x2, 0x2, 0x2, 
    0x640, 0x641, 0x5, 0x102, 0x82, 0x2, 0x641, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x642, 0x643, 0x8, 0x82, 0x1, 0x2, 0x643, 0x644, 0x7, 0x85, 0x2, 0x2, 
    0x644, 0x653, 0x3, 0x2, 0x2, 0x2, 0x645, 0x64f, 0xc, 0x4, 0x2, 0x2, 
    0x646, 0x650, 0x5, 0xea, 0x76, 0x2, 0x647, 0x649, 0x7, 0x59, 0x2, 0x2, 
    0x648, 0x64a, 0x5, 0x5e, 0x30, 0x2, 0x649, 0x648, 0x3, 0x2, 0x2, 0x2, 
    0x649, 0x64a, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64b, 0x3, 0x2, 0x2, 0x2, 
    0x64b, 0x64d, 0x7, 0x5a, 0x2, 0x2, 0x64c, 0x64e, 0x5, 0xce, 0x68, 0x2, 
    0x64d, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x64e, 0x3, 0x2, 0x2, 0x2, 
    0x64e, 0x650, 0x3, 0x2, 0x2, 0x2, 0x64f, 0x646, 0x3, 0x2, 0x2, 0x2, 
    0x64f, 0x647, 0x3, 0x2, 0x2, 0x2, 0x650, 0x652, 0x3, 0x2, 0x2, 0x2, 
    0x651, 0x645, 0x3, 0x2, 0x2, 0x2, 0x652, 0x655, 0x3, 0x2, 0x2, 0x2, 
    0x653, 0x651, 0x3, 0x2, 0x2, 0x2, 0x653, 0x654, 0x3, 0x2, 0x2, 0x2, 
    0x654, 0x103, 0x3, 0x2, 0x2, 0x2, 0x655, 0x653, 0x3, 0x2, 0x2, 0x2, 
    0x656, 0x65b, 0x5, 0x106, 0x84, 0x2, 0x657, 0x659, 0x7, 0x7c, 0x2, 0x2, 
    0x658, 0x657, 0x3, 0x2, 0x2, 0x2, 0x658, 0x659, 0x3, 0x2, 0x2, 0x2, 
    0x659, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x65c, 0x7, 0x85, 0x2, 0x2, 
    0x65b, 0x658, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 0x3, 0x2, 0x2, 0x2, 
    0x65c, 0x105, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x662, 0x5, 0x108, 0x85, 0x2, 
    0x65e, 0x65f, 0x7, 0x7c, 0x2, 0x2, 0x65f, 0x661, 0x5, 0x108, 0x85, 0x2, 
    0x660, 0x65e, 0x3, 0x2, 0x2, 0x2, 0x661, 0x664, 0x3, 0x2, 0x2, 0x2, 
    0x662, 0x660, 0x3, 0x2, 0x2, 0x2, 0x662, 0x663, 0x3, 0x2, 0x2, 0x2, 
    0x663, 0x107, 0x3, 0x2, 0x2, 0x2, 0x664, 0x662, 0x3, 0x2, 0x2, 0x2, 
    0x665, 0x667, 0x5, 0xce, 0x68, 0x2, 0x666, 0x665, 0x3, 0x2, 0x2, 0x2, 
    0x666, 0x667, 0x3, 0x2, 0x2, 0x2, 0x667, 0x668, 0x3, 0x2, 0x2, 0x2, 
    0x668, 0x66d, 0x5, 0x8c, 0x47, 0x2, 0x669, 0x66e, 0x5, 0xe4, 0x73, 0x2, 
    0x66a, 0x66c, 0x5, 0xfa, 0x7e, 0x2, 0x66b, 0x66a, 0x3, 0x2, 0x2, 0x2, 
    0x66b, 0x66c, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x66e, 0x3, 0x2, 0x2, 0x2, 
    0x66d, 0x669, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x66b, 0x3, 0x2, 0x2, 0x2, 
    0x66e, 0x671, 0x3, 0x2, 0x2, 0x2, 0x66f, 0x670, 0x7, 0x67, 0x2, 0x2, 
    0x670, 0x672, 0x5, 0x112, 0x8a, 0x2, 0x671, 0x66f, 0x3, 0x2, 0x2, 0x2, 
    0x671, 0x672, 0x3, 0x2, 0x2, 0x2, 0x672, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x673, 0x674, 0x5, 0x180, 0xc1, 0x2, 0x674, 0x675, 0x8, 0x86, 0x1, 0x2, 
    0x675, 0x677, 0x3, 0x2, 0x2, 0x2, 0x676, 0x673, 0x3, 0x2, 0x2, 0x2, 
    0x677, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x678, 0x676, 0x3, 0x2, 0x2, 0x2, 
    0x678, 0x679, 0x3, 0x2, 0x2, 0x2, 0x679, 0x67c, 0x3, 0x2, 0x2, 0x2, 
    0x67a, 0x678, 0x3, 0x2, 0x2, 0x2, 0x67b, 0x67d, 0x5, 0xce, 0x68, 0x2, 
    0x67c, 0x67b, 0x3, 0x2, 0x2, 0x2, 0x67c, 0x67d, 0x3, 0x2, 0x2, 0x2, 
    0x67d, 0x67f, 0x3, 0x2, 0x2, 0x2, 0x67e, 0x680, 0x5, 0x8c, 0x47, 0x2, 
    0x67f, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x67f, 0x680, 0x3, 0x2, 0x2, 0x2, 
    0x680, 0x681, 0x3, 0x2, 0x2, 0x2, 0x681, 0x682, 0x5, 0xe4, 0x73, 0x2, 
    0x682, 0x683, 0x8, 0x86, 0x1, 0x2, 0x683, 0x685, 0x3, 0x2, 0x2, 0x2, 
    0x684, 0x686, 0x5, 0x12c, 0x97, 0x2, 0x685, 0x684, 0x3, 0x2, 0x2, 0x2, 
    0x685, 0x686, 0x3, 0x2, 0x2, 0x2, 0x686, 0x68c, 0x3, 0x2, 0x2, 0x2, 
    0x687, 0x688, 0x5, 0x180, 0xc1, 0x2, 0x688, 0x689, 0x8, 0x86, 0x1, 0x2, 
    0x689, 0x68b, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x687, 0x3, 0x2, 0x2, 0x2, 
    0x68b, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x68c, 0x68a, 0x3, 0x2, 0x2, 0x2, 
    0x68c, 0x68d, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68f, 0x3, 0x2, 0x2, 0x2, 
    0x68e, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x690, 0x5, 0x10c, 0x87, 0x2, 
    0x690, 0x691, 0x8, 0x86, 0x1, 0x2, 0x691, 0x692, 0x3, 0x2, 0x2, 0x2, 
    0x692, 0x693, 0x8, 0x86, 0x1, 0x2, 0x693, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x694, 0x696, 0x5, 0x144, 0xa3, 0x2, 0x695, 0x694, 0x3, 0x2, 0x2, 0x2, 
    0x695, 0x696, 0x3, 0x2, 0x2, 0x2, 0x696, 0x697, 0x3, 0x2, 0x2, 0x2, 
    0x697, 0x698, 0x5, 0x66, 0x34, 0x2, 0x698, 0x699, 0x8, 0x87, 0x1, 0x2, 
    0x699, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x69a, 0x69f, 0x5, 0x16a, 0xb6, 0x2, 
    0x69b, 0x69c, 0x7, 0x67, 0x2, 0x2, 0x69c, 0x69d, 0x9, 0x15, 0x2, 0x2, 
    0x69d, 0x69f, 0x7, 0x82, 0x2, 0x2, 0x69e, 0x695, 0x3, 0x2, 0x2, 0x2, 
    0x69e, 0x69a, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x69b, 0x3, 0x2, 0x2, 0x2, 
    0x69f, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a1, 0x8, 0x87, 0x1, 0x2, 
    0x6a1, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a8, 0x5, 0x110, 0x89, 0x2, 
    0x6a3, 0x6a4, 0x7, 0x57, 0x2, 0x2, 0x6a4, 0x6a5, 0x5, 0x24, 0x13, 0x2, 
    0x6a5, 0x6a6, 0x7, 0x58, 0x2, 0x2, 0x6a6, 0x6a8, 0x3, 0x2, 0x2, 0x2, 
    0x6a7, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a7, 0x6a3, 0x3, 0x2, 0x2, 0x2, 
    0x6a8, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x6a9, 0x6aa, 0x7, 0x67, 0x2, 0x2, 
    0x6aa, 0x6ad, 0x5, 0x112, 0x8a, 0x2, 0x6ab, 0x6ad, 0x5, 0x116, 0x8c, 
    0x2, 0x6ac, 0x6a9, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6ab, 0x3, 0x2, 0x2, 
    0x2, 0x6ad, 0x111, 0x3, 0x2, 0x2, 0x2, 0x6ae, 0x6b1, 0x5, 0x58, 0x2d, 
    0x2, 0x6af, 0x6b1, 0x5, 0x116, 0x8c, 0x2, 0x6b0, 0x6ae, 0x3, 0x2, 0x2, 
    0x2, 0x6b0, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6b1, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x6b2, 0x6b4, 0x5, 0x112, 0x8a, 0x2, 0x6b3, 0x6b5, 0x7, 0x85, 0x2, 
    0x2, 0x6b4, 0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b5, 0x3, 0x2, 0x2, 
    0x2, 0x6b5, 0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6b6, 0x6b7, 0x7, 0x7c, 0x2, 
    0x2, 0x6b7, 0x6b9, 0x5, 0x112, 0x8a, 0x2, 0x6b8, 0x6ba, 0x7, 0x85, 0x2, 
    0x2, 0x6b9, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6ba, 0x3, 0x2, 0x2, 
    0x2, 0x6ba, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bb, 0x6b6, 0x3, 0x2, 0x2, 
    0x2, 0x6bc, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6bb, 0x3, 0x2, 0x2, 
    0x2, 0x6bd, 0x6be, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x115, 0x3, 0x2, 0x2, 
    0x2, 0x6bf, 0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c5, 0x7, 0x5b, 0x2, 
    0x2, 0x6c1, 0x6c3, 0x5, 0x114, 0x8b, 0x2, 0x6c2, 0x6c4, 0x7, 0x7c, 0x2, 
    0x2, 0x6c3, 0x6c2, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c4, 0x3, 0x2, 0x2, 
    0x2, 0x6c4, 0x6c6, 0x3, 0x2, 0x2, 0x2, 0x6c5, 0x6c1, 0x3, 0x2, 0x2, 
    0x2, 0x6c5, 0x6c6, 0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 0x2, 
    0x2, 0x6c7, 0x6c8, 0x7, 0x5c, 0x2, 0x2, 0x6c8, 0x117, 0x3, 0x2, 0x2, 
    0x2, 0x6c9, 0x6cc, 0x7, 0x86, 0x2, 0x2, 0x6ca, 0x6cc, 0x5, 0x158, 0xad, 
    0x2, 0x6cb, 0x6c9, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6ca, 0x3, 0x2, 0x2, 
    0x2, 0x6cc, 0x119, 0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6ce, 0x5, 0x11c, 0x8f, 
    0x2, 0x6ce, 0x6d2, 0x7, 0x5b, 0x2, 0x2, 0x6cf, 0x6d0, 0x5, 0x124, 0x93, 
    0x2, 0x6d0, 0x6d1, 0x8, 0x8e, 0x1, 0x2, 0x6d1, 0x6d3, 0x3, 0x2, 0x2, 
    0x2, 0x6d2, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6d2, 0x6d3, 0x3, 0x2, 0x2, 
    0x2, 0x6d3, 0x6d4, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d5, 0x7, 0x5c, 0x2, 
    0x2, 0x6d5, 0x6d6, 0x8, 0x8e, 0x1, 0x2, 0x6d6, 0x11b, 0x3, 0x2, 0x2, 
    0x2, 0x6d7, 0x6d9, 0x5, 0x122, 0x92, 0x2, 0x6d8, 0x6da, 0x5, 0xce, 0x68, 
    0x2, 0x6d9, 0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6d9, 0x6da, 0x3, 0x2, 0x2, 
    0x2, 0x6da, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dd, 0x5, 0x11e, 0x90, 
    0x2, 0x6dc, 0x6de, 0x5, 0x120, 0x91, 0x2, 0x6dd, 0x6dc, 0x3, 0x2, 0x2, 
    0x2, 0x6dd, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x6de, 0x6e0, 0x3, 0x2, 0x2, 
    0x2, 0x6df, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6df, 0x6e0, 0x3, 0x2, 0x2, 
    0x2, 0x6e0, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6e1, 0x6e3, 0x5, 0x132, 0x9a, 
    0x2, 0x6e2, 0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6e3, 0x3, 0x2, 0x2, 
    0x2, 0x6e3, 0x6ef, 0x3, 0x2, 0x2, 0x2, 0x6e4, 0x6e6, 0x7, 0x4f, 0x2, 
    0x2, 0x6e5, 0x6e7, 0x5, 0xce, 0x68, 0x2, 0x6e6, 0x6e5, 0x3, 0x2, 0x2, 
    0x2, 0x6e6, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e7, 0x6ec, 0x3, 0x2, 0x2, 
    0x2, 0x6e8, 0x6ea, 0x5, 0x11e, 0x90, 0x2, 0x6e9, 0x6eb, 0x5, 0x120, 
    0x91, 0x2, 0x6ea, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6eb, 0x3, 0x2, 
    0x2, 0x2, 0x6eb, 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6e8, 0x3, 0x2, 
    0x2, 0x2, 0x6ec, 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6ef, 0x3, 0x2, 
    0x2, 0x2, 0x6ee, 0x6d7, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6e4, 0x3, 0x2, 
    0x2, 0x2, 0x6ef, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6f2, 0x5, 0xc, 
    0x7, 0x2, 0x6f1, 0x6f0, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6f2, 0x3, 0x2, 
    0x2, 0x2, 0x6f2, 0x6f3, 0x3, 0x2, 0x2, 0x2, 0x6f3, 0x6f4, 0x5, 0x118, 
    0x8d, 0x2, 0x6f4, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f6, 0x7, 0x28, 
    0x2, 0x2, 0x6f6, 0x121, 0x3, 0x2, 0x2, 0x2, 0x6f7, 0x6f8, 0x9, 0x11, 
    0x2, 0x2, 0x6f8, 0x123, 0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x5, 0x126, 
    0x94, 0x2, 0x6fa, 0x6fb, 0x8, 0x93, 0x1, 0x2, 0x6fb, 0x700, 0x3, 0x2, 
    0x2, 0x2, 0x6fc, 0x6fd, 0x5, 0x13c, 0x9f, 0x2, 0x6fd, 0x6fe, 0x7, 0x80, 
    0x2, 0x2, 0x6fe, 0x700, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x6f9, 0x3, 0x2, 
    0x2, 0x2, 0x6ff, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x700, 0x701, 0x3, 0x2, 
    0x2, 0x2, 0x701, 0x6ff, 0x3, 0x2, 0x2, 0x2, 0x701, 0x702, 0x3, 0x2, 
    0x2, 0x2, 0x702, 0x703, 0x3, 0x2, 0x2, 0x2, 0x703, 0x704, 0x8, 0x93, 
    0x1, 0x2, 0x704, 0x125, 0x3, 0x2, 0x2, 0x2, 0x705, 0x707, 0x5, 0xce, 
    0x68, 0x2, 0x706, 0x705, 0x3, 0x2, 0x2, 0x2, 0x706, 0x707, 0x3, 0x2, 
    0x2, 0x2, 0x707, 0x709, 0x3, 0x2, 0x2, 0x2, 0x708, 0x70a, 0x5, 0x8c, 
    0x47, 0x2, 0x709, 0x708, 0x3, 0x2, 0x2, 0x2, 0x709, 0x70a, 0x3, 0x2, 
    0x2, 0x2, 0x70a, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x70b, 0x70d, 0x5, 0x128, 
    0x95, 0x2, 0x70c, 0x70b, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70d, 0x3, 0x2, 
    0x2, 0x2, 0x70d, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x718, 0x7, 0x82, 
    0x2, 0x2, 0x70f, 0x710, 0x5, 0x10a, 0x86, 0x2, 0x710, 0x711, 0x8, 0x94, 
    0x1, 0x2, 0x711, 0x718, 0x3, 0x2, 0x2, 0x2, 0x712, 0x718, 0x5, 0xc6, 
    0x64, 0x2, 0x713, 0x718, 0x5, 0x84, 0x43, 0x2, 0x714, 0x718, 0x5, 0x150, 
    0xa9, 0x2, 0x715, 0x718, 0x5, 0x80, 0x41, 0x2, 0x716, 0x718, 0x5, 0x86, 
    0x44, 0x2, 0x717, 0x706, 0x3, 0x2, 0x2, 0x2, 0x717, 0x70f, 0x3, 0x2, 
    0x2, 0x2, 0x717, 0x712, 0x3, 0x2, 0x2, 0x2, 0x717, 0x713, 0x3, 0x2, 
    0x2, 0x2, 0x717, 0x714, 0x3, 0x2, 0x2, 0x2, 0x717, 0x715, 0x3, 0x2, 
    0x2, 0x2, 0x717, 0x716, 0x3, 0x2, 0x2, 0x2, 0x718, 0x719, 0x3, 0x2, 
    0x2, 0x2, 0x719, 0x71a, 0x8, 0x94, 0x1, 0x2, 0x71a, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x71b, 0x720, 0x5, 0x12a, 0x96, 0x2, 0x71c, 0x71d, 0x7, 0x7c, 
    0x2, 0x2, 0x71d, 0x71f, 0x5, 0x12a, 0x96, 0x2, 0x71e, 0x71c, 0x3, 0x2, 
    0x2, 0x2, 0x71f, 0x722, 0x3, 0x2, 0x2, 0x2, 0x720, 0x71e, 0x3, 0x2, 
    0x2, 0x2, 0x720, 0x721, 0x3, 0x2, 0x2, 0x2, 0x721, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x722, 0x720, 0x3, 0x2, 0x2, 0x2, 0x723, 0x72a, 0x5, 0xe4, 
    0x73, 0x2, 0x724, 0x72b, 0x5, 0x12c, 0x97, 0x2, 0x725, 0x72b, 0x5, 0x130, 
    0x99, 0x2, 0x726, 0x727, 0x5, 0x12c, 0x97, 0x2, 0x727, 0x728, 0x5, 0x130, 
    0x99, 0x2, 0x728, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x729, 0x72b, 0x5, 0x110, 
    0x89, 0x2, 0x72a, 0x724, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x725, 0x3, 0x2, 
    0x2, 0x2, 0x72a, 0x726, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x729, 0x3, 0x2, 
    0x2, 0x2, 0x72b, 0x736, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x736, 0x5, 0xe4, 
    0x73, 0x2, 0x72d, 0x72f, 0x7, 0x86, 0x2, 0x2, 0x72e, 0x72d, 0x3, 0x2, 
    0x2, 0x2, 0x72e, 0x72f, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x731, 0x3, 0x2, 
    0x2, 0x2, 0x730, 0x732, 0x5, 0xce, 0x68, 0x2, 0x731, 0x730, 0x3, 0x2, 
    0x2, 0x2, 0x731, 0x732, 0x3, 0x2, 0x2, 0x2, 0x732, 0x733, 0x3, 0x2, 
    0x2, 0x2, 0x733, 0x734, 0x7, 0x80, 0x2, 0x2, 0x734, 0x736, 0x5, 0x5e, 
    0x30, 0x2, 0x735, 0x723, 0x3, 0x2, 0x2, 0x2, 0x735, 0x72c, 0x3, 0x2, 
    0x2, 0x2, 0x735, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x736, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x737, 0x739, 0x5, 0x12e, 0x98, 0x2, 0x738, 0x737, 0x3, 0x2, 
    0x2, 0x2, 0x739, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x73a, 0x738, 0x3, 0x2, 
    0x2, 0x2, 0x73a, 0x73b, 0x3, 0x2, 0x2, 0x2, 0x73b, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x73c, 0x73d, 0x9, 0x16, 0x2, 0x2, 0x73d, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x73e, 0x73f, 0x7, 0x67, 0x2, 0x2, 0x73f, 0x740, 0x7, 0x3, 
    0x2, 0x2, 0x740, 0x131, 0x3, 0x2, 0x2, 0x2, 0x741, 0x742, 0x7, 0x80, 
    0x2, 0x2, 0x742, 0x743, 0x5, 0x134, 0x9b, 0x2, 0x743, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x744, 0x746, 0x5, 0x136, 0x9c, 0x2, 0x745, 0x747, 0x7, 0x85, 
    0x2, 0x2, 0x746, 0x745, 0x3, 0x2, 0x2, 0x2, 0x746, 0x747, 0x3, 0x2, 
    0x2, 0x2, 0x747, 0x74f, 0x3, 0x2, 0x2, 0x2, 0x748, 0x749, 0x7, 0x7c, 
    0x2, 0x2, 0x749, 0x74b, 0x5, 0x136, 0x9c, 0x2, 0x74a, 0x74c, 0x7, 0x85, 
    0x2, 0x2, 0x74b, 0x74a, 0x3, 0x2, 0x2, 0x2, 0x74b, 0x74c, 0x3, 0x2, 
    0x2, 0x2, 0x74c, 0x74e, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x748, 0x3, 0x2, 
    0x2, 0x2, 0x74e, 0x751, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x74d, 0x3, 0x2, 
    0x2, 0x2, 0x74f, 0x750, 0x3, 0x2, 0x2, 0x2, 0x750, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x751, 0x74f, 0x3, 0x2, 0x2, 0x2, 0x752, 0x754, 0x5, 0xce, 
    0x68, 0x2, 0x753, 0x752, 0x3, 0x2, 0x2, 0x2, 0x753, 0x754, 0x3, 0x2, 
    0x2, 0x2, 0x754, 0x761, 0x3, 0x2, 0x2, 0x2, 0x755, 0x762, 0x5, 0x13a, 
    0x9e, 0x2, 0x756, 0x758, 0x7, 0x52, 0x2, 0x2, 0x757, 0x759, 0x5, 0x13c, 
    0x9f, 0x2, 0x758, 0x757, 0x3, 0x2, 0x2, 0x2, 0x758, 0x759, 0x3, 0x2, 
    0x2, 0x2, 0x759, 0x75a, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x762, 0x5, 0x13a, 
    0x9e, 0x2, 0x75b, 0x75d, 0x5, 0x13c, 0x9f, 0x2, 0x75c, 0x75e, 0x7, 0x52, 
    0x2, 0x2, 0x75d, 0x75c, 0x3, 0x2, 0x2, 0x2, 0x75d, 0x75e, 0x3, 0x2, 
    0x2, 0x2, 0x75e, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x75f, 0x760, 0x5, 0x13a, 
    0x9e, 0x2, 0x760, 0x762, 0x3, 0x2, 0x2, 0x2, 0x761, 0x755, 0x3, 0x2, 
    0x2, 0x2, 0x761, 0x756, 0x3, 0x2, 0x2, 0x2, 0x761, 0x75b, 0x3, 0x2, 
    0x2, 0x2, 0x762, 0x137, 0x3, 0x2, 0x2, 0x2, 0x763, 0x765, 0x5, 0xc, 
    0x7, 0x2, 0x764, 0x763, 0x3, 0x2, 0x2, 0x2, 0x764, 0x765, 0x3, 0x2, 
    0x2, 0x2, 0x765, 0x766, 0x3, 0x2, 0x2, 0x2, 0x766, 0x769, 0x5, 0x118, 
    0x8d, 0x2, 0x767, 0x769, 0x5, 0xa4, 0x53, 0x2, 0x768, 0x764, 0x3, 0x2, 
    0x2, 0x2, 0x768, 0x767, 0x3, 0x2, 0x2, 0x2, 0x769, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x76b, 0x5, 0x138, 0x9d, 0x2, 0x76b, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x76c, 0x76d, 0x9, 0x17, 0x2, 0x2, 0x76d, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x76e, 0x76f, 0x7, 0x36, 0x2, 0x2, 0x76f, 0x770, 0x5, 0x140, 
    0xa1, 0x2, 0x770, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x771, 0x773, 0x5, 0x98, 
    0x4d, 0x2, 0x772, 0x774, 0x5, 0x142, 0xa2, 0x2, 0x773, 0x772, 0x3, 0x2, 
    0x2, 0x2, 0x773, 0x774, 0x3, 0x2, 0x2, 0x2, 0x774, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x775, 0x777, 0x5, 0xee, 0x78, 0x2, 0x776, 0x778, 0x5, 0x142, 
    0xa2, 0x2, 0x777, 0x776, 0x3, 0x2, 0x2, 0x2, 0x777, 0x778, 0x3, 0x2, 
    0x2, 0x2, 0x778, 0x143, 0x3, 0x2, 0x2, 0x2, 0x779, 0x77a, 0x7, 0x80, 
    0x2, 0x2, 0x77a, 0x77b, 0x5, 0x146, 0xa4, 0x2, 0x77b, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x77c, 0x77e, 0x5, 0x148, 0xa5, 0x2, 0x77d, 0x77f, 0x7, 0x85, 
    0x2, 0x2, 0x77e, 0x77d, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x77f, 0x3, 0x2, 
    0x2, 0x2, 0x77f, 0x787, 0x3, 0x2, 0x2, 0x2, 0x780, 0x781, 0x7, 0x7c, 
    0x2, 0x2, 0x781, 0x783, 0x5, 0x148, 0xa5, 0x2, 0x782, 0x784, 0x7, 0x85, 
    0x2, 0x2, 0x783, 0x782, 0x3, 0x2, 0x2, 0x2, 0x783, 0x784, 0x3, 0x2, 
    0x2, 0x2, 0x784, 0x786, 0x3, 0x2, 0x2, 0x2, 0x785, 0x780, 0x3, 0x2, 
    0x2, 0x2, 0x786, 0x789, 0x3, 0x2, 0x2, 0x2, 0x787, 0x785, 0x3, 0x2, 
    0x2, 0x2, 0x787, 0x788, 0x3, 0x2, 0x2, 0x2, 0x788, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x789, 0x787, 0x3, 0x2, 0x2, 0x2, 0x78a, 0x791, 0x5, 0x14a, 
    0xa6, 0x2, 0x78b, 0x78d, 0x7, 0x57, 0x2, 0x2, 0x78c, 0x78e, 0x5, 0x24, 
    0x13, 0x2, 0x78d, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x78e, 0x3, 0x2, 
    0x2, 0x2, 0x78e, 0x78f, 0x3, 0x2, 0x2, 0x2, 0x78f, 0x792, 0x7, 0x58, 
    0x2, 0x2, 0x790, 0x792, 0x5, 0x116, 0x8c, 0x2, 0x791, 0x78b, 0x3, 0x2, 
    0x2, 0x2, 0x791, 0x790, 0x3, 0x2, 0x2, 0x2, 0x792, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x793, 0x796, 0x5, 0x138, 0x9d, 0x2, 0x794, 0x796, 0x7, 0x86, 
    0x2, 0x2, 0x795, 0x793, 0x3, 0x2, 0x2, 0x2, 0x795, 0x794, 0x3, 0x2, 
    0x2, 0x2, 0x796, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x797, 0x798, 0x7, 0x36, 
    0x2, 0x2, 0x798, 0x799, 0x5, 0x17c, 0xbf, 0x2, 0x799, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x79a, 0x79e, 0x7, 0x36, 0x2, 0x2, 0x79b, 0x79c, 0x7, 0x6, 
    0x2, 0x2, 0x79c, 0x79f, 0x7, 0x86, 0x2, 0x2, 0x79d, 0x79f, 0x7, 0x8e, 
    0x2, 0x2, 0x79e, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x79d, 0x3, 0x2, 
    0x2, 0x2, 0x79f, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x7a0, 0x7a1, 0x7, 0x46, 
    0x2, 0x2, 0x7a1, 0x7a2, 0x7, 0x68, 0x2, 0x2, 0x7a2, 0x7a3, 0x5, 0x152, 
    0xaa, 0x2, 0x7a3, 0x7a4, 0x7, 0x69, 0x2, 0x2, 0x7a4, 0x7a5, 0x5, 0x7c, 
    0x3f, 0x2, 0x7a5, 0x151, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7ab, 0x5, 0x154, 
    0xab, 0x2, 0x7a7, 0x7a8, 0x7, 0x7c, 0x2, 0x2, 0x7a8, 0x7aa, 0x5, 0x154, 
    0xab, 0x2, 0x7a9, 0x7a7, 0x3, 0x2, 0x2, 0x2, 0x7aa, 0x7ad, 0x3, 0x2, 
    0x2, 0x2, 0x7ab, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7ab, 0x7ac, 0x3, 0x2, 
    0x2, 0x2, 0x7ac, 0x153, 0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ab, 0x3, 0x2, 
    0x2, 0x2, 0x7ae, 0x7b1, 0x5, 0x156, 0xac, 0x2, 0x7af, 0x7b1, 0x5, 0x108, 
    0x85, 0x2, 0x7b0, 0x7ae, 0x3, 0x2, 0x2, 0x2, 0x7b0, 0x7af, 0x3, 0x2, 
    0x2, 0x2, 0x7b1, 0x155, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b3, 0x7, 0x46, 
    0x2, 0x2, 0x7b3, 0x7b4, 0x7, 0x68, 0x2, 0x2, 0x7b4, 0x7b5, 0x5, 0x152, 
    0xaa, 0x2, 0x7b5, 0x7b6, 0x7, 0x69, 0x2, 0x2, 0x7b6, 0x7b8, 0x3, 0x2, 
    0x2, 0x2, 0x7b7, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7b7, 0x7b8, 0x3, 0x2, 
    0x2, 0x2, 0x7b8, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7b9, 0x7bc, 0x7, 0x17, 
    0x2, 0x2, 0x7ba, 0x7bc, 0x7, 0x4e, 0x2, 0x2, 0x7bb, 0x7b7, 0x3, 0x2, 
    0x2, 0x2, 0x7bb, 0x7ba, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7c8, 0x3, 0x2, 
    0x2, 0x2, 0x7bd, 0x7bf, 0x7, 0x85, 0x2, 0x2, 0x7be, 0x7bd, 0x3, 0x2, 
    0x2, 0x2, 0x7be, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7c1, 0x3, 0x2, 
    0x2, 0x2, 0x7c0, 0x7c2, 0x7, 0x86, 0x2, 0x2, 0x7c1, 0x7c0, 0x3, 0x2, 
    0x2, 0x2, 0x7c1, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x7c9, 0x3, 0x2, 
    0x2, 0x2, 0x7c3, 0x7c5, 0x7, 0x86, 0x2, 0x2, 0x7c4, 0x7c3, 0x3, 0x2, 
    0x2, 0x2, 0x7c4, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c6, 0x3, 0x2, 
    0x2, 0x2, 0x7c6, 0x7c7, 0x7, 0x67, 0x2, 0x2, 0x7c7, 0x7c9, 0x5, 0xf8, 
    0x7d, 0x2, 0x7c8, 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7c4, 0x3, 0x2, 
    0x2, 0x2, 0x7c9, 0x157, 0x3, 0x2, 0x2, 0x2, 0x7ca, 0x7cb, 0x5, 0x15c, 
    0xaf, 0x2, 0x7cb, 0x7cd, 0x7, 0x68, 0x2, 0x2, 0x7cc, 0x7ce, 0x5, 0x15e, 
    0xb0, 0x2, 0x7cd, 0x7cc, 0x3, 0x2, 0x2, 0x2, 0x7cd, 0x7ce, 0x3, 0x2, 
    0x2, 0x2, 0x7ce, 0x7cf, 0x3, 0x2, 0x2, 0x2, 0x7cf, 0x7d0, 0x7, 0x69, 
    0x2, 0x2, 0x7d0, 0x159, 0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7dd, 0x5, 0x158, 
    0xad, 0x2, 0x7d2, 0x7d5, 0x5, 0x14c, 0xa7, 0x2, 0x7d3, 0x7d5, 0x5, 0x14e, 
    0xa8, 0x2, 0x7d4, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d4, 0x7d3, 0x3, 0x2, 
    0x2, 0x2, 0x7d5, 0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d6, 0x7d8, 0x7, 0x68, 
    0x2, 0x2, 0x7d7, 0x7d9, 0x5, 0x15e, 0xb0, 0x2, 0x7d8, 0x7d7, 0x3, 0x2, 
    0x2, 0x2, 0x7d8, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7d9, 0x7da, 0x3, 0x2, 
    0x2, 0x2, 0x7da, 0x7db, 0x7, 0x69, 0x2, 0x2, 0x7db, 0x7dd, 0x3, 0x2, 
    0x2, 0x2, 0x7dc, 0x7d1, 0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7d4, 0x3, 0x2, 
    0x2, 0x2, 0x7dd, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x7de, 0x7df, 0x7, 0x86, 
    0x2, 0x2, 0x7df, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e2, 0x5, 0x160, 
    0xb1, 0x2, 0x7e1, 0x7e3, 0x7, 0x85, 0x2, 0x2, 0x7e2, 0x7e1, 0x3, 0x2, 
    0x2, 0x2, 0x7e2, 0x7e3, 0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7eb, 0x3, 0x2, 
    0x2, 0x2, 0x7e4, 0x7e5, 0x7, 0x7c, 0x2, 0x2, 0x7e5, 0x7e7, 0x5, 0x160, 
    0xb1, 0x2, 0x7e6, 0x7e8, 0x7, 0x85, 0x2, 0x2, 0x7e7, 0x7e6, 0x3, 0x2, 
    0x2, 0x2, 0x7e7, 0x7e8, 0x3, 0x2, 0x2, 0x2, 0x7e8, 0x7ea, 0x3, 0x2, 
    0x2, 0x2, 0x7e9, 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7ea, 0x7ed, 0x3, 0x2, 
    0x2, 0x2, 0x7eb, 0x7e9, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7ec, 0x3, 0x2, 
    0x2, 0x2, 0x7ec, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x7ed, 0x7eb, 0x3, 0x2, 
    0x2, 0x2, 0x7ee, 0x7f2, 0x5, 0xf8, 0x7d, 0x2, 0x7ef, 0x7f2, 0x5, 0x5e, 
    0x30, 0x2, 0x7f0, 0x7f2, 0x5, 0x6, 0x4, 0x2, 0x7f1, 0x7ee, 0x3, 0x2, 
    0x2, 0x2, 0x7f1, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7f0, 0x3, 0x2, 
    0x2, 0x2, 0x7f2, 0x161, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f4, 0x7, 0x4e, 
    0x2, 0x2, 0x7f4, 0x7fa, 0x5, 0xc, 0x7, 0x2, 0x7f5, 0x7fb, 0x7, 0x86, 
    0x2, 0x2, 0x7f6, 0x7f8, 0x7, 0x46, 0x2, 0x2, 0x7f7, 0x7f6, 0x3, 0x2, 
    0x2, 0x2, 0x7f7, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7f9, 0x3, 0x2, 
    0x2, 0x2, 0x7f9, 0x7fb, 0x5, 0x158, 0xad, 0x2, 0x7fa, 0x7f5, 0x3, 0x2, 
    0x2, 0x2, 0x7fa, 0x7f7, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x7fc, 0x7fe, 0x7, 0x26, 0x2, 0x2, 0x7fd, 0x7fc, 0x3, 0x2, 
    0x2, 0x2, 0x7fd, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7fe, 0x7ff, 0x3, 0x2, 
    0x2, 0x2, 0x7ff, 0x800, 0x7, 0x46, 0x2, 0x2, 0x800, 0x801, 0x5, 0x7c, 
    0x3f, 0x2, 0x801, 0x165, 0x3, 0x2, 0x2, 0x2, 0x802, 0x803, 0x7, 0x46, 
    0x2, 0x2, 0x803, 0x804, 0x7, 0x68, 0x2, 0x2, 0x804, 0x805, 0x7, 0x69, 
    0x2, 0x2, 0x805, 0x806, 0x5, 0x7c, 0x3f, 0x2, 0x806, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x807, 0x808, 0x7, 0x4b, 0x2, 0x2, 0x808, 0x809, 0x5, 0x66, 
    0x34, 0x2, 0x809, 0x80a, 0x5, 0x16c, 0xb7, 0x2, 0x80a, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x80b, 0x80d, 0x7, 0x4b, 0x2, 0x2, 0x80c, 0x80e, 0x5, 0x144, 
    0xa3, 0x2, 0x80d, 0x80c, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x80e, 0x3, 0x2, 
    0x2, 0x2, 0x80e, 0x80f, 0x3, 0x2, 0x2, 0x2, 0x80f, 0x810, 0x5, 0x66, 
    0x34, 0x2, 0x810, 0x811, 0x5, 0x16c, 0xb7, 0x2, 0x811, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x812, 0x814, 0x5, 0x16e, 0xb8, 0x2, 0x813, 0x812, 0x3, 0x2, 
    0x2, 0x2, 0x814, 0x815, 0x3, 0x2, 0x2, 0x2, 0x815, 0x813, 0x3, 0x2, 
    0x2, 0x2, 0x815, 0x816, 0x3, 0x2, 0x2, 0x2, 0x816, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x817, 0x818, 0x7, 0x13, 0x2, 0x2, 0x818, 0x819, 0x7, 0x57, 
    0x2, 0x2, 0x819, 0x81a, 0x5, 0x170, 0xb9, 0x2, 0x81a, 0x81b, 0x7, 0x58, 
    0x2, 0x2, 0x81b, 0x81c, 0x5, 0x66, 0x34, 0x2, 0x81c, 0x16f, 0x3, 0x2, 
    0x2, 0x2, 0x81d, 0x81f, 0x5, 0xce, 0x68, 0x2, 0x81e, 0x81d, 0x3, 0x2, 
    0x2, 0x2, 0x81e, 0x81f, 0x3, 0x2, 0x2, 0x2, 0x81f, 0x820, 0x3, 0x2, 
    0x2, 0x2, 0x820, 0x823, 0x5, 0x98, 0x4d, 0x2, 0x821, 0x824, 0x5, 0xe4, 
    0x73, 0x2, 0x822, 0x824, 0x5, 0xfa, 0x7e, 0x2, 0x823, 0x821, 0x3, 0x2, 
    0x2, 0x2, 0x823, 0x822, 0x3, 0x2, 0x2, 0x2, 0x823, 0x824, 0x3, 0x2, 
    0x2, 0x2, 0x824, 0x827, 0x3, 0x2, 0x2, 0x2, 0x825, 0x827, 0x7, 0x85, 
    0x2, 0x2, 0x826, 0x81e, 0x3, 0x2, 0x2, 0x2, 0x826, 0x825, 0x3, 0x2, 
    0x2, 0x2, 0x827, 0x171, 0x3, 0x2, 0x2, 0x2, 0x828, 0x82a, 0x7, 0x49, 
    0x2, 0x2, 0x829, 0x82b, 0x5, 0x58, 0x2d, 0x2, 0x82a, 0x829, 0x3, 0x2, 
    0x2, 0x2, 0x82a, 0x82b, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x82c, 0x82f, 0x5, 0x176, 0xbc, 0x2, 0x82d, 0x82f, 0x5, 0x17a, 
    0xbe, 0x2, 0x82e, 0x82c, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x82d, 0x3, 0x2, 
    0x2, 0x2, 0x82f, 0x175, 0x3, 0x2, 0x2, 0x2, 0x830, 0x831, 0x7, 0x49, 
    0x2, 0x2, 0x831, 0x833, 0x7, 0x57, 0x2, 0x2, 0x832, 0x834, 0x5, 0x178, 
    0xbd, 0x2, 0x833, 0x832, 0x3, 0x2, 0x2, 0x2, 0x833, 0x834, 0x3, 0x2, 
    0x2, 0x2, 0x834, 0x835, 0x3, 0x2, 0x2, 0x2, 0x835, 0x836, 0x7, 0x58, 
    0x2, 0x2, 0x836, 0x177, 0x3, 0x2, 0x2, 0x2, 0x837, 0x839, 0x5, 0xf8, 
    0x7d, 0x2, 0x838, 0x83a, 0x7, 0x85, 0x2, 0x2, 0x839, 0x838, 0x3, 0x2, 
    0x2, 0x2, 0x839, 0x83a, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x842, 0x3, 0x2, 
    0x2, 0x2, 0x83b, 0x83c, 0x7, 0x7c, 0x2, 0x2, 0x83c, 0x83e, 0x5, 0xf8, 
    0x7d, 0x2, 0x83d, 0x83f, 0x7, 0x85, 0x2, 0x2, 0x83e, 0x83d, 0x3, 0x2, 
    0x2, 0x2, 0x83e, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x841, 0x3, 0x2, 
    0x2, 0x2, 0x840, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x841, 0x844, 0x3, 0x2, 
    0x2, 0x2, 0x842, 0x840, 0x3, 0x2, 0x2, 0x2, 0x842, 0x843, 0x3, 0x2, 
    0x2, 0x2, 0x843, 0x179, 0x3, 0x2, 0x2, 0x2, 0x844, 0x842, 0x3, 0x2, 
    0x2, 0x2, 0x845, 0x846, 0x7, 0x34, 0x2, 0x2, 0x846, 0x847, 0x7, 0x57, 
    0x2, 0x2, 0x847, 0x848, 0x5, 0x5e, 0x30, 0x2, 0x848, 0x849, 0x7, 0x58, 
    0x2, 0x2, 0x849, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x84a, 0x84c, 0x7, 0x34, 
    0x2, 0x2, 0x84b, 0x845, 0x3, 0x2, 0x2, 0x2, 0x84b, 0x84a, 0x3, 0x2, 
    0x2, 0x2, 0x84c, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x84d, 0x850, 0x7, 0x33, 
    0x2, 0x2, 0x84e, 0x84f, 0x7, 0x59, 0x2, 0x2, 0x84f, 0x851, 0x7, 0x5a, 
    0x2, 0x2, 0x850, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x850, 0x851, 0x3, 0x2, 
    0x2, 0x2, 0x851, 0x881, 0x3, 0x2, 0x2, 0x2, 0x852, 0x855, 0x7, 0x1e, 
    0x2, 0x2, 0x853, 0x854, 0x7, 0x59, 0x2, 0x2, 0x854, 0x856, 0x7, 0x5a, 
    0x2, 0x2, 0x855, 0x853, 0x3, 0x2, 0x2, 0x2, 0x855, 0x856, 0x3, 0x2, 
    0x2, 0x2, 0x856, 0x881, 0x3, 0x2, 0x2, 0x2, 0x857, 0x881, 0x7, 0x5d, 
    0x2, 0x2, 0x858, 0x881, 0x7, 0x5e, 0x2, 0x2, 0x859, 0x881, 0x7, 0x5f, 
    0x2, 0x2, 0x85a, 0x881, 0x7, 0x60, 0x2, 0x2, 0x85b, 0x881, 0x7, 0x61, 
    0x2, 0x2, 0x85c, 0x881, 0x7, 0x62, 0x2, 0x2, 0x85d, 0x881, 0x7, 0x63, 
    0x2, 0x2, 0x85e, 0x881, 0x7, 0x64, 0x2, 0x2, 0x85f, 0x881, 0x7, 0x65, 
    0x2, 0x2, 0x860, 0x881, 0x7, 0x66, 0x2, 0x2, 0x861, 0x881, 0x7, 0x67, 
    0x2, 0x2, 0x862, 0x881, 0x7, 0x69, 0x2, 0x2, 0x863, 0x881, 0x7, 0x68, 
    0x2, 0x2, 0x864, 0x881, 0x7, 0x77, 0x2, 0x2, 0x865, 0x881, 0x7, 0x6a, 
    0x2, 0x2, 0x866, 0x881, 0x7, 0x6b, 0x2, 0x2, 0x867, 0x881, 0x7, 0x6c, 
    0x2, 0x2, 0x868, 0x881, 0x7, 0x6e, 0x2, 0x2, 0x869, 0x881, 0x7, 0x6f, 
    0x2, 0x2, 0x86a, 0x881, 0x7, 0x70, 0x2, 0x2, 0x86b, 0x881, 0x7, 0x71, 
    0x2, 0x2, 0x86c, 0x86d, 0x7, 0x68, 0x2, 0x2, 0x86d, 0x881, 0x7, 0x68, 
    0x2, 0x2, 0x86e, 0x86f, 0x7, 0x69, 0x2, 0x2, 0x86f, 0x881, 0x7, 0x69, 
    0x2, 0x2, 0x870, 0x881, 0x7, 0x73, 0x2, 0x2, 0x871, 0x881, 0x7, 0x72, 
    0x2, 0x2, 0x872, 0x881, 0x7, 0x74, 0x2, 0x2, 0x873, 0x881, 0x7, 0x75, 
    0x2, 0x2, 0x874, 0x881, 0x7, 0x76, 0x2, 0x2, 0x875, 0x881, 0x7, 0x78, 
    0x2, 0x2, 0x876, 0x881, 0x7, 0x79, 0x2, 0x2, 0x877, 0x881, 0x7, 0x7a, 
    0x2, 0x2, 0x878, 0x881, 0x7, 0x7b, 0x2, 0x2, 0x879, 0x881, 0x7, 0x7c, 
    0x2, 0x2, 0x87a, 0x881, 0x7, 0x7d, 0x2, 0x2, 0x87b, 0x881, 0x7, 0x7e, 
    0x2, 0x2, 0x87c, 0x87d, 0x7, 0x57, 0x2, 0x2, 0x87d, 0x881, 0x7, 0x58, 
    0x2, 0x2, 0x87e, 0x87f, 0x7, 0x59, 0x2, 0x2, 0x87f, 0x881, 0x7, 0x5a, 
    0x2, 0x2, 0x880, 0x84d, 0x3, 0x2, 0x2, 0x2, 0x880, 0x852, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x857, 0x3, 0x2, 0x2, 0x2, 0x880, 0x858, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x859, 0x3, 0x2, 0x2, 0x2, 0x880, 0x85a, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x85b, 0x3, 0x2, 0x2, 0x2, 0x880, 0x85c, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x85d, 0x3, 0x2, 0x2, 0x2, 0x880, 0x85e, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x85f, 0x3, 0x2, 0x2, 0x2, 0x880, 0x860, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x861, 0x3, 0x2, 0x2, 0x2, 0x880, 0x862, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x863, 0x3, 0x2, 0x2, 0x2, 0x880, 0x864, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x865, 0x3, 0x2, 0x2, 0x2, 0x880, 0x866, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x867, 0x3, 0x2, 0x2, 0x2, 0x880, 0x868, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x869, 0x3, 0x2, 0x2, 0x2, 0x880, 0x86a, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x880, 0x86c, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x880, 0x870, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x871, 0x3, 0x2, 0x2, 0x2, 0x880, 0x872, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x873, 0x3, 0x2, 0x2, 0x2, 0x880, 0x874, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x875, 0x3, 0x2, 0x2, 0x2, 0x880, 0x876, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x877, 0x3, 0x2, 0x2, 0x2, 0x880, 0x878, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x879, 0x3, 0x2, 0x2, 0x2, 0x880, 0x87a, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x87b, 0x3, 0x2, 0x2, 0x2, 0x880, 0x87c, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x87e, 0x3, 0x2, 0x2, 0x2, 0x881, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x882, 0x883, 0x9, 0x18, 0x2, 0x2, 0x883, 0x17f, 0x3, 0x2, 
    0x2, 0x2, 0x884, 0x885, 0x7, 0x93, 0x2, 0x2, 0x885, 0x889, 0x8, 0xc1, 
    0x1, 0x2, 0x886, 0x887, 0x7, 0x92, 0x2, 0x2, 0x887, 0x889, 0x8, 0xc1, 
    0x1, 0x2, 0x888, 0x884, 0x3, 0x2, 0x2, 0x2, 0x888, 0x886, 0x3, 0x2, 
    0x2, 0x2, 0x889, 0x181, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x185, 0x18c, 0x195, 
    0x199, 0x1a2, 0x1a5, 0x1a9, 0x1b1, 0x1b8, 0x1bb, 0x1c0, 0x1c5, 0x1cb, 
    0x1d3, 0x1d5, 0x1de, 0x1e2, 0x1e6, 0x1e9, 0x1ed, 0x1f0, 0x1f7, 0x1fb, 
    0x1fe, 0x201, 0x204, 0x20a, 0x20e, 0x212, 0x220, 0x224, 0x22a, 0x231, 
    0x237, 0x23b, 0x23f, 0x241, 0x249, 0x24e, 0x25b, 0x262, 0x26e, 0x278, 
    0x27d, 0x281, 0x288, 0x28b, 0x293, 0x297, 0x29a, 0x2a1, 0x2a8, 0x2ac, 
    0x2b1, 0x2b5, 0x2b8, 0x2bd, 0x2cc, 0x2d3, 0x2db, 0x2e3, 0x2ec, 0x2f3, 
    0x2fa, 0x302, 0x30a, 0x312, 0x31a, 0x322, 0x32a, 0x333, 0x33b, 0x344, 
    0x34e, 0x356, 0x358, 0x35d, 0x363, 0x369, 0x371, 0x37b, 0x386, 0x38e, 
    0x392, 0x399, 0x39b, 0x3af, 0x3b3, 0x3b9, 0x3be, 0x3c2, 0x3c5, 0x3cc, 
    0x3d3, 0x3d7, 0x3e3, 0x3f2, 0x3fe, 0x403, 0x40e, 0x414, 0x419, 0x421, 
    0x426, 0x42b, 0x444, 0x44b, 0x44e, 0x45d, 0x463, 0x468, 0x46b, 0x470, 
    0x473, 0x47a, 0x491, 0x497, 0x49d, 0x4a3, 0x4a6, 0x4ac, 0x4b0, 0x4b4, 
    0x4b7, 0x4bf, 0x4c1, 0x4c7, 0x4ca, 0x4cd, 0x4d0, 0x4d4, 0x4d8, 0x4de, 
    0x4e8, 0x4ee, 0x4f4, 0x4f9, 0x4fe, 0x502, 0x50f, 0x515, 0x519, 0x51f, 
    0x524, 0x533, 0x537, 0x53c, 0x541, 0x546, 0x54c, 0x54f, 0x558, 0x55c, 
    0x561, 0x565, 0x56b, 0x572, 0x583, 0x585, 0x590, 0x599, 0x5a2, 0x5a6, 
    0x5aa, 0x5b2, 0x5b8, 0x5be, 0x5c2, 0x5c4, 0x5c8, 0x5cd, 0x5d1, 0x5d4, 
    0x5d7, 0x5da, 0x5df, 0x5e3, 0x5e6, 0x5ea, 0x5ed, 0x5ef, 0x5f4, 0x5fb, 
    0x601, 0x605, 0x60b, 0x611, 0x614, 0x616, 0x61c, 0x620, 0x626, 0x62d, 
    0x631, 0x633, 0x637, 0x63d, 0x649, 0x64d, 0x64f, 0x653, 0x658, 0x65b, 
    0x662, 0x666, 0x66b, 0x66d, 0x671, 0x678, 0x67c, 0x67f, 0x685, 0x68c, 
    0x695, 0x69e, 0x6a7, 0x6ac, 0x6b0, 0x6b4, 0x6b9, 0x6bd, 0x6c3, 0x6c5, 
    0x6cb, 0x6d2, 0x6d9, 0x6dd, 0x6df, 0x6e2, 0x6e6, 0x6ea, 0x6ec, 0x6ee, 
    0x6f1, 0x6ff, 0x701, 0x706, 0x709, 0x70c, 0x717, 0x720, 0x72a, 0x72e, 
    0x731, 0x735, 0x73a, 0x746, 0x74b, 0x74f, 0x753, 0x758, 0x75d, 0x761, 
    0x764, 0x768, 0x773, 0x777, 0x77e, 0x783, 0x787, 0x78d, 0x791, 0x795, 
    0x79e, 0x7ab, 0x7b0, 0x7b7, 0x7bb, 0x7be, 0x7c1, 0x7c4, 0x7c8, 0x7cd, 
    0x7d4, 0x7d8, 0x7dc, 0x7e2, 0x7e7, 0x7eb, 0x7f1, 0x7f7, 0x7fa, 0x7fd, 
    0x80d, 0x815, 0x81e, 0x823, 0x826, 0x82a, 0x82e, 0x833, 0x839, 0x83e, 
    0x842, 0x84b, 0x850, 0x855, 0x880, 0x888, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

cpp::Initializer cpp::_init;

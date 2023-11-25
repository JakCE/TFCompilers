
// Generated from JakShell.g4 by ANTLR 4.13.1


#include "JakShellListener.h"

#include "JakShellParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct JakShellParserStaticData final {
  JakShellParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  JakShellParserStaticData(const JakShellParserStaticData&) = delete;
  JakShellParserStaticData(JakShellParserStaticData&&) = delete;
  JakShellParserStaticData& operator=(const JakShellParserStaticData&) = delete;
  JakShellParserStaticData& operator=(JakShellParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag jakshellParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
JakShellParserStaticData *jakshellParserStaticData = nullptr;

void jakshellParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (jakshellParserStaticData != nullptr) {
    return;
  }
#else
  assert(jakshellParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<JakShellParserStaticData>(
    std::vector<std::string>{
      "command", "listFiles", "changeDirectory", "makeDirectory", "ifStatement", 
      "forLoop", "printText", "echoText", "removeFile", "copyFile", "moveFile", 
      "listProcesses", "killProcess", "executeCommand", "listUsers", "showDate", 
      "showTime", "createFile", "appendToFile", "condition", "commands"
    },
    std::vector<std::string>{
      "", "'ls'", "'cd'", "'mkdir'", "'if'", "'then'", "'else'", "'end'", 
      "'for'", "'in'", "'..'", "'do'", "'print'", "'echo'", "'rm'", "'cp'", 
      "'mv'", "'ps'", "'kill'", "'who'", "'date'", "'time'", "'touch'", 
      "'>>'", "'=='", "'!='", "'>'", "'<'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "ID", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,30,141,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,
  	61,8,0,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,8,
  	1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,
  	1,13,1,13,5,13,113,8,13,10,13,12,13,116,9,13,1,14,1,14,1,15,1,15,1,16,
  	1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,
  	4,20,137,8,20,11,20,12,20,138,1,20,0,0,21,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,0,2,1,0,28,29,1,0,24,27,138,0,60,1,0,0,
  	0,2,62,1,0,0,0,4,64,1,0,0,0,6,67,1,0,0,0,8,70,1,0,0,0,10,78,1,0,0,0,12,
  	88,1,0,0,0,14,91,1,0,0,0,16,94,1,0,0,0,18,97,1,0,0,0,20,101,1,0,0,0,22,
  	105,1,0,0,0,24,107,1,0,0,0,26,110,1,0,0,0,28,117,1,0,0,0,30,119,1,0,0,
  	0,32,121,1,0,0,0,34,123,1,0,0,0,36,126,1,0,0,0,38,131,1,0,0,0,40,136,
  	1,0,0,0,42,61,3,2,1,0,43,61,3,4,2,0,44,61,3,6,3,0,45,61,3,8,4,0,46,61,
  	3,10,5,0,47,61,3,12,6,0,48,61,3,14,7,0,49,61,3,16,8,0,50,61,3,18,9,0,
  	51,61,3,20,10,0,52,61,3,22,11,0,53,61,3,24,12,0,54,61,3,26,13,0,55,61,
  	3,28,14,0,56,61,3,30,15,0,57,61,3,32,16,0,58,61,3,34,17,0,59,61,3,36,
  	18,0,60,42,1,0,0,0,60,43,1,0,0,0,60,44,1,0,0,0,60,45,1,0,0,0,60,46,1,
  	0,0,0,60,47,1,0,0,0,60,48,1,0,0,0,60,49,1,0,0,0,60,50,1,0,0,0,60,51,1,
  	0,0,0,60,52,1,0,0,0,60,53,1,0,0,0,60,54,1,0,0,0,60,55,1,0,0,0,60,56,1,
  	0,0,0,60,57,1,0,0,0,60,58,1,0,0,0,60,59,1,0,0,0,61,1,1,0,0,0,62,63,5,
  	1,0,0,63,3,1,0,0,0,64,65,5,2,0,0,65,66,5,28,0,0,66,5,1,0,0,0,67,68,5,
  	3,0,0,68,69,5,28,0,0,69,7,1,0,0,0,70,71,5,4,0,0,71,72,3,38,19,0,72,73,
  	5,5,0,0,73,74,3,40,20,0,74,75,5,6,0,0,75,76,3,40,20,0,76,77,5,7,0,0,77,
  	9,1,0,0,0,78,79,5,8,0,0,79,80,5,28,0,0,80,81,5,9,0,0,81,82,5,28,0,0,82,
  	83,5,10,0,0,83,84,5,28,0,0,84,85,5,11,0,0,85,86,3,40,20,0,86,87,5,7,0,
  	0,87,11,1,0,0,0,88,89,5,12,0,0,89,90,5,29,0,0,90,13,1,0,0,0,91,92,5,13,
  	0,0,92,93,5,29,0,0,93,15,1,0,0,0,94,95,5,14,0,0,95,96,5,28,0,0,96,17,
  	1,0,0,0,97,98,5,15,0,0,98,99,5,28,0,0,99,100,5,28,0,0,100,19,1,0,0,0,
  	101,102,5,16,0,0,102,103,5,28,0,0,103,104,5,28,0,0,104,21,1,0,0,0,105,
  	106,5,17,0,0,106,23,1,0,0,0,107,108,5,18,0,0,108,109,5,28,0,0,109,25,
  	1,0,0,0,110,114,5,28,0,0,111,113,7,0,0,0,112,111,1,0,0,0,113,116,1,0,
  	0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,27,1,0,0,0,116,114,1,0,0,0,117,
  	118,5,19,0,0,118,29,1,0,0,0,119,120,5,20,0,0,120,31,1,0,0,0,121,122,5,
  	21,0,0,122,33,1,0,0,0,123,124,5,22,0,0,124,125,5,28,0,0,125,35,1,0,0,
  	0,126,127,5,13,0,0,127,128,5,29,0,0,128,129,5,23,0,0,129,130,5,28,0,0,
  	130,37,1,0,0,0,131,132,5,28,0,0,132,133,7,1,0,0,133,134,5,28,0,0,134,
  	39,1,0,0,0,135,137,3,0,0,0,136,135,1,0,0,0,137,138,1,0,0,0,138,136,1,
  	0,0,0,138,139,1,0,0,0,139,41,1,0,0,0,3,60,114,138
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  jakshellParserStaticData = staticData.release();
}

}

JakShellParser::JakShellParser(TokenStream *input) : JakShellParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

JakShellParser::JakShellParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  JakShellParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *jakshellParserStaticData->atn, jakshellParserStaticData->decisionToDFA, jakshellParserStaticData->sharedContextCache, options);
}

JakShellParser::~JakShellParser() {
  delete _interpreter;
}

const atn::ATN& JakShellParser::getATN() const {
  return *jakshellParserStaticData->atn;
}

std::string JakShellParser::getGrammarFileName() const {
  return "JakShell.g4";
}

const std::vector<std::string>& JakShellParser::getRuleNames() const {
  return jakshellParserStaticData->ruleNames;
}

const dfa::Vocabulary& JakShellParser::getVocabulary() const {
  return jakshellParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView JakShellParser::getSerializedATN() const {
  return jakshellParserStaticData->serializedATN;
}


//----------------- CommandContext ------------------------------------------------------------------

JakShellParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JakShellParser::ListFilesContext* JakShellParser::CommandContext::listFiles() {
  return getRuleContext<JakShellParser::ListFilesContext>(0);
}

JakShellParser::ChangeDirectoryContext* JakShellParser::CommandContext::changeDirectory() {
  return getRuleContext<JakShellParser::ChangeDirectoryContext>(0);
}

JakShellParser::MakeDirectoryContext* JakShellParser::CommandContext::makeDirectory() {
  return getRuleContext<JakShellParser::MakeDirectoryContext>(0);
}

JakShellParser::IfStatementContext* JakShellParser::CommandContext::ifStatement() {
  return getRuleContext<JakShellParser::IfStatementContext>(0);
}

JakShellParser::ForLoopContext* JakShellParser::CommandContext::forLoop() {
  return getRuleContext<JakShellParser::ForLoopContext>(0);
}

JakShellParser::PrintTextContext* JakShellParser::CommandContext::printText() {
  return getRuleContext<JakShellParser::PrintTextContext>(0);
}

JakShellParser::EchoTextContext* JakShellParser::CommandContext::echoText() {
  return getRuleContext<JakShellParser::EchoTextContext>(0);
}

JakShellParser::RemoveFileContext* JakShellParser::CommandContext::removeFile() {
  return getRuleContext<JakShellParser::RemoveFileContext>(0);
}

JakShellParser::CopyFileContext* JakShellParser::CommandContext::copyFile() {
  return getRuleContext<JakShellParser::CopyFileContext>(0);
}

JakShellParser::MoveFileContext* JakShellParser::CommandContext::moveFile() {
  return getRuleContext<JakShellParser::MoveFileContext>(0);
}

JakShellParser::ListProcessesContext* JakShellParser::CommandContext::listProcesses() {
  return getRuleContext<JakShellParser::ListProcessesContext>(0);
}

JakShellParser::KillProcessContext* JakShellParser::CommandContext::killProcess() {
  return getRuleContext<JakShellParser::KillProcessContext>(0);
}

JakShellParser::ExecuteCommandContext* JakShellParser::CommandContext::executeCommand() {
  return getRuleContext<JakShellParser::ExecuteCommandContext>(0);
}

JakShellParser::ListUsersContext* JakShellParser::CommandContext::listUsers() {
  return getRuleContext<JakShellParser::ListUsersContext>(0);
}

JakShellParser::ShowDateContext* JakShellParser::CommandContext::showDate() {
  return getRuleContext<JakShellParser::ShowDateContext>(0);
}

JakShellParser::ShowTimeContext* JakShellParser::CommandContext::showTime() {
  return getRuleContext<JakShellParser::ShowTimeContext>(0);
}

JakShellParser::CreateFileContext* JakShellParser::CommandContext::createFile() {
  return getRuleContext<JakShellParser::CreateFileContext>(0);
}

JakShellParser::AppendToFileContext* JakShellParser::CommandContext::appendToFile() {
  return getRuleContext<JakShellParser::AppendToFileContext>(0);
}


size_t JakShellParser::CommandContext::getRuleIndex() const {
  return JakShellParser::RuleCommand;
}

void JakShellParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void JakShellParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}

JakShellParser::CommandContext* JakShellParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 0, JakShellParser::RuleCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(42);
      listFiles();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      changeDirectory();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(44);
      makeDirectory();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(45);
      ifStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(46);
      forLoop();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(47);
      printText();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(48);
      echoText();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(49);
      removeFile();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(50);
      copyFile();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(51);
      moveFile();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(52);
      listProcesses();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(53);
      killProcess();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(54);
      executeCommand();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(55);
      listUsers();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(56);
      showDate();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(57);
      showTime();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(58);
      createFile();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(59);
      appendToFile();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListFilesContext ------------------------------------------------------------------

JakShellParser::ListFilesContext::ListFilesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JakShellParser::ListFilesContext::getRuleIndex() const {
  return JakShellParser::RuleListFiles;
}

void JakShellParser::ListFilesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListFiles(this);
}

void JakShellParser::ListFilesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListFiles(this);
}

JakShellParser::ListFilesContext* JakShellParser::listFiles() {
  ListFilesContext *_localctx = _tracker.createInstance<ListFilesContext>(_ctx, getState());
  enterRule(_localctx, 2, JakShellParser::RuleListFiles);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(JakShellParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChangeDirectoryContext ------------------------------------------------------------------

JakShellParser::ChangeDirectoryContext::ChangeDirectoryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JakShellParser::ChangeDirectoryContext::ID() {
  return getToken(JakShellParser::ID, 0);
}


size_t JakShellParser::ChangeDirectoryContext::getRuleIndex() const {
  return JakShellParser::RuleChangeDirectory;
}

void JakShellParser::ChangeDirectoryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChangeDirectory(this);
}

void JakShellParser::ChangeDirectoryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChangeDirectory(this);
}

JakShellParser::ChangeDirectoryContext* JakShellParser::changeDirectory() {
  ChangeDirectoryContext *_localctx = _tracker.createInstance<ChangeDirectoryContext>(_ctx, getState());
  enterRule(_localctx, 4, JakShellParser::RuleChangeDirectory);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(JakShellParser::T__1);
    setState(65);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MakeDirectoryContext ------------------------------------------------------------------

JakShellParser::MakeDirectoryContext::MakeDirectoryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JakShellParser::MakeDirectoryContext::ID() {
  return getToken(JakShellParser::ID, 0);
}


size_t JakShellParser::MakeDirectoryContext::getRuleIndex() const {
  return JakShellParser::RuleMakeDirectory;
}

void JakShellParser::MakeDirectoryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMakeDirectory(this);
}

void JakShellParser::MakeDirectoryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMakeDirectory(this);
}

JakShellParser::MakeDirectoryContext* JakShellParser::makeDirectory() {
  MakeDirectoryContext *_localctx = _tracker.createInstance<MakeDirectoryContext>(_ctx, getState());
  enterRule(_localctx, 6, JakShellParser::RuleMakeDirectory);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(JakShellParser::T__2);
    setState(68);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

JakShellParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JakShellParser::ConditionContext* JakShellParser::IfStatementContext::condition() {
  return getRuleContext<JakShellParser::ConditionContext>(0);
}

std::vector<JakShellParser::CommandsContext *> JakShellParser::IfStatementContext::commands() {
  return getRuleContexts<JakShellParser::CommandsContext>();
}

JakShellParser::CommandsContext* JakShellParser::IfStatementContext::commands(size_t i) {
  return getRuleContext<JakShellParser::CommandsContext>(i);
}


size_t JakShellParser::IfStatementContext::getRuleIndex() const {
  return JakShellParser::RuleIfStatement;
}

void JakShellParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void JakShellParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

JakShellParser::IfStatementContext* JakShellParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, JakShellParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(JakShellParser::T__3);
    setState(71);
    condition();
    setState(72);
    match(JakShellParser::T__4);
    setState(73);
    commands();
    setState(74);
    match(JakShellParser::T__5);
    setState(75);
    commands();
    setState(76);
    match(JakShellParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForLoopContext ------------------------------------------------------------------

JakShellParser::ForLoopContext::ForLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JakShellParser::ForLoopContext::ID() {
  return getTokens(JakShellParser::ID);
}

tree::TerminalNode* JakShellParser::ForLoopContext::ID(size_t i) {
  return getToken(JakShellParser::ID, i);
}

JakShellParser::CommandsContext* JakShellParser::ForLoopContext::commands() {
  return getRuleContext<JakShellParser::CommandsContext>(0);
}


size_t JakShellParser::ForLoopContext::getRuleIndex() const {
  return JakShellParser::RuleForLoop;
}

void JakShellParser::ForLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForLoop(this);
}

void JakShellParser::ForLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForLoop(this);
}

JakShellParser::ForLoopContext* JakShellParser::forLoop() {
  ForLoopContext *_localctx = _tracker.createInstance<ForLoopContext>(_ctx, getState());
  enterRule(_localctx, 10, JakShellParser::RuleForLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(JakShellParser::T__7);
    setState(79);
    match(JakShellParser::ID);
    setState(80);
    match(JakShellParser::T__8);
    setState(81);
    match(JakShellParser::ID);
    setState(82);
    match(JakShellParser::T__9);
    setState(83);
    match(JakShellParser::ID);
    setState(84);
    match(JakShellParser::T__10);
    setState(85);
    commands();
    setState(86);
    match(JakShellParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintTextContext ------------------------------------------------------------------

JakShellParser::PrintTextContext::PrintTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JakShellParser::PrintTextContext::STRING() {
  return getToken(JakShellParser::STRING, 0);
}


size_t JakShellParser::PrintTextContext::getRuleIndex() const {
  return JakShellParser::RulePrintText;
}

void JakShellParser::PrintTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintText(this);
}

void JakShellParser::PrintTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintText(this);
}

JakShellParser::PrintTextContext* JakShellParser::printText() {
  PrintTextContext *_localctx = _tracker.createInstance<PrintTextContext>(_ctx, getState());
  enterRule(_localctx, 12, JakShellParser::RulePrintText);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(JakShellParser::T__11);
    setState(89);
    match(JakShellParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EchoTextContext ------------------------------------------------------------------

JakShellParser::EchoTextContext::EchoTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JakShellParser::EchoTextContext::STRING() {
  return getToken(JakShellParser::STRING, 0);
}


size_t JakShellParser::EchoTextContext::getRuleIndex() const {
  return JakShellParser::RuleEchoText;
}

void JakShellParser::EchoTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEchoText(this);
}

void JakShellParser::EchoTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEchoText(this);
}

JakShellParser::EchoTextContext* JakShellParser::echoText() {
  EchoTextContext *_localctx = _tracker.createInstance<EchoTextContext>(_ctx, getState());
  enterRule(_localctx, 14, JakShellParser::RuleEchoText);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(JakShellParser::T__12);
    setState(92);
    match(JakShellParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RemoveFileContext ------------------------------------------------------------------

JakShellParser::RemoveFileContext::RemoveFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JakShellParser::RemoveFileContext::ID() {
  return getToken(JakShellParser::ID, 0);
}


size_t JakShellParser::RemoveFileContext::getRuleIndex() const {
  return JakShellParser::RuleRemoveFile;
}

void JakShellParser::RemoveFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRemoveFile(this);
}

void JakShellParser::RemoveFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRemoveFile(this);
}

JakShellParser::RemoveFileContext* JakShellParser::removeFile() {
  RemoveFileContext *_localctx = _tracker.createInstance<RemoveFileContext>(_ctx, getState());
  enterRule(_localctx, 16, JakShellParser::RuleRemoveFile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(JakShellParser::T__13);
    setState(95);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CopyFileContext ------------------------------------------------------------------

JakShellParser::CopyFileContext::CopyFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JakShellParser::CopyFileContext::ID() {
  return getTokens(JakShellParser::ID);
}

tree::TerminalNode* JakShellParser::CopyFileContext::ID(size_t i) {
  return getToken(JakShellParser::ID, i);
}


size_t JakShellParser::CopyFileContext::getRuleIndex() const {
  return JakShellParser::RuleCopyFile;
}

void JakShellParser::CopyFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCopyFile(this);
}

void JakShellParser::CopyFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCopyFile(this);
}

JakShellParser::CopyFileContext* JakShellParser::copyFile() {
  CopyFileContext *_localctx = _tracker.createInstance<CopyFileContext>(_ctx, getState());
  enterRule(_localctx, 18, JakShellParser::RuleCopyFile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(JakShellParser::T__14);
    setState(98);
    match(JakShellParser::ID);
    setState(99);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveFileContext ------------------------------------------------------------------

JakShellParser::MoveFileContext::MoveFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JakShellParser::MoveFileContext::ID() {
  return getTokens(JakShellParser::ID);
}

tree::TerminalNode* JakShellParser::MoveFileContext::ID(size_t i) {
  return getToken(JakShellParser::ID, i);
}


size_t JakShellParser::MoveFileContext::getRuleIndex() const {
  return JakShellParser::RuleMoveFile;
}

void JakShellParser::MoveFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoveFile(this);
}

void JakShellParser::MoveFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoveFile(this);
}

JakShellParser::MoveFileContext* JakShellParser::moveFile() {
  MoveFileContext *_localctx = _tracker.createInstance<MoveFileContext>(_ctx, getState());
  enterRule(_localctx, 20, JakShellParser::RuleMoveFile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(JakShellParser::T__15);
    setState(102);
    match(JakShellParser::ID);
    setState(103);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListProcessesContext ------------------------------------------------------------------

JakShellParser::ListProcessesContext::ListProcessesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JakShellParser::ListProcessesContext::getRuleIndex() const {
  return JakShellParser::RuleListProcesses;
}

void JakShellParser::ListProcessesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListProcesses(this);
}

void JakShellParser::ListProcessesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListProcesses(this);
}

JakShellParser::ListProcessesContext* JakShellParser::listProcesses() {
  ListProcessesContext *_localctx = _tracker.createInstance<ListProcessesContext>(_ctx, getState());
  enterRule(_localctx, 22, JakShellParser::RuleListProcesses);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(JakShellParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KillProcessContext ------------------------------------------------------------------

JakShellParser::KillProcessContext::KillProcessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JakShellParser::KillProcessContext::ID() {
  return getToken(JakShellParser::ID, 0);
}


size_t JakShellParser::KillProcessContext::getRuleIndex() const {
  return JakShellParser::RuleKillProcess;
}

void JakShellParser::KillProcessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKillProcess(this);
}

void JakShellParser::KillProcessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKillProcess(this);
}

JakShellParser::KillProcessContext* JakShellParser::killProcess() {
  KillProcessContext *_localctx = _tracker.createInstance<KillProcessContext>(_ctx, getState());
  enterRule(_localctx, 24, JakShellParser::RuleKillProcess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(JakShellParser::T__17);
    setState(108);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExecuteCommandContext ------------------------------------------------------------------

JakShellParser::ExecuteCommandContext::ExecuteCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JakShellParser::ExecuteCommandContext::ID() {
  return getTokens(JakShellParser::ID);
}

tree::TerminalNode* JakShellParser::ExecuteCommandContext::ID(size_t i) {
  return getToken(JakShellParser::ID, i);
}

std::vector<tree::TerminalNode *> JakShellParser::ExecuteCommandContext::STRING() {
  return getTokens(JakShellParser::STRING);
}

tree::TerminalNode* JakShellParser::ExecuteCommandContext::STRING(size_t i) {
  return getToken(JakShellParser::STRING, i);
}


size_t JakShellParser::ExecuteCommandContext::getRuleIndex() const {
  return JakShellParser::RuleExecuteCommand;
}

void JakShellParser::ExecuteCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExecuteCommand(this);
}

void JakShellParser::ExecuteCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExecuteCommand(this);
}

JakShellParser::ExecuteCommandContext* JakShellParser::executeCommand() {
  ExecuteCommandContext *_localctx = _tracker.createInstance<ExecuteCommandContext>(_ctx, getState());
  enterRule(_localctx, 26, JakShellParser::RuleExecuteCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(JakShellParser::ID);
    setState(114);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(111);
        _la = _input->LA(1);
        if (!(_la == JakShellParser::ID

        || _la == JakShellParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(116);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListUsersContext ------------------------------------------------------------------

JakShellParser::ListUsersContext::ListUsersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JakShellParser::ListUsersContext::getRuleIndex() const {
  return JakShellParser::RuleListUsers;
}

void JakShellParser::ListUsersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListUsers(this);
}

void JakShellParser::ListUsersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListUsers(this);
}

JakShellParser::ListUsersContext* JakShellParser::listUsers() {
  ListUsersContext *_localctx = _tracker.createInstance<ListUsersContext>(_ctx, getState());
  enterRule(_localctx, 28, JakShellParser::RuleListUsers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(JakShellParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowDateContext ------------------------------------------------------------------

JakShellParser::ShowDateContext::ShowDateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JakShellParser::ShowDateContext::getRuleIndex() const {
  return JakShellParser::RuleShowDate;
}

void JakShellParser::ShowDateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowDate(this);
}

void JakShellParser::ShowDateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowDate(this);
}

JakShellParser::ShowDateContext* JakShellParser::showDate() {
  ShowDateContext *_localctx = _tracker.createInstance<ShowDateContext>(_ctx, getState());
  enterRule(_localctx, 30, JakShellParser::RuleShowDate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(JakShellParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowTimeContext ------------------------------------------------------------------

JakShellParser::ShowTimeContext::ShowTimeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JakShellParser::ShowTimeContext::getRuleIndex() const {
  return JakShellParser::RuleShowTime;
}

void JakShellParser::ShowTimeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowTime(this);
}

void JakShellParser::ShowTimeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowTime(this);
}

JakShellParser::ShowTimeContext* JakShellParser::showTime() {
  ShowTimeContext *_localctx = _tracker.createInstance<ShowTimeContext>(_ctx, getState());
  enterRule(_localctx, 32, JakShellParser::RuleShowTime);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(JakShellParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateFileContext ------------------------------------------------------------------

JakShellParser::CreateFileContext::CreateFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JakShellParser::CreateFileContext::ID() {
  return getToken(JakShellParser::ID, 0);
}


size_t JakShellParser::CreateFileContext::getRuleIndex() const {
  return JakShellParser::RuleCreateFile;
}

void JakShellParser::CreateFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreateFile(this);
}

void JakShellParser::CreateFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreateFile(this);
}

JakShellParser::CreateFileContext* JakShellParser::createFile() {
  CreateFileContext *_localctx = _tracker.createInstance<CreateFileContext>(_ctx, getState());
  enterRule(_localctx, 34, JakShellParser::RuleCreateFile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(JakShellParser::T__21);
    setState(124);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AppendToFileContext ------------------------------------------------------------------

JakShellParser::AppendToFileContext::AppendToFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JakShellParser::AppendToFileContext::STRING() {
  return getToken(JakShellParser::STRING, 0);
}

tree::TerminalNode* JakShellParser::AppendToFileContext::ID() {
  return getToken(JakShellParser::ID, 0);
}


size_t JakShellParser::AppendToFileContext::getRuleIndex() const {
  return JakShellParser::RuleAppendToFile;
}

void JakShellParser::AppendToFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAppendToFile(this);
}

void JakShellParser::AppendToFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAppendToFile(this);
}

JakShellParser::AppendToFileContext* JakShellParser::appendToFile() {
  AppendToFileContext *_localctx = _tracker.createInstance<AppendToFileContext>(_ctx, getState());
  enterRule(_localctx, 36, JakShellParser::RuleAppendToFile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(JakShellParser::T__12);
    setState(127);
    match(JakShellParser::STRING);
    setState(128);
    match(JakShellParser::T__22);
    setState(129);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

JakShellParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JakShellParser::ConditionContext::ID() {
  return getTokens(JakShellParser::ID);
}

tree::TerminalNode* JakShellParser::ConditionContext::ID(size_t i) {
  return getToken(JakShellParser::ID, i);
}


size_t JakShellParser::ConditionContext::getRuleIndex() const {
  return JakShellParser::RuleCondition;
}

void JakShellParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void JakShellParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

JakShellParser::ConditionContext* JakShellParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 38, JakShellParser::RuleCondition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(JakShellParser::ID);
    setState(132);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 251658240) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(133);
    match(JakShellParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandsContext ------------------------------------------------------------------

JakShellParser::CommandsContext::CommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JakShellParser::CommandContext *> JakShellParser::CommandsContext::command() {
  return getRuleContexts<JakShellParser::CommandContext>();
}

JakShellParser::CommandContext* JakShellParser::CommandsContext::command(size_t i) {
  return getRuleContext<JakShellParser::CommandContext>(i);
}


size_t JakShellParser::CommandsContext::getRuleIndex() const {
  return JakShellParser::RuleCommands;
}

void JakShellParser::CommandsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommands(this);
}

void JakShellParser::CommandsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JakShellListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommands(this);
}

JakShellParser::CommandsContext* JakShellParser::commands() {
  CommandsContext *_localctx = _tracker.createInstance<CommandsContext>(_ctx, getState());
  enterRule(_localctx, 40, JakShellParser::RuleCommands);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(135);
      command();
      setState(138); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 276820254) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void JakShellParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  jakshellParserInitialize();
#else
  ::antlr4::internal::call_once(jakshellParserOnceFlag, jakshellParserInitialize);
#endif
}

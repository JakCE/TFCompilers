
// Generated from JakShell.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  JakShellParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, ID = 28, STRING = 29, WS = 30
  };

  enum {
    RuleCommand = 0, RuleListFiles = 1, RuleChangeDirectory = 2, RuleMakeDirectory = 3, 
    RuleIfStatement = 4, RuleForLoop = 5, RulePrintText = 6, RuleEchoText = 7, 
    RuleRemoveFile = 8, RuleCopyFile = 9, RuleMoveFile = 10, RuleListProcesses = 11, 
    RuleKillProcess = 12, RuleExecuteCommand = 13, RuleListUsers = 14, RuleShowDate = 15, 
    RuleShowTime = 16, RuleCreateFile = 17, RuleAppendToFile = 18, RuleCondition = 19, 
    RuleCommands = 20
  };

  explicit JakShellParser(antlr4::TokenStream *input);

  JakShellParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~JakShellParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CommandContext;
  class ListFilesContext;
  class ChangeDirectoryContext;
  class MakeDirectoryContext;
  class IfStatementContext;
  class ForLoopContext;
  class PrintTextContext;
  class EchoTextContext;
  class RemoveFileContext;
  class CopyFileContext;
  class MoveFileContext;
  class ListProcessesContext;
  class KillProcessContext;
  class ExecuteCommandContext;
  class ListUsersContext;
  class ShowDateContext;
  class ShowTimeContext;
  class CreateFileContext;
  class AppendToFileContext;
  class ConditionContext;
  class CommandsContext; 

  class  CommandContext : public antlr4::ParserRuleContext {
  public:
    CommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ListFilesContext *listFiles();
    ChangeDirectoryContext *changeDirectory();
    MakeDirectoryContext *makeDirectory();
    IfStatementContext *ifStatement();
    ForLoopContext *forLoop();
    PrintTextContext *printText();
    EchoTextContext *echoText();
    RemoveFileContext *removeFile();
    CopyFileContext *copyFile();
    MoveFileContext *moveFile();
    ListProcessesContext *listProcesses();
    KillProcessContext *killProcess();
    ExecuteCommandContext *executeCommand();
    ListUsersContext *listUsers();
    ShowDateContext *showDate();
    ShowTimeContext *showTime();
    CreateFileContext *createFile();
    AppendToFileContext *appendToFile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommandContext* command();

  class  ListFilesContext : public antlr4::ParserRuleContext {
  public:
    ListFilesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListFilesContext* listFiles();

  class  ChangeDirectoryContext : public antlr4::ParserRuleContext {
  public:
    ChangeDirectoryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChangeDirectoryContext* changeDirectory();

  class  MakeDirectoryContext : public antlr4::ParserRuleContext {
  public:
    MakeDirectoryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MakeDirectoryContext* makeDirectory();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionContext *condition();
    std::vector<CommandsContext *> commands();
    CommandsContext* commands(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  ForLoopContext : public antlr4::ParserRuleContext {
  public:
    ForLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    CommandsContext *commands();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForLoopContext* forLoop();

  class  PrintTextContext : public antlr4::ParserRuleContext {
  public:
    PrintTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintTextContext* printText();

  class  EchoTextContext : public antlr4::ParserRuleContext {
  public:
    EchoTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EchoTextContext* echoText();

  class  RemoveFileContext : public antlr4::ParserRuleContext {
  public:
    RemoveFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RemoveFileContext* removeFile();

  class  CopyFileContext : public antlr4::ParserRuleContext {
  public:
    CopyFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CopyFileContext* copyFile();

  class  MoveFileContext : public antlr4::ParserRuleContext {
  public:
    MoveFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MoveFileContext* moveFile();

  class  ListProcessesContext : public antlr4::ParserRuleContext {
  public:
    ListProcessesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListProcessesContext* listProcesses();

  class  KillProcessContext : public antlr4::ParserRuleContext {
  public:
    KillProcessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KillProcessContext* killProcess();

  class  ExecuteCommandContext : public antlr4::ParserRuleContext {
  public:
    ExecuteCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecuteCommandContext* executeCommand();

  class  ListUsersContext : public antlr4::ParserRuleContext {
  public:
    ListUsersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListUsersContext* listUsers();

  class  ShowDateContext : public antlr4::ParserRuleContext {
  public:
    ShowDateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShowDateContext* showDate();

  class  ShowTimeContext : public antlr4::ParserRuleContext {
  public:
    ShowTimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShowTimeContext* showTime();

  class  CreateFileContext : public antlr4::ParserRuleContext {
  public:
    CreateFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateFileContext* createFile();

  class  AppendToFileContext : public antlr4::ParserRuleContext {
  public:
    AppendToFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AppendToFileContext* appendToFile();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionContext* condition();

  class  CommandsContext : public antlr4::ParserRuleContext {
  public:
    CommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CommandContext *> command();
    CommandContext* command(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommandsContext* commands();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


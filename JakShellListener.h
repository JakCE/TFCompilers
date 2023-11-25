
// Generated from JakShell.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "JakShellParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by JakShellParser.
 */
class  JakShellListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCommand(JakShellParser::CommandContext *ctx) = 0;
  virtual void exitCommand(JakShellParser::CommandContext *ctx) = 0;

  virtual void enterListFiles(JakShellParser::ListFilesContext *ctx) = 0;
  virtual void exitListFiles(JakShellParser::ListFilesContext *ctx) = 0;

  virtual void enterChangeDirectory(JakShellParser::ChangeDirectoryContext *ctx) = 0;
  virtual void exitChangeDirectory(JakShellParser::ChangeDirectoryContext *ctx) = 0;

  virtual void enterMakeDirectory(JakShellParser::MakeDirectoryContext *ctx) = 0;
  virtual void exitMakeDirectory(JakShellParser::MakeDirectoryContext *ctx) = 0;

  virtual void enterIfStatement(JakShellParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(JakShellParser::IfStatementContext *ctx) = 0;

  virtual void enterForLoop(JakShellParser::ForLoopContext *ctx) = 0;
  virtual void exitForLoop(JakShellParser::ForLoopContext *ctx) = 0;

  virtual void enterPrintText(JakShellParser::PrintTextContext *ctx) = 0;
  virtual void exitPrintText(JakShellParser::PrintTextContext *ctx) = 0;

  virtual void enterEchoText(JakShellParser::EchoTextContext *ctx) = 0;
  virtual void exitEchoText(JakShellParser::EchoTextContext *ctx) = 0;

  virtual void enterRemoveFile(JakShellParser::RemoveFileContext *ctx) = 0;
  virtual void exitRemoveFile(JakShellParser::RemoveFileContext *ctx) = 0;

  virtual void enterCopyFile(JakShellParser::CopyFileContext *ctx) = 0;
  virtual void exitCopyFile(JakShellParser::CopyFileContext *ctx) = 0;

  virtual void enterMoveFile(JakShellParser::MoveFileContext *ctx) = 0;
  virtual void exitMoveFile(JakShellParser::MoveFileContext *ctx) = 0;

  virtual void enterListProcesses(JakShellParser::ListProcessesContext *ctx) = 0;
  virtual void exitListProcesses(JakShellParser::ListProcessesContext *ctx) = 0;

  virtual void enterKillProcess(JakShellParser::KillProcessContext *ctx) = 0;
  virtual void exitKillProcess(JakShellParser::KillProcessContext *ctx) = 0;

  virtual void enterExecuteCommand(JakShellParser::ExecuteCommandContext *ctx) = 0;
  virtual void exitExecuteCommand(JakShellParser::ExecuteCommandContext *ctx) = 0;

  virtual void enterListUsers(JakShellParser::ListUsersContext *ctx) = 0;
  virtual void exitListUsers(JakShellParser::ListUsersContext *ctx) = 0;

  virtual void enterShowDate(JakShellParser::ShowDateContext *ctx) = 0;
  virtual void exitShowDate(JakShellParser::ShowDateContext *ctx) = 0;

  virtual void enterShowTime(JakShellParser::ShowTimeContext *ctx) = 0;
  virtual void exitShowTime(JakShellParser::ShowTimeContext *ctx) = 0;

  virtual void enterCreateFile(JakShellParser::CreateFileContext *ctx) = 0;
  virtual void exitCreateFile(JakShellParser::CreateFileContext *ctx) = 0;

  virtual void enterAppendToFile(JakShellParser::AppendToFileContext *ctx) = 0;
  virtual void exitAppendToFile(JakShellParser::AppendToFileContext *ctx) = 0;

  virtual void enterCondition(JakShellParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(JakShellParser::ConditionContext *ctx) = 0;

  virtual void enterCommands(JakShellParser::CommandsContext *ctx) = 0;
  virtual void exitCommands(JakShellParser::CommandsContext *ctx) = 0;


};


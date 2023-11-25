
// Generated from JakShell.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "JakShellListener.h"


/**
 * This class provides an empty implementation of JakShellListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  JakShellBaseListener : public JakShellListener {
public:

  virtual void enterCommand(JakShellParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(JakShellParser::CommandContext * /*ctx*/) override { }

  virtual void enterListFiles(JakShellParser::ListFilesContext * /*ctx*/) override { }
  virtual void exitListFiles(JakShellParser::ListFilesContext * /*ctx*/) override { }

  virtual void enterChangeDirectory(JakShellParser::ChangeDirectoryContext * /*ctx*/) override { }
  virtual void exitChangeDirectory(JakShellParser::ChangeDirectoryContext * /*ctx*/) override { }

  virtual void enterMakeDirectory(JakShellParser::MakeDirectoryContext * /*ctx*/) override { }
  virtual void exitMakeDirectory(JakShellParser::MakeDirectoryContext * /*ctx*/) override { }

  virtual void enterIfStatement(JakShellParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(JakShellParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterForLoop(JakShellParser::ForLoopContext * /*ctx*/) override { }
  virtual void exitForLoop(JakShellParser::ForLoopContext * /*ctx*/) override { }

  virtual void enterPrintText(JakShellParser::PrintTextContext * /*ctx*/) override { }
  virtual void exitPrintText(JakShellParser::PrintTextContext * /*ctx*/) override { }

  virtual void enterEchoText(JakShellParser::EchoTextContext * /*ctx*/) override { }
  virtual void exitEchoText(JakShellParser::EchoTextContext * /*ctx*/) override { }

  virtual void enterRemoveFile(JakShellParser::RemoveFileContext * /*ctx*/) override { }
  virtual void exitRemoveFile(JakShellParser::RemoveFileContext * /*ctx*/) override { }

  virtual void enterCopyFile(JakShellParser::CopyFileContext * /*ctx*/) override { }
  virtual void exitCopyFile(JakShellParser::CopyFileContext * /*ctx*/) override { }

  virtual void enterMoveFile(JakShellParser::MoveFileContext * /*ctx*/) override { }
  virtual void exitMoveFile(JakShellParser::MoveFileContext * /*ctx*/) override { }

  virtual void enterListProcesses(JakShellParser::ListProcessesContext * /*ctx*/) override { }
  virtual void exitListProcesses(JakShellParser::ListProcessesContext * /*ctx*/) override { }

  virtual void enterKillProcess(JakShellParser::KillProcessContext * /*ctx*/) override { }
  virtual void exitKillProcess(JakShellParser::KillProcessContext * /*ctx*/) override { }

  virtual void enterExecuteCommand(JakShellParser::ExecuteCommandContext * /*ctx*/) override { }
  virtual void exitExecuteCommand(JakShellParser::ExecuteCommandContext * /*ctx*/) override { }

  virtual void enterListUsers(JakShellParser::ListUsersContext * /*ctx*/) override { }
  virtual void exitListUsers(JakShellParser::ListUsersContext * /*ctx*/) override { }

  virtual void enterShowDate(JakShellParser::ShowDateContext * /*ctx*/) override { }
  virtual void exitShowDate(JakShellParser::ShowDateContext * /*ctx*/) override { }

  virtual void enterShowTime(JakShellParser::ShowTimeContext * /*ctx*/) override { }
  virtual void exitShowTime(JakShellParser::ShowTimeContext * /*ctx*/) override { }

  virtual void enterCreateFile(JakShellParser::CreateFileContext * /*ctx*/) override { }
  virtual void exitCreateFile(JakShellParser::CreateFileContext * /*ctx*/) override { }

  virtual void enterAppendToFile(JakShellParser::AppendToFileContext * /*ctx*/) override { }
  virtual void exitAppendToFile(JakShellParser::AppendToFileContext * /*ctx*/) override { }

  virtual void enterCondition(JakShellParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(JakShellParser::ConditionContext * /*ctx*/) override { }

  virtual void enterCommands(JakShellParser::CommandsContext * /*ctx*/) override { }
  virtual void exitCommands(JakShellParser::CommandsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


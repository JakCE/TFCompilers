#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <cerrno>
#include "antlr4-runtime.h"
#include "JakShellLexer.h"
#include "JakShellParser.h"
#include "JakShellListener.h"
#include "JakShellBaseListener.h"
#include "JakShellBaseVisitor.h"

using namespace antlr4;

class ShellCommands : public ShellBaseVisitor {
public:
    antlrcpp::Any visitListFiles(JakShellParser::ListFilesContext *context) override {
        DIR *dir;
        struct dirent *ent;
        if ((dir = opendir(".")) != nullptr) {
            while ((ent = readdir(dir)) != nullptr) {
                std::cout << ent->d_name << std::endl;
            }
            closedir(dir);
        } else {
            perror("Error al abrir el directorio");
        }
        return nullptr;
    }

    antlrcpp::Any visitChangeDirectory(JakShellParser::ChangeDirectoryContext *context) override {
        std::string directory = context->ID()->getText();
        if (chdir(directory.c_str()) != 0) {
            std::cerr << "Error: No se pudo cambiar de directorio\n";
        }
        return nullptr;
    }

    antlrcpp::Any visitMakeDirectory(JakShellParser::MakeDirectoryContext *context) override {
        std::string directory = context->ID()->getText();
        if (mkdir(directory.c_str()) != 0) {
            std::cerr << "Error: No se pudo crear el directorio\n";
        } else {
            chmod(directory.c_str(), S_IRWXU | S_IRWXG | S_IRWXO);
        }
        return nullptr;
    }

    antlrcpp::Any visitRemoveFile(JakShellParser::RemoveFileContext *context) override {
        std::string file = context->ID()->getText();
        if (remove(file.c_str()) != 0) {
            std::cerr << "Error: No se pudo eliminar el archivo\n";
        }
        return nullptr;
    }

    antlrcpp::Any visitEchoText(JakShellParser::EchoTextContext *context) override {
        std::cout << context->STRING()->getText() << std::endl;
        return nullptr;
    }

    antlrcpp::Any visitExecuteCommand(JakShellParser::ExecuteCommandContext *context) override {
        std::string command = context->ID(0)->getText();
        for (size_t i = 1; i < context->ID().size(); ++i) {
            command += " " + context->ID(i)->getText();
        }
        std::system(command.c_str());
        return nullptr;
    }

    antlrcpp::Any visitCreateFile(JakShellParser::CreateFileContext *context) override {
        std::string filename = context->ID()->getText();
        std::ofstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Error: No se pudo crear el archivo\n";
        } else {
            std::cout << "Archivo creado: " << filename << std::endl;
        }
        return nullptr;
    }

    antlrcpp::Any visitShowDate(JakShellParser::ShowDateContext *context) override {
        time_t rawtime;
        struct tm * timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        std::cout << "Fecha actual: " << asctime(timeinfo);
        return nullptr;
    }

    antlrcpp::Any visitShowTime(JakShellParser::ShowTimeContext *context) override {
        time_t rawtime;
        struct tm *timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);

        // Buffer para almacenar la hora formateada
        char buffer[80];
        strftime(buffer, sizeof(buffer), "%H:%M:%S", timeinfo);

        std::cout << "Hora actual: " << buffer << std::endl;
        return nullptr;
    }

    antlrcpp::Any visitCopyFile(JakShellParser::CopyFileContext *context) override {
        std::string source = context->ID(0)->getText();
        std::string destination = context->ID(1)->getText();
        std::ifstream src(source, std::ios::binary);
        std::ofstream dest(destination, std::ios::binary);
        dest << src.rdbuf();
        return nullptr;
    }

    antlrcpp::Any visitMoveFile(JakShellParser::MoveFileContext *context) override {
        std::string source = context->ID(0)->getText();
        std::string destination = context->ID(1)->getText();
        if (rename(source.c_str(), destination.c_str()) != 0) {
            std::cerr << "Error: No se pudo mover el archivo\n";
        }
        return nullptr;
    }
    antlrcpp::Any visitCommand(JakShellParser::CommandContext *context) override {
        return visitChildren(context);
    }
};

int main() {
    std::string userInput;
    std::cout << "Ingrese un comando ('exit' para salir): ";
    std::getline(std::cin, userInput);

    while (userInput != "exit") {
        ANTLRInputStream input(userInput + '\n');
        JakShellLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        JakShellParser parser(&tokens);
        tree::ParseTree *tree = parser.command();

        ShellCommands commands;
        commands.visit(tree);

        std::cout << "\nIngrese un comando ('exit' para salir): ";
        std::getline(std::cin, userInput);
    }

    return 0;
}
/**
 * Autores:
 * - Calebe Mesquita da Silva - Matrícula 566342
 * - Francisco Emilson Santos Souza Filho - Matrícula 565685
 * Data: 09/02/2025
 *
 * Entrega do trabalho de implementação de Matrizes Esparsas com Listas
 * Encadeadas em C++
 *
 * Disciplina: Estrutura de Dados
 * Professor: Atílio Gomes
 *
 * Bacharelandos em Ciência da Computação
 * Universidade Federal do Ceará (UFC) - Campus Quixadá
 */

#include <filesystem>

#include "Defs/UserQuestions.hpp"

#include "Includes/CommandPattern/Commands/GetCommand.hpp"
#include "Includes/CommandPattern/Commands/MultiplyCommand.hpp"
#include "Includes/CommandPattern/Commands/PrintMatrixCommand.hpp"
#include "Includes/CommandPattern/Commands/ReadMatrixCommand.hpp"
#include "Includes/CommandPattern/Commands/ShowCommand.hpp"
#include "Includes/CommandPattern/Commands/SumMatrixCommand.hpp"
#include "Includes/CommandPattern/Invoker/InvokerCommand.hpp"

#include "Includes/Utils/Tools/GetValidNumber.hpp"
#include "Includes/Utils/Tools/GetValidString.hpp"

int main() {
  InvokerCommand invoker;
  std::vector<MatrixInfo> matrices;

  PrintMatrixCommand printCommand("print", "exibe a matriz na tela");
  GetCommand getCommand("get", "exibe um determinado elemento de uma matriz");
  ReadMatrixCommand readMatrixCommand(
      "read", "le uma matriz determinada por um arquivo");
  MultiplyCommand multiplyCommand("multiply", "multiplica duas matrizes");
  SumMatrixCommand sumMatrixCommand("sum", "soma duas matrizes");
  ShowCommand showCommand("show", "mostra toodas as matrizes no sistema");

  invoker.registerCommand(
      printCommand.getName(), &printCommand, [&matrices]() -> ContextCommand * {
        ValidationUtils::verifyIfMatrixArrayIsEmpty(matrices.size());

        int num = getValidNumber(AskMatrixNumber, {[&](int value) {
                                   ValidationUtils::verifyValidIndexInVector(
                                       value, matrices.size());
                                 }});

        return new PrintMatrixContextCommand(num, matrices);
      });

  invoker.registerCommand(
      getCommand.getName(), &getCommand, [&matrices]() -> ContextCommand * {
        ValidationUtils::verifyIfMatrixArrayIsEmpty(matrices.size());

        int index = getValidNumber(AskMatrixNumber, {[&](int value) {
                                     ValidationUtils::verifyValidIndexInVector(
                                         value, matrices.size());
                                   }});
        int row = getValidNumber(AskRow, {[&](int value) {
                                   ValidationUtils::verifyValidRowIndex(
                                       value,
                                       matrices[index].matrix->getNumRows());
                                 }}),
            col = getValidNumber(AskCol, {[&](int value) {
                                   ValidationUtils::verifyValidColIndex(
                                       value,
                                       matrices[index].matrix->getNumCols());
                                 }});

        return new GetContextCommand(row, col, index, matrices);
      });

  invoker.registerCommand(
      readMatrixCommand.getName(), &readMatrixCommand,
      [&matrices]() -> ContextCommand * {
        ValidationUtils::verifyIfThereAreFiles();

        std::string namefile = getValidString(
            AskFileName,
            {[&](const std::string &value) {
               if (value == "")
                 throw InvalidArgumentException(Messages::emptyInputMessage());
             },
             [&](const std::string &value) {
               if (!std::filesystem::exists(Path + value + Extension))
                 throw InvalidArgumentException(
                     Messages::fileNotFoundMessage());
             }});

        return new ReadMatrixContextCommand(namefile, matrices);
      });

  invoker.registerCommand(
      multiplyCommand.getName(), &multiplyCommand,
      [&matrices]() -> ContextCommand * {
        ValidationUtils::verifyIfMatrixArrayIsEmpty(matrices.size());

        int index1 = getValidNumber(AskFirstMatrixNumber, {[&](int value) {
                                      ValidationUtils::verifyValidIndexInVector(
                                          value, matrices.size());
                                    }});
        int index2 = getValidNumber(AskSecondMatrixNumber, {[&](int value) {
                                      ValidationUtils::verifyValidIndexInVector(
                                          value, matrices.size());
                                    }});

        return new MultiplyContextCommand(index1, index2, matrices);
      });

  invoker.registerCommand(
      sumMatrixCommand.getName(), &sumMatrixCommand,
      [&matrices]() -> ContextCommand * {
        ValidationUtils::verifyIfMatrixArrayIsEmpty(matrices.size());

        int index1 = getValidNumber(AskFirstMatrixNumber, {[&](int value) {
                                      ValidationUtils::verifyValidIndexInVector(
                                          value, matrices.size());
                                    }});
        int index2 = getValidNumber(AskSecondMatrixNumber, {[&](int value) {
                                      ValidationUtils::verifyValidIndexInVector(
                                          value, matrices.size());
                                    }});

        return new SumMatrixContextCommand(matrices, index1, index2);
      });

  invoker.registerCommand(
      showCommand.getName(), &showCommand, [&matrices]() -> ContextCommand * {
        ValidationUtils::verifyIfMatrixArrayIsEmpty(matrices.size());

        return new ShowContextCommand(matrices);
      });

  while (true) {
    try {
      std::string input;
      std::cout << "$";
      std::getline(std::cin, input);
      input = trim(input);

      if (input == "help") {
        std::cout << "help - exibe uma lista de comandos disponiveis\n";
        invoker.showHelp();
        std::cout << "exit - fecha a aplicacao\n";
      } else if (input == "exit") {
        for (MatrixInfo &matrixInfo : matrices) {
          delete matrixInfo.matrix;
        }

        matrices.clear();

        break;
      } else {
        invoker.executeCommand(input);
      }
    } catch (const std::exception &e) {
      std::cout << e.what() << "\n";
    }
  }

  std::cout << "Ate mais!" << std::endl;

  return 0;
}
#include <exception>
#include <string>
#include <vector>

#include "Defs/UserQuestions.hpp"

#include "Includes/CommandPattern/Commands/PrintMatrixCommand.hpp"
#include "Includes/CommandPattern/Commands/GetCommand.hpp"
#include "Includes/CommandPattern/Invoker/InvokerCommand.hpp"

#include "Includes/Classes/SparseMatrix/SparseMatrix.hpp"
#include "Includes/Exceptions/InvalidArgumentException.hpp"
#include "Includes/Messages/Messages.hpp"
#include "Includes/Utils/Tools/IgnoreCin.hpp"
#include "Includes/Utils/Tools/GetValidNumber.hpp"
#include "Includes/Utils/Validation/Validation.hpp"

int main() {
  InvokerCommand invoker;
  std::vector<SparseMatrix *> matrices;

  PrintMatrixCommand printCommand("print", "exibe a matriz na tela");
  GetCommand getCommand("get", "exibe um determinado elemento de uma matriz");

  // invoker.registerCommand(testCommand.getName(), &testCommand);
  invoker.registerCommand(
      printCommand.getName(), &printCommand, [&matrices]() -> ContextCommand * {
        ValidationUtils::verifyIfMatrixArrayIsEmpty(matrices.size());

        int num = getValidNumber(AskMatrixNumber, { [&](int value) { ValidationUtils::verifyValidIndexInVector(value, matrices.size()); } });

        return new PrintMatrixContextCommand(num, matrices);
      });
      
    invoker.registerCommand(getCommand.getName(), &getCommand, [&matrices]() -> ContextCommand * {
      ValidationUtils::verifyIfMatrixArrayIsEmpty(matrices.size());

      int index = getValidNumber(AskMatrixNumber, { [&](int value) { ValidationUtils::verifyValidIndexInVector(value, matrices.size()); } });
      int row = getValidNumber(AskRow, { [&](int value) { ValidationUtils::verifyValidRowIndex(value, matrices[index]->getNumRows()); } }), col = getValidNumber(AskCol, { [&](int value) { ValidationUtils::verifyValidColIndex(value, matrices[index]->getNumCols()); } });

      return new GetContextCommand(row, col, index, matrices);
    });

  while (true) {
    try {
      std::string input;
      std::cout << "$";
      std::getline(std::cin, input);

      if (input == "help") {
        std::cout << "help - exibe uma lista de comandos disponiveis\n";
        invoker.showHelp();
        std::cout << "exit - fecha a aplicacao\n";
      } else if (input == "exit") {
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
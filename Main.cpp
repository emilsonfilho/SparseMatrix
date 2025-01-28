#include <exception>
#include <iostream>
#include <string>

#include "Includes/CommandPattern/Invoker/InvokerCommand.hpp"
// #include "Includes/CommandPattern/Commands/TestCommand.hpp"

#include "Includes/Utils/Operations/PrintMatrix.hpp"
#include "Includes/Classes/SparseMatrix/SparseMatrix.hpp"

int main() {
  SparseMatrix matrix(3, 3);
  printMatrix(matrix);



  InvokerCommand invoker;

  // TestCommand testCommand("test", "uma funcao teste");

  // invoker.registerCommand(testCommand.getName(), &testCommand);

  while (true) {
    try {
      std::string input;
      std::getline(std::cin, input);

      if (input == "help") {
        invoker.showHelp();
      } else if (input == "exit") {
        break;
      } else {
        invoker.executeCommand(input);
      }
    } catch (const std::exception &e) {
      std::cout << e.what() << " haha\n";
    }
  }

  std::cout << "Até mais!" << std::endl;

  return 0;
}
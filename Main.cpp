#include <exception>
#include <iostream>
#include <string>
#include <vector>

#include "Includes/CommandPattern/Invoker/InvokerCommand.hpp"
#include "Includes/CommandPattern/Commands/PrintMatrixCommand.hpp"

#include "Includes/Classes/SparseMatrix/SparseMatrix.hpp"

int main() {
  InvokerCommand invoker;
  std::vector<SparseMatrix*> matrices;
  matrices.push_back(new SparseMatrix(2, 3));

  PrintMatrixCommand printCommand("print", "exibe a matriz na tela");

  // invoker.registerCommand(testCommand.getName(), &testCommand);
  invoker.registerCommand(printCommand.getName(), &printCommand, [&matrices](){
    std::cout << "Digite o numero da matrix que voce quer imprimir: ";
    
    int num;
    std::cin >> num;

    return new PrintMatrixContextCommand(num, matrices);
  });

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
      std::cout << e.what() << "\n";
    }
  }

  std::cout << "Até mais!" << std::endl;

  return 0;
}
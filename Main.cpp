#include <exception>
#include <string>
#include <vector>

#include "Includes/CommandPattern/Invoker/InvokerCommand.hpp"
#include "Includes/CommandPattern/Commands/PrintMatrixCommand.hpp"

#include "Includes/Classes/SparseMatrix/SparseMatrix.hpp"
#include "Includes/Utils/Tools/IgnoreCin.hpp"
#include "Includes/Exceptions/InvalidArgumentException.hpp"
#include "Includes/Messages/Messages.hpp"

int main() {
  InvokerCommand invoker;
  std::vector<SparseMatrix*> matrices;

  PrintMatrixCommand printCommand("print", "exibe a matriz na tela");

  // invoker.registerCommand(testCommand.getName(), &testCommand);
  invoker.registerCommand(printCommand.getName(), &printCommand, [&matrices](){
    int num = -1;
    
    while (true) {
      try {
        std::cout << "Digite o numero da matrix que voce quer imprimir: ";

        if (!(std::cin >> num)) throw InvalidArgumentException(Messages::invalidArgumentForNumber());
        
      } catch (const std::invalid_argument &e) {
        std::cout << e.what() << "\n";
        std::cin.clear();
        ignoreCin();
      } catch (const std::out_of_range &e) {
        std::cout << e.what() << "\n";
      }

    ignoreCin();

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
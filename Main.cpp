#include <exception>
#include <string>
#include <vector>
#include <algorithm>
#include <filesystem>


#include "Defs/UserQuestions.hpp"

#include "Includes/CommandPattern/Commands/PrintMatrixCommand.hpp"
#include "Includes/CommandPattern/Commands/GetCommand.hpp"
#include "Includes/CommandPattern/Commands/ReadMatrixCommand.hpp"
#include "Includes/CommandPattern/Invoker/InvokerCommand.hpp"

#include "Includes/Classes/SparseMatrix/SparseMatrix.hpp"
#include "Includes/Exceptions/InvalidArgumentException.hpp"
#include "Includes/Messages/Messages.hpp"
#include "Includes/Utils/Tools/IgnoreCin.hpp"
#include "Includes/Utils/Tools/GetValidNumber.hpp"
#include "Includes/Utils/Validation/Validation.hpp"


#include "Includes/Utils/Operations/ReadMatrices.hpp"

int main() {
  InvokerCommand invoker;
  std::vector<SparseMatrix *> matrices;

  PrintMatrixCommand printCommand("print", "exibe a matriz na tela");
  GetCommand getCommand("get", "exibe um determinado elemento de uma matriz");
  ReadMatrixCommand readMatrixCommand("read", "le uma matriz determinada por um arquivo");

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
    
  invoker.registerCommand(readMatrixCommand.getName(), &readMatrixCommand, [&matrices]() -> ContextCommand * {
      // Essa função lambda é responsável por ler o que é preciso do usuário
      // nesse caso: o nome do arquivo
      // para evitar problemas, é bom fazer um loop infinito até que o usuário digite um nome de arquivo válido
      bool hasFiles = false;
      std::string input;
      for (const auto& entry : std::filesystem::directory_iterator("Files")) {
        if (std::filesystem::is_regular_file(entry)) {  // Verifica se é um arquivo (não uma subpasta)
            hasFiles = true;
            break;
        }
      }

      if (!hasFiles) {
        throw NoMatricesException("Nao existem arquivos na pasta Files/. Por favor, crie pelo meno um.");
      }
      
      while(true){
        std::cout << "Digite um nome de arquivo: ";
        getline(std::cin, input);

        if (std::filesystem::exists("Files/" + input + ".txt")){
          std::cout << "Arquivo não encontrado. Certifique-se de colocar a extensao do arquivo\n";
        } else {
          break;
        }
      }

      return new ReadMatrixContextCommand(input, matrices);
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
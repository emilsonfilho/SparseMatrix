#include "../../../Includes/CommandPattern/Commands/MultiplyMatrixCommand.hpp"

MultiplyMatrixCommand::MultiplyMatrixCommand(const std::string &name, const std::string &description) : Command(name, description) {}
void MultiplyMatrixCommand::execute(ContextCommand *context) const {
  auto *ctx = dynamic_cast<MultiplyMatrixCommand *>(context);

    if (ctx){
        // chama SumMatrizz
    }
}

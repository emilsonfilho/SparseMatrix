#include "../../../Includes/CommandPattern/Commands/SumMatrixCommand.hpp"

SumMatrixCommand::SumMatrixCommand(const std::string &name, const std::string &description) : Command(name, description) {}
void SumMatrixCommand::execute(ContextCommand *context) const {
  auto *ctx = dynamic_cast<SumMatrixCommand *>(context);

    if (ctx){
        // chama SumMatrizz
    }
}

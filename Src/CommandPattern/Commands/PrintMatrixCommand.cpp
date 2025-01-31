#include "../../../Includes/CommandPattern/Commands/PrintMatrixCommand.hpp"

PrintMatrixCommand::PrintMatrixCommand(const std::string &name,
                                       const std::string &description)
    : Command(name, description) {}

void PrintMatrixCommand::execute(ContextCommand *context) const {
  auto *ctx = dynamic_cast<PrintMatrixContextCommand *>(context);

  if (ctx)
    ctx->matrices[ctx->index]->print();
}
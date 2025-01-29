#include "../../../Includes/CommandPattern/Commands/GetCommand.hpp"

GetCommand::GetCommand(const std::string &name, const std::string &description): Command(name, description) {}

void GetCommand::execute(ContextCommand *context) const {
    auto *ctx = dynamic_cast<GetContextCommand *>(context);

    if (ctx) {
        double element = ctx->matrices[ctx->index]->getElement(ctx->row, ctx->col);
        std::cout << element << std::endl;
    }
}
#include "../../../Includes/CommandPattern/Commands/MultiplyCommand.hpp"

MultiplyCommand::MultiplyCommand(const std::string &name, const std::string &description): Command(name, description) {}

void MultiplyCommand::execute(ContextCommand *context) const {
    auto *ctx = dynamic_cast<MultiplyContextCommand *>(context);
    
    if (ctx) {
        SparseMatrix *result = multiply(ctx->matrices[ctx->indexMatrixA], ctx->matrices[ctx->indexMatrixB]);
        ctx->matrices.push_back(result);
    }
}
#include "../../../Includes/CommandPattern/Commands/MultiplyCommand.hpp"

MultiplyCommand::MultiplyCommand(const std::string &name, const std::string &description): Command(name, description) {}

void MultiplyCommand::execute(ContextCommand *context) const {
    auto *ctx = dynamic_cast<MultiplyContextCommand *>(context);
    
    if (ctx) {
        MatrixInfo &infoA = ctx->matrices[ctx->indexMatrixA];
        MatrixInfo &infoB = ctx->matrices[ctx->indexMatrixB];
        SparseMatrix *result = multiply(infoA.matrix, infoB.matrix);

        ctx->matrices.emplace_back(result, formatOperationOrigin("multiplicacao", infoA.origin, infoB.origin));

        std::cout << "Matriz resultado adicionada na posicao " << ctx->matrices.size() - 1 << std::endl;
    }
}
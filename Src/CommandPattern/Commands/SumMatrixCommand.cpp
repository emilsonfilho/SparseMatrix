#include "../../../Includes/CommandPattern/Commands/SumMatrixCommand.hpp"

SumMatrixCommand::SumMatrixCommand(const std::string &name, const std::string &description) : Command(name, description) {}
void SumMatrixCommand::execute(ContextCommand *context) const {
  auto *ctx = dynamic_cast<SumMatrixContextCommand *>(context);

    if (ctx){
        // chama SumMatrizz

        SparseMatrix *result = SumMatrix(ctx->matrices[ctx->indexMatrixA], ctx->matrices[ctx->indexMatrixB]);
        ctx->matrices.push_back(result);

        std::cout << "Matriz resultado adicionada na posicao " << ctx->matrices.size() - 1 << std::endl;
    }
}

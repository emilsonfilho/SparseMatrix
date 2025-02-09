#include "../../../Includes/CommandPattern/Commands/SumMatrixCommand.hpp"

SumMatrixCommand::SumMatrixCommand(const std::string &name,
                                   const std::string &description)
    : Command(name, description) {}
void SumMatrixCommand::execute(ContextCommand *context) const {
  auto *ctx = dynamic_cast<SumMatrixContextCommand *>(context);

  if (ctx) {
    // chama SumMatrizz
    MatrixInfo &infoA = ctx->matrices[ctx->indexMatrixA];
    MatrixInfo &infoB = ctx->matrices[ctx->indexMatrixB];

    SparseMatrix *result = SumMatrix(infoA.matrix, infoB.matrix);
    ctx->matrices.emplace_back(
        result, formatOperationOrigin("soma", infoA.origin, infoB.origin));

    std::cout << "Matriz resultado adicionada na posicao "
              << ctx->matrices.size() - 1 << std::endl;
  }
}

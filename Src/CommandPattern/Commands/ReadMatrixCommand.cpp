#include "../../../Includes/CommandPattern/Commands/ReadMatrixCommand.hpp"

ReadMatrixCommand::ReadMatrixCommand(const std::string &name,
                                     const std::string &description)
    : Command(name, description) {}
void ReadMatrixCommand::execute(ContextCommand *context) const {
  auto *ctx = dynamic_cast<ReadMatrixContextCommand *>(context);

  if (ctx) {
    SparseMatrix *matrix = new SparseMatrix();
    ReadMatrices(ctx->nameMatriz, matrix);
    ctx->matrices.emplace_back(matrix, ctx->nameMatriz);

    std::cout << "Matriz adicionada na posicao " << ctx->matrices.size() - 1
              << std::endl;
  }
}

#include "../../../Includes/CommandPattern/Contexts/GetContextCommand.hpp"

GetContextCommand::GetContextCommand(int row, int col, int index, const MatrixInfoVectorRef matrices): row(row), col(col), index(index), matrices(matrices) {}
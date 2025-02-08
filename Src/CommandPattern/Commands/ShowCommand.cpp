#include "../../../Includes/CommandPattern/Commands/ShowCommand.hpp"

ShowCommand::ShowCommand(const std::string &name, const std::string &description): Command(name, description) {}

void ShowCommand::execute(ContextCommand *context) const {
    auto *ctx = dynamic_cast<ShowContextCommand *>(context);

    if (ctx) {
        MatrixInfoVectorRef system = ctx->system;

        for (size_t i = 0; i < system.size(); i++) {
            std::cout << i << ": " << system[i].origin << std::endl;
        }
    }
}
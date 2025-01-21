#include "../../../Includes/CommandPattern/Commands/HelpCommand.hpp"

HelpCommand::HelpCommand(const std::string& name, const std::string& description, const UnorderedMapCommand& mapCommand)
    : Command(name, description), commandRegistry(mapCommand) {}

void HelpCommand::execute(ContextCommand* context) const {
    (void) context;
    std::ostringstream ss;

    for (const auto& pair : commandRegistry) {
        ss << pair.first << " - " << pair.second.command->getDescription() << '\n';
    }

    std::cout << ss.str();
}
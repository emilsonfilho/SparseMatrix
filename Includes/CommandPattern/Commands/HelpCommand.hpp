#ifndef HELP_COMMAND_HPP
#define HELP_COMMAND_HPP

#include <iostream>
#include <sstream>

#include "Command.hpp"
#include "../../../Defs/UnorderedMapCommand.hpp"

class HelpCommand : public Command
{
private:
    UnorderedMapCommand commandRegistry;
public:
    HelpCommand(const std::string& name, const std::string& description, const UnorderedMapCommand& mapCommand);
    void execute(ContextCommand* context = nullptr) const override;
};


#endif
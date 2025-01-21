#ifndef COMMAND_INFO_HPP
#define COMMAND_INFO_HPP

#include <functional>

#include "../Includes/CommandPattern/Commands/Command.hpp"
#include "../Includes/CommandPattern/Contexts/ContextCommand.hpp"

struct CommandInfo
{
    Command* command;
    std::function<ContextCommand*()> contextFactory;
};


#endif
#ifndef COMMAND_INFO_HPP
#define COMMAND_INFO_HPP

#include <functional>

#include "../Includes/Commands/Command.hpp"
#include "../Includes/Contexts/ContextCommand.hpp"

struct CommandInfo
{
    Command* command;
    std::function<ContextCommand*()> contextFactory;
};


#endif
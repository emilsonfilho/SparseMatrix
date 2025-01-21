#ifndef COMMAND_INFO_HPP
#define COMMAND_INFO_HPP

#include <functional>

#include "../Commands/Command.hpp"
#include "../Contexts/CommandContext.hpp"

struct CommandInfo
{
    Command* command;
    std::function<CommandContext*()> contextFactory;
};


#endif
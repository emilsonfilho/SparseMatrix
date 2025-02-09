#ifndef COMMAND_INFO_HPP
#define COMMAND_INFO_HPP

#include <functional>

#include "../Includes/CommandPattern/Commands/Command.hpp"

struct CommandInfo {
  Command *command;
  std::function<ContextCommand *()> contextFactory;
};

#endif
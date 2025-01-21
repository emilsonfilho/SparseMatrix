#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "../Contexts/ContextCommand.hpp"

class Command
{
protected:
    std::string name;
    std::string description;
public:
    Command(const std::string& n, const std::string& d): name(n), description(d) {}

    std::string getName() { return name; };
    std::string getDescription() { return description; };

    virtual void execute(ContextCommand* context = nullptr) const = 0;
    virtual ~Command() = default;
};

#endif
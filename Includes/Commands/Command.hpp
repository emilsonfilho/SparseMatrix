#ifndef COMMAND_HPP
#define COMMAND_HPP

class Command
{
protected:
    std::string name;
    std::string description;
public:
    Command(const std::string& n, const std::string& d): name(n), description(d) {}
    virtual void execute(CommandContext* context) = 0;
    virtual ~Command() = default;
};

#endif
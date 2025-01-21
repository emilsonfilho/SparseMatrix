#include "Command.hpp"
#include <iostream>
class TestCommand : public Command
{
public:
    TestCommand(const std::string& name, const std::string& description) : Command(name, description) {}

    void execute(ContextCommand* context) const override {
        (void) context;
        std::cout << "Oi! Eu sou um teste!\n";
    }
};
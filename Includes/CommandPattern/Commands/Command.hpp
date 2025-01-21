#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "../Contexts/ContextCommand.hpp"

class Command
{
protected:
    std::string name;
    std::string description;
public:
    /** 
     * @brief Construtor padrão do comando
     * 
     * @param n Nome do comando
     * @param d Descrição do comando
    */
    Command(const std::string& n, const std::string& d): name(n), description(d) {}

    /**
     * @brief Retorna o nome do comando
     */
    std::string getName() { return name; };
    /**
     * @brief Retorna a descrição do comando
     */
    std::string getDescription() { return description; };

    /**
     * @brief Comando de execução exigido por todas as classes filhas
     * 
     * @param context Contexto para aplicar dados a serem consumidos pelo comando
     */
    virtual void execute(ContextCommand* context = nullptr) const = 0;
    /**
     * @brief Destructor do comando
     */
    virtual ~Command() = default;
};

#endif
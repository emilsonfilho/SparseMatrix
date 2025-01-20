#ifndef NODE_HPP
#define NODE_HPP

class Node
{
private:
    double value;
    Node *down;
    Node *next;

public:
    /**
     * @brief Construtor padrão para a classe Node
     */
    Node();
    /**
     * @brief Construtor da classe Node
     *
     * @param v Valor a ser armazenado no nó
     * @param d Ponteiro para o próximo nó na coluna, se houver
     * @param n Ponteiro para o próximo nó na linha, se houver
     */
    Node(double v, Node *d = nullptr, Node *n = nullptr);

    /**
     * @brief Retorna o valor armazenado no Node
     */
    double getValue();
    /**
     * @brief Sobrescreve o valor armazenado no Node
     *
     * @param value O valor a ser sobrescrito
     */
    void setValue(double value);

    /**
     * @brief Retorna um ponteiro para o próximo Node na coluna
     */
    Node *getDown();
    /**
     * @brief Sobrescereve o ponteiro para o próximo Node na coluna
     *
     * @param pointer O endereço a ser sobrescrito
     */
    void setDown(Node *pointer);

    /**
     * @brief Retorna um ponteiro para o próximo Node na linha, ele mesmo se não existe
     */
    Node *getNext();
    /**
     * @brief Sobrescreve um ponteiro para o próximo Node na linha
     *
     * @param pointer O endereço a ser sobrescrito
     */
    void setNext(Node *pointer);
};

#endif
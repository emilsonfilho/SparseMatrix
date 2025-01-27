#ifndef NODE_HPP
#define NODE_HPP

class Node {
private:
  int row{0};
  int col{0};
  double value{0};
  Node *down{nullptr};
  Node *next{nullptr};

public:
  /**
   * @brief Construtor padrão para a classe Node
   */
  Node();
  /**
   * @brief Construtor da classe Node
   *
   * @param r Número da linha em que o nó está
   * @param c Número da coluna em que o nó está
   * @param v Valor a ser armazenado no nó
   * @param d Ponteiro para o próximo nó na coluna, se houver
   * @param n Ponteiro para o próximo nó na linha, se houver
   */
  Node(int r, int c, double v, Node *d = nullptr, Node *n = nullptr);

  /**
   * @brief Retorna a linha do Node
   */
  int getRow();
  /**
   * @brief Retorna a coluna do Node
   */
  int getCol();

  /**
   * @brief Retorna o valor armazenado no Node
   *
   * @note Versão que pode ser modificada
   */
  double &getValue();
  /**
   * @brief Retorna o valor armazenado no Node
   *
   * @note Versão constante
   */
  const double &getValue() const;
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
   * @brief Retorna um ponteiro para o próximo Node na linha, ele mesmo se não
   * existe
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

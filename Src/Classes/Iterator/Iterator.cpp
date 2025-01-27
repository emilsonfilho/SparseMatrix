#include "../../../Includes/Classes/Iterator/Iterator.hpp"
#include <iostream>

Iterator::Iterator() = default;
Iterator::Iterator(Node *address) : pointer(address) {}

void Iterator::nextInRow() {
  if (pointer != nullptr and pointer->getNext() != pointer)
    pointer = pointer->getNext();
}

bool Iterator::isRowBigger(const Iterator& it) {
  /**
  * Não conseguimos colocar uma mensagem de erro por agora
  * Task do Calebe precisa ser feita
  */
  if (pointer->getCol() != it.pointer->getCol()) {
    std::cout << "[ERRO]: Colunas diferentes na verificacao de linhas\n";
    return false;
  }

  return pointer->getRow() > it.pointer->getRow();
}

bool Iterator::operator==(const Iterator &it) { return pointer == it.pointer; }
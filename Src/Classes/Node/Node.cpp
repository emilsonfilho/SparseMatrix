#include "../../../Includes/Classes/Node/Node.hpp"

Node::Node() = default;
Node::Node(int r, int c, double v, Node *d, Node *n)
    : row(r), col(c), value(v), down(d), next(n) {}

int Node::getRow() const { return row; }
int Node::getCol() const { return col; }

double &Node::getValue() { return value; }
const double &Node::getValue() const { return value; }
void Node::setValue(double value) { this->value = value; }

Node *Node::getDown() const { return down; }
void Node::setDown(Node *pointer) { this->down = pointer; }

Node *Node::getNext() const { return next; }
void Node::setNext(Node *pointer) { this->next = pointer; }

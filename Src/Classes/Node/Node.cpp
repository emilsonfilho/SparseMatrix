#include "../../../Includes/Classes/Node/Node.hpp"

Node::Node() = default;
Node::Node(double v, Node *d, Node *n) : value(v), down(d), next(n) {}

double Node::getValue() { return value; }
void Node::setValue(double value) { this->value = value; }

Node *Node::getDown() { return down; }
void Node::setDown(Node *pointer) { this->down = pointer; }

Node *Node::getNext() { return next; }
void Node::setNext(Node *pointer) { this->next = pointer; }

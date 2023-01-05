#ifndef NODE_H
#define NODE_H

#include <sstream>

template<typename T>
class DoublyLinkedList;

template<typename T>
class Node {
    friend class DoublyLinkedList<T>;

    friend std::ostream& operator<<(std::ostream&, const Node<T>&);

    friend std::istream& operator<<(std::ostream&, const DoublyLinkedList<T>&);


private:
    Node *prev;
    Node *next;
    T data;
public:
    Node<T>();

    Node<T>(T, Node *);

};

#endif

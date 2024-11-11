#ifndef STACK_H
#define STACK_H
#include"../node/node.cpp"

template<class T>
class Stack{
    private:
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    public:
    Stack(T,Node<T>*);
    ~Stack();
    void push(T);
    T pop();
    bool isEmpty();
    void print();
    void revert();
};

#endif
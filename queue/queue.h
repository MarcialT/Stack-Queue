#ifndef QUEUE_H
#define QUEUE_H
#include"../node/node.cpp"
template<class T>
class Queue{
    private:
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    public:
    Queue(T,Node<T>*);
    ~Queue();
    void push(T);
    T pop();
    void print();
    bool isEmpty();
};
#endif
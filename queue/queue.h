#ifndef QUEUE_H
#define QUEUE_H
#pragma once
#include"../node/node.cpp"
template<class T>
class Queue{
    private:
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    public:
    Queue(T,Node<T>*);
    Queue();
    ~Queue();
    void push(T);
    T pop();
    void print();
    bool isEmpty();
    void processByPriority();
    Node<T>* getHead();
};
#endif
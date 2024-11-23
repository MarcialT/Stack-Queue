#ifndef PRIORITYQUEUE_H
#define STACK_H
#include"../queue/queue.cpp"
#pragma once
template<class T>
class priorityqueue{
    private:
    Node<T>* head = nullptr;
    public:
    priorityqueue();
    void push(T data, int priority);
    T pop();
    bool isEmpty();
};



#endif
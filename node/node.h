#ifndef NODE_H
#define NODE_H
#pragma once
template<class T>
class Node{
    private:
    T data;
    Node<T>* next = nullptr;
    int priority;
    public:
    Node(T data,Node<T>* next);
    Node(T, Node<T>*,int);
    ~Node();
    T getData();
    void setData(T);
    Node<T>* getNext();
    void setNext(Node<T>*);
    int getPriority();
    void setPriority(int);
};
#endif
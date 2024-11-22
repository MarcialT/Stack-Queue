#ifndef NODE_H
#define NODE_H

template<class T>
class Node{
    private:
    T data;
    Node<T>* next = nullptr;
    int priority;
    public:
    Node(T data,Node<T>* next);
    Node(T data,Node<T>* next, int priority);
    ~Node();
    T getData();
    void setData(T);
    Node<T>* getNext();
    void setNext(Node<T>*);
    int getpriority();
    void setpriority(int);
};
#endif
#ifndef NODE_H
#define NODE_H

template<class T>
class Node{
    private:
    T data;
    Node<T>* next = nullptr;
    int priority;
    public:
    Node(T,Node<T>*);
    ~Node();
    T getData();
    void setData(T);
    Node<T>* getNext();
    void setNext(Node<T>*);
};
#endif
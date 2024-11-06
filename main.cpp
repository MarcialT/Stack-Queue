#include<iostream>
using namespace std;

template<class T>
class Node{
    private:
    T data;
    Node<T>* next = nullptr;
    Node<T>* prev = nullptr;
    public:
    T getData();
    void setData(T);
    Node<T>* getNext();
    void setNext(Node<T>*);
    Node<T>* getPrev();
    void setPrev(Node<T>*);
};

template<class T>
class Queue{
    private:
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    public:
    Queue(T,Node<T>*);
    ~Queue();
    void print();
    bool isEmpty();
    int getLength();
};

int main(){

}

template<class T>
bool Queue<T>::isEmpty(){
return this->head==nullptr;
}


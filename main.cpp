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

int main(){

}
#include<iostream>
#include"./queue.h"
using namespace std;

template<class T>
bool Queue<T>::isEmpty(){
return this->head==nullptr;
}

template<class T>
Queue<T>::Queue(T data,Node<T>* node){
    Node<T> *newNode = new Node<T>(data,node);
    head = newNode;
    tail = head;
}

template<class T>
Queue<T>::~Queue(){
    this->head = nullptr;
    this->tail = nullptr;
}

template<class T>
void Queue<T>::push(T data){
    Node<T> *node = new Node<T>(data,nullptr);
    if(isEmpty()){
        head = node;
        tail = node;
        return;
    }
    this->tail->setNext(node);
    this->tail = node;
}

template<class T>
T Queue<T>::pop(){
    if(isEmpty()){
         throw std::out_of_range("Queue is empty");
    }
    Node<T> *temp = head;
    T data = temp->getData();
    head = head->getNext();
    delete temp;
    return data;
}

template<class T>
void Queue<T>::print(){
    while(!isEmpty()){
        cout<<pop()<<endl;
    }
}
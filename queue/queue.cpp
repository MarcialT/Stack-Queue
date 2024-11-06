#include<iostream>
#include"queue.h"
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
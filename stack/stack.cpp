#include<iostream>
#include"./stack.h"
using namespace std;

template<class T>
Stack<T>::Stack(T data,Node<T>* node){
    Node<T> *newNode = new Node<T>(data,node);
    head = newNode;
}

template<class T>
bool Stack<T>::isEmpty(){
    return this->head==NULL;
}

template<class T>
Stack<T>::~Stack(){
    this->head= nullptr;
}

template<class T>
void Stack<T>::push(T data){
    Node<T> *newNode = new Node<T>(data, head);
    head = newNode;
}
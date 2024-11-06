#include<iostream>
#include"node.h"
using namespace std;

template<class T>
Node<T>::Node(T data,Node<T>* next){
    this->data = data;
    this->next = next;
}

template<class T>
Node<T>::~Node(){
    this->next = nullptr;
}

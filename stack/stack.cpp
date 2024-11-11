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

template <class T>
T Stack<T>::pop(){
    T data;
    Node<T> *Temp = head;
    head = head->getNext();
    data = Temp->getData();
    delete Temp;
    return data;
}

template<class T>
void Stack<T>::print(){
    while(!isEmpty()){
    cout<<pop()<<endl;
}
}

template<class T>
void Stack<T>::revert(){
        if(isEmpty()){
                return;
        }else{
                Node<T> *node = head;
                tail = head;
                head = node->getNext();
                delete node;
        }

}
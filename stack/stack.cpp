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
    return data;
    delete Temp;
}

template<class T>
void Stack<T>::print(){
    while(!isEmpty()){
    cout<<pop()<<endl;
}
}

template<class T>
void Stack<T>::printStack(){
    Node<T>* Temp = head;
    while(Temp!= nullptr){
        cout<<Temp->getData()<<" "<<endl;
        Temp = Temp->getNext();
    }
}
template<class T>
Stack<T>::Stack(){

}
template<class T>
void Stack<T>::revert(){
    Stack<T> Temp1;
    Stack<T> Temp2;
    while(!isEmpty()){
        Temp1.push(pop());
    }
    while (!Temp1.isEmpty())
    {
        Temp2.push(Temp1.pop());
    }
    while(!Temp2.isEmpty()){
        push(Temp2.pop());
    }
    printStack();
}

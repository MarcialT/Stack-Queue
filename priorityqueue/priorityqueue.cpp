#include<iostream>
#include"./priorityqueue.h"
#pragma once
using namespace std;

template<class T>
priorityqueue<T>::priorityqueue(){ 
    

}

template<class T>
void priorityqueue<T>::push(T data,int priority){
     Node<T>* newnode = new Node<T>(data,head,priority);
    if (!head || priority < head->getPriority()) {
        newnode->setNext(head);
        head = newnode;
    } else {
        Node<T>* temp = head;
        while (temp->getNext() && temp->getNext()->getPriority() <= priority) {
            temp = temp->getNext();
        }
        newnode->setNext(temp->getNext());
        temp->setNext(newnode);
    }
}

template<class T>
T priorityqueue<T>::pop(){
   if (!head) {
        throw std::out_of_range("La cola está vacía");
    }
    Node<T>* temp = head;
    T data = temp->getData();
    head = head->getNext();
    delete temp;
    return data;
}

template<class T>
bool priorityqueue<T>::isEmpty(){
    return head == nullptr;
}

#include<iostream>
#include"./queue.h"
#pragma once
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
Queue<T>::Queue(){

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
        cout<<"Queue is empty"<<endl;
        return;
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


template<class T>
void Queue<T>::processByPriority(){
    while(!isEmpty()){
            Node<T>* highestPriorityNode = head;
            Node<T>* Temp = head;
            Node<T>* previous = nullptr;
            Node<T>* previousHighest = nullptr;

            while (Temp != nullptr) {
                if (Temp->getPriority() > highestPriorityNode->getPriority()) {
                    highestPriorityNode = Temp;
                    previousHighest = previous;
                }
                previous = Temp;
                Temp = Temp->getNext();
            }

            if (previousHighest != nullptr) {
                previousHighest->setNext(highestPriorityNode->getNext());
            } else {
                head = highestPriorityNode->getNext();
            }

            if (highestPriorityNode == tail) {
                tail = previousHighest;
            }

            cout << "Dato procesado: " << highestPriorityNode->getData() << " con prioridad de " << highestPriorityNode->getPriority() << endl;
            delete highestPriorityNode;
        }
    }

    template<class T>
 Node<T>* Queue<T>:: getHead() {
        return head;
    }

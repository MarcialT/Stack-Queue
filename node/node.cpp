#include<iostream>
#include"./node.h"
#pragma once
using namespace std;

template<class T>
Node<T>::Node(T data,Node<T>* next){
    this->data = data;
    this->next = next;
}

template<class T>
Node<T>::Node(T data, Node<T>* next,int priority){
    this->data = data;
    this->next = next;
    this->priority = priority;
}

template<class T>
Node<T>::~Node(){
    this->next = nullptr;
}

template<class T>
T Node<T>::getData(){
    return this->data;
}

template<class T>
void Node<T>::setData(T data){
    this->data = data;
}

template<class T>
Node<T>* Node<T>::getNext(){
    return this->next;
}

template<class T>
void Node<T>::setNext(Node<T>* next){
    this->next = next;
}

template<class T>
int Node<T>::getPriority(){
    return this->priority;
}

template<class T>
void Node<T>::setPriority(int priority){
    this->priority = priority;
}

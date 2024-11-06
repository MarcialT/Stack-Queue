#include<iostream>
#include"queue.h"
using namespace std;

template<class T>
bool Queue<T>::isEmpty(){
return this->head==nullptr;
}

template<class T>
void Queue<T>::print(){
    cout<<"la cola es: "<<this->tail<<endl;
    cout<<"La cabeza es: "<<this->head<<endl;
}
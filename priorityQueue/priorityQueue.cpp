#include<iostream>
#include"./priorityQueue.h"
using namespace std;

template<class T>
void priorityQueue<T>::push(T data,int level){
    if(priorities==0){
        levels->push(data);
    }else{
        levels[level].push(data);
    }
}
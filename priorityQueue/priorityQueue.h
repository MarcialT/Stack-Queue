#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include"./queue/queue.cpp"
template<class T>
class priorityQueue{
    private:
    int priorities = 0;
    Queue<T>* Levels = NULL;
    public:
    void push(T,int);
    T pop (int);
    void print(int);
    priorityQueue(int);
};
#endif 
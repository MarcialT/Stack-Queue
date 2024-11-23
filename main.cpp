#include<iostream>
#include"./stack/stack.cpp"
#include"./queue/queue.cpp"
#include"./priorityqueue/priorityqueue.cpp"
using namespace std;

int main(){

Stack<char> miPila('p',nullptr);
miPila.push('s');
miPila.push('t');
cout<<"pila invertida"<<endl;
miPila.revert();
cout<<endl;

Queue<int> queue;
queue.push(10);
queue.push(20);
queue.push(30);

//La prioridad mayor es el numero mas alto
Node<int>* node = queue.getHead();
if (node != nullptr) node->setPriority(1);
node = node->getNext();
if (node != nullptr) node->setPriority(3);
node = node->getNext();
if (node != nullptr) node->setPriority(2);
queue.processByPriority();
cout<<endl;


//La prioridad mayor es el numero mas bajo
 priorityqueue<int> queue2;
    queue2.push(10, 2);
    queue2.push(5, 1);
    queue2.push(20, 3);

    while (!queue2.isEmpty()) {
        cout << "Dato procesado: " << queue2.pop() <<endl;
    }
}

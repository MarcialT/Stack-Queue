#include<iostream>
#include"./stack/stack.cpp"
#include"./queue/queue.cpp"
using namespace std;

int main(){

Stack<char> miPila('p',nullptr);
miPila.push('s');
miPila.push('t');
cout<<"pila invertida"<<endl;
miPila.revert();

Queue<int> queue;
queue.push(10);
queue.push(20);
queue.push(30);

Node<int>* node = queue.getHead();
if (node != nullptr) node->setPriority(1);
node = node->getNext();
if (node != nullptr) node->setPriority(3);
node = node->getNext();
if (node != nullptr) node->setPriority(2);
queue.processByPriority();

}

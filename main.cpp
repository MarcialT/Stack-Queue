#include<iostream>
#include"./stack/stack.cpp"
using namespace std;

int main(){

Stack<char> miPila('p',nullptr);
miPila.push('s');
miPila.push('t');
cout<<"pila invertida"<<endl;
miPila.revert();
}

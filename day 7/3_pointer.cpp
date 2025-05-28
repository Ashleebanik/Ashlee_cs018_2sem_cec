#include<iostream>
using namespace std;
int main(){
    int a=100;
    cout<<"Address of a : "<<&a<<endl;
    int *p=&a;
    cout<<"Pointer value: "<<p<<endl;
    cout<<"Pointer address: "<<&p<<endl;
    cout<<"Value of a: " <<a<<endl;
    cout<<"Value of a using pointer"<<*p<<endl;

}
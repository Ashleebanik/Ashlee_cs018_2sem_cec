#include<iostream>
using namespace std;
int main(){
    int a=100;
    cout<<"Address of a : "<<&a<<endl;
    int *p=&a;
    cout<<"Pointer value: "<<p<<endl;
    cout<<"Pointer address: "<<&p<<endl;
    cout<<"Value of a: " <<a<<endl;
    cout<<"Value of a using pointer: "<<*p<<endl;
    cout<<"1. Value of a: "<<*(&a)<<endl;
    cout<<"2. value of a: "<<*(*(&p)) <<endl;
    cout<<"3.Value of a: "<<*(&(*p))<<endl;
    

}
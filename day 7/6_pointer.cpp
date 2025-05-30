#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    int **p1=&p;
    cout<<"Value of a: " <<a<<endl;
    cout<<"Value of a: " <<*(&a)<<endl;
    cout<<"Value of a: " <<**&p<<endl;
    cout<<"Value of a: " <<***(&p1)<<endl;
    cout<<"Value of a: " <<*(&(**p1))<<endl;
    cout<<"Value of a: " <<*p<<endl;
    cout<<"Value of a: " <<**p1<<endl;
}


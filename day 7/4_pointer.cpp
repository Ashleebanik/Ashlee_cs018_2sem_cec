#include<iostream>
using namespace std;
int main(){
    int a =10;
    int *p=&a;
    *p=101;
    int b = 20;
    p=&b;
    *(&(*p))=30;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;

}
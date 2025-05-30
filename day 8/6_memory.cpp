#include<iostream>
using namespace std;
int main(){
    int *a1=new int;
    cout<<"value of a1: "<<a1<<endl;
    *a1=20;
    cout<<"value: "<<*a1<<endl;
    delete a1; 
    return 0;
}
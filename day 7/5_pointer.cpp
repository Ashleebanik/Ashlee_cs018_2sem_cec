#include<iostream>
using namespace std;
void change(int *p1){
    *p1=*p1+90;
}
int main(){
    int a=10;
    int *pt=&a;
    change(pt);
    cout<<"The value of a: "<<a<<endl;
    return 0;
}
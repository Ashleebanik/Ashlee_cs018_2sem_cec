#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,11,9,10};
    int *p=a;
    int e=0;
    int o=0;
    for (int i=0;i<10;i++){
        int r=*(p+i);
    if (r%2!=0)
        {
            o=o+1;
          }
    else
    {
         e=e+1;
    }}
    cout<<"Number of even numbers: "<<e<<endl;
    cout<<"Number of odd numbers: "<<o<<endl;
    return 0;
}
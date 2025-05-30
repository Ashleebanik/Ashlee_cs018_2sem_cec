#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"Enter the values of the array:"<<endl;
    for (int i=0;i<5;i++){
    cout<<"Enter "<<i+1<<"element: "<<endl;
    cin >> a[i];

    }
    cout<<"Array elements: "<<endl;
    for (int i=0;i<5;i++){
    cout<<i+1<<"element is : "<<a[i]<<endl;
 }
 /*cout<<*(a)<<endl;
 cout<<*(a+1)<<endl;
*(a+1)=*(a+1)*2;
 cout<<*(a+1)<<endl;*/

 return 0;
}
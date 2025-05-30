#include<iostream>
using namespace std;
int main(){
    int a[5]={10,32,43,65,78};
    int *p=a;
    int max=p[0];
    for (int i=0;i<5;i++){
        if(p[i]>max){
            max=p[i];
        }
    }
    cout<<"Maximum number of the array is: "<<max<<endl;
}
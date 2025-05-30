#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    cout<<"Array address: "<<arr<<endl;
    cout<<"First element address: "<<arr[0]<<endl;
    cout<<"Value of  element: "<<*(arr+1)<<endl;
    int *ptr=arr;
    cout<<"Value using pointer "<<*(ptr+2)<<endl;
    cout<<"Before: "<<arr[1]<<endl;
    *(arr+1)=*(arr+1)*2;
    cout<<"After: "<<*(arr+1)<<endl;
    cout<<"1. First element: "<<arr[0]<<endl;
    cout<<"2. First element: "<<0[arr]<<endl;
    cout<<"3. First element: "<<ptr[0]<<endl;
    cout<<"4. First element: "<<0[ptr]<<endl;
    cout<<"5. First element: "<<*(arr+0)<<endl;
    cout<<"5. First element: "<<*(ptr+0)<<endl;
    return 0;
}
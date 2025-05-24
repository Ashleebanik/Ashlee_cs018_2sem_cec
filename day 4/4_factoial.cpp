#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==1){
        cout<<"Factorial of the number"<<endl;
        return 1;
    }
    else if (num==2){
        return 2;
}
        return  num*fact(num-1);

}
int main(){
   int num;
    int f=1;
    cout<<"Enter the number"<<endl;
    cin>>num;
   int res=fact(num);
    cout<<res<<endl;
    return 0;
}

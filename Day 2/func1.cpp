#include<iostream>
using namespace std;
int add (int n,int m);
int main(){
    int a,b,res;
    cout<<"Enter the numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"The two numbers are"<<a<<"and"<<b<<endl;
    res=add(a,b);
    cout<<"The sum of the numbers are"<<res<<endl;

}
int add(int n,int m){
    int sum=n +m;
    return sum;
}
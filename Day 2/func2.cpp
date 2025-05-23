/*user defined functions are of 4 types:
1. function accepting parameters and not returning values
2. functions accepting parameters and return a valus
3. function not accepting a paramters and returning a value
4. function not accepting a value and also not returning the value
*/
#include<iostream>
using namespace std;
int add (int n,int m);
void sub(int n,int m);
int mul();
void div();
int main(){
    int a,b,res;
    cout<<"Enter the numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"The two numbers are"<<a<<"and"<<b<<endl;
    res=add(a,b);
    cout<<"The sum of the numbers are"<<res<<endl;
   sub(a,b);
   
    int res2=mul();
    cout<<"the multiplication answer is"<<res2<<endl;
   div();


}
int add(int n,int m){
    int sum=n +m;
    return sum;
}
void sub(int n,int m){
    cout<<"The sub is :"<<n-m<<endl;
}
int mul(){
    int a=10;
    int h=10;
    return a*h;
}
void div(){
    int d=20;
    int m=5;
    cout<<"the answer is "<<d/m<<endl;
}

202315200000000000000000000000000000156156156156156156156156156156156156
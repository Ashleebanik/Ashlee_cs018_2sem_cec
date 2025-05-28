#include<iostream>
using namespace std;
class sum{
    public:
    int a ;
    int b;
    int c;
public:

int add(int a,int b){
    int res= a+b;
    cout<<"Sum : "<<res<<endl;
    

}
int add(int a,int b,int c){
    int res=a+b+c;
    cout<<"sum is: "<<res<<endl;
    
}};
int main(){
    sum a1;
    a1.add(20,30);
    a1.add(30,30,20);
     return 0;
}








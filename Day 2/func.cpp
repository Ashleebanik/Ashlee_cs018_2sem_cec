/* to declare a function:
1.declare the functionor prototype of the function- return_type
2. function definition -
    return_type
3. function call - name_function(aruguments);*/

#include<iostream>
using namespace std;
int add (int num1, int num2);
int main(){
    int a=40;
    int b=60;
    int res=add(a,b);
    cout<<"The result is "<<res<<endl;
}
int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
#include<iostream>
using namespace std;
class bankaccount{
    public :
    string holder_name;
    int acc_no;
    bankaccount(string name, int acc_no){//paramteric constructor
        cout<<"contrusctor called automatically"<<endl;
        this -> holder_name=name;
        this-> acc_no=acc_no;
    }
    bankaccount(bankaccount &b1){
        this -> holder_name=b1.holder_name;
        this-> acc_no=b1.acc_no;
    }
void display(){
    cout<<"holder name: " << this -> holder_name<<endl;
    cout<<"Account number: "<<  this->acc_no<<endl;
}
};
int main(){
    bankaccount b1("mohan",012);
    
    bankaccount b2= b1;   //copy constructor 
     b2.display();
    return 0;
}

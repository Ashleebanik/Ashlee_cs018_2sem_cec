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
void display(){
    cout<<"holder name: " << this -> holder_name<<endl;
    cout<<"Account number: "<<  this->acc_no<<endl;
}
};
int main(){
    bankaccount b1("mohan",012);
    b1.display();    
    return 0;
}

/**
Constructor is a special type of method it will call autoamtically when the object is created 
 */
/*types of constructors
1.default constructor
2.parametric constructor
3.copy constructor*/

#include<iostream>
using namespace std;
class bankaccount{
    public :
    string holder_name;
    int acc_no;
    bankaccount(){//default constructor
        cout<<"contrusctor called automatically"<<endl;
        holder_name="NADA";
        acc_no = 1009;
    }

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
    bankaccount b1;
    bankaccount b2("mohan",45);
    b1.display();    
    b2.display();
    return 0;
}
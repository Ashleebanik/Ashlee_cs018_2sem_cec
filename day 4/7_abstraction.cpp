#include<iostream>
using namespace std;
class atm
{
    int balance=50000;
  private:
 bool verifypin(int pin){
    if (pin==1234){
        return true;
    }
    else{
        return false;
    }
 }  
 public:
   
    void withdraw(int aw,int pin){
        bool res=verifypin( pin);
        if (res==true)
        {
            if(aw>balance){
                cout<<"Insufficient balance"<<endl;
            }
            else{
                balance-=aw;
                display();
            }
        }
        else{
            cout<<"Invalid pin"<<endl;
        }
        

    }
    void display(){
        cout<<"The balance amount is: "<<balance<<endl;
    }

};
int main(){
    atm a1;
    int aw;//amount to withdraw
    int pin;//pin of the acc
    cout<<"Enter the amount to be withdrawn: "<<endl;
    cin>>aw;
    cout<<"Enter the pin : "<<endl;
    cin>>pin;
    a1.withdraw(aw,pin);
    

}
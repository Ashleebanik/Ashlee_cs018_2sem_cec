#include<iostream>
using namespace std;
class bankaccount{
    public :
    string holder_name;
    int acc_no;
    bankaccount(){//default constructor
        cout<<"contrusctor called automatically"<<endl;
    }

};
int main(){
    bankaccount b1;
    
    return 0;
}

/**
Constructor is a special type of method it will call autoamtically when the object is created 
 */
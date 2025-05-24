#include<iostream>
using namespace std;
class Bank{
    private:
    string name;
    public:
    Bank (string name){
        this-> name=name;
        cout<<"Contructor is created "<<endl;
        
    }
    ~Bank(){
        cout<<"Destructor is created"<<endl;

    }
    void display(){
        cout<<"Bank account holder is :"<<name<<endl;
    }
};
int main(){
    Bank b1("SAM");
    Bank b2("AMS");
    Bank b3("Mas");
    b1.display();
    b2.display();
    b3.display();
}
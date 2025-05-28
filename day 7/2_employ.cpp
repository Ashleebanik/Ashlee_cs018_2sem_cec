#include<iostream>
using namespace std;
class employee{
    private:
    string name;
    int id;
    float salary;
    protected:
    employee(string name,int id,float salary): name(name),id(id),salary(salary){}
    virtual void calculateSalary(){
        cout<<"Salary: "<<salary<<endl;

    }
   virtual void display(string name,int id){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        calculateSalary();
    }
};
class manager: public employee {
    public:
    float bonus;
    public:
    manager(string name,int id,float salary,float bonus):employee( name(name),id(id),salary(salary),bonus(bonus)){}
       
    void calculateSalary()  {
        float sal= salary+bonus;
        cout<<"Total salary: "<<sal<<endl;
    }
    void display(){
       cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        calculateSalary(3000);
        
        
    }
};
class developer: public employee{
    public:
    float otpay;//over time pay
    public:
    developer(string name,int id,float salary,float otpay):employee( name(name),id(id),salary(salary)){
      
    }
    void calculateSalary()  { 
       
        float sal=salary+otpay;
        cout<<"Total salary: "<<sal<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
       calculateSalary(4000);
         
    }};
int main(){
    /*employee *e;
    manager m;
    developer d;
    e=&m;
    e->manager;
    e->display;*/
     manager m1("pavan", 12, 50000, 12000);
    m1.display();
    developer d1("mohan", 23, 50000, 20000);
    d1.display();
    return 0;

}
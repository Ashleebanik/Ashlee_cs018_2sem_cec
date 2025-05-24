#include<iostream>
using namespace std;
class Bank{
    private:
    string holder_name;
    int acc_no;
    public:
    string getName(){
        return this -> holder_name;
    }
    int getAccnum(){
        return this -> acc_no;
    }
    void setName(string holder_name){
        this ->holder_name=holder_name;
    }
    void setAccnum(int acc_no){
        this->acc_no=acc_no;
    
    }

};
int main()
{
    Bank s1;
    s1.setName("Maya");
    s1.setAccnum(4254345);
   cout<<"NAME IS "<<s1.getName()<<endl;
   cout<<"ROLL NUMBER IS "<<s1.getAccnum()<<endl;

}
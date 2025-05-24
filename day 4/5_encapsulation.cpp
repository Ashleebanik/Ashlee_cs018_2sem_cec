#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_no;
    public:
    string getName(){
        return this -> name;
    }
    int getRollnum(){
        return this -> roll_no;
    }
    void setName(string name){
        this ->name=name;
    }
    void setRollnum(int roll_no){
        this->roll_no=roll_no;
    
    }

};
int main()
{
    student s1;
    s1.setName("maya");
    s1.setRollnum(5);
   cout<<"NAME IS "<<s1.getName()<<endl;
   cout<<"ROLL NUMBER IS "<<s1.getRollnum()<<endl;

}
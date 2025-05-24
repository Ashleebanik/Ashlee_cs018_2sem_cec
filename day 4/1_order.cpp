#include<iostream>
using namespace std;
class  student{
    private:
    string name;
    public:
    student(string name){
        this-> name = name;
        cout<<"Constructor is called for: "<<this->name<<endl;
    }
     /// @brief 
     ~student()
        {
            cout<<"Destructor called for: "<<name<<endl;
        }
};
int main(){
    student s1("maya");
    
     student s2("sarsgha"); 
      student s3("tom");
      return 0;
}

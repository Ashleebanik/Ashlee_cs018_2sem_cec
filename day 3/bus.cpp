#include<iostream>
using namespace std;
class bus{
    public:
    string route;
    int capacity;
    bus(string name,int capacity ){
        cout<<"contructor is called automatically"<<endl;
        this->route= name;
        this-> capacity=capacity;
    }
    void display(){
        cout<<"holder name is :"<<route<<endl;
        cout<<"capacity"<<capacity<<endl;

    }
};
int main(){
    bus b1("nowhere",25);
    b1.display();
    return 0;
}

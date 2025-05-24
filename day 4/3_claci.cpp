#include<iostream>
using namespace std;
class cal{
    int a,b;
    int c;
    public:
    int input(){
         cout<<"enter your choice= "<<endl;
         cout<<"1.add, 2.Sub, 3.Multiply, 4.Divide, 5.Modulus, 6.Exit"<<endl;
        cin>>c;
        cout<<"enter the two numbers"<<endl;
        cin>>a;
        cin>>b;
        
        return 0;
    }

void add(){
    int res=a+b;
    cout<<"Sum is "<<res<<endl;
}
void sub(){
    int res=a-b;
    cout<<"Difference is "<<res<<endl;
}
void mul(){
    int res=a*b;
    cout<<"Product is "<<res<<endl;
}
void div(){
    int res=a/b;
    cout<<"Quotient is "<<res<<endl;
}
void mod(){
    int res=a%b;
    cout<<"Remainder is "<<res<<endl;
}
void exit(){
    cout<<"You have exited "<<endl;
}
int display(){
    switch (c)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    case 5:
        mod();
        break;
    case 6:
        exit();
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }

}
};
int main(){
    cal c1;
    c1.input();
    c1.display();

}
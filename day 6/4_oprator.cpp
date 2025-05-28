#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex (){
        this-> real=0;
        this-> img=0;
    }
    Complex(int real,int img){
        this-> real=real;
        this-> img=img;
    }
    void display(){
        cout<<"the results is: "<<real<<"+i"<<img<<endl;
    }
    Complex operator+(Complex &c1)
    {
        Complex temp;//temporary variable
        temp.real=c1.real+real;
        temp.img=c1.img+img;
        return temp;

    }
};
int main(){
    Complex c1(3,2);
    Complex c2(5,6);
    c2.display();
    c1.display();
    Complex c3= c1+c2;
    c3.display();
}
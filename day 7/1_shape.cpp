#include<iostream>
using namespace std;
class shape{
    void calculatearea(){
        cout<<"Area not defined for generic shape."<<endl;

    }
};
class circle: public shape{
    private:
    int radius;
    public:
    circle(int radius){
        this-> radius=radius;
    }
    void calculatearea(int radius){
        int area=3.14*radius*radius;
        cout<<"area of circle: "<<area<<endl;
        
    }
};
class rectangle: public shape{
    private:
    int len;
    int wid;
    public:
    rectangle(int len,int wid){
        this->len=len;
        this->wid=wid;
    }
    void calculatearea(int len,int wid){
        int area= len*wid;
        cout<<"area of the rectangle: "<<area<<endl;
        
    }
};
class triangle: public shape{
    private:
    int base;
    int height;
    public:
    triangle (int base,int height){
        this->base=base;
        this->height=height;
    }
    void calculatearea(int base,int height){
        double area= 0.5*base*height;
        cout<<"area of the rectangle: "<<area<<endl;
    }
};
int main(){
    int radius;
    int len;
    int wid;
    int base;
    int h;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>radius;
     cout<<"Enter the length and width of the rectangle: "<<endl;
    cin>>len;
    cin>>wid;
     cout<<"Enter the base and height of the triangle: "<<endl;
    cin>>base;
    cin>> h;
   
    circle c1(radius);
    triangle t1(base, h);
    rectangle r1(len, wid);
    c1.calculatearea(radius);
    r1.calculatearea(len,wid);
    t1.calculatearea(base,h);
}

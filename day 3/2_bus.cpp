#include<iostream>
using namespace std;
class Bus{
    public:
    string bus_route;//data mmembers
    int capacity;
};
int main(){
    Bus b2;
   
    cout<<"Enter bus route is:"<<endl;
    cin>>b2.bus_route;
    cout<<"Enter bus capacity :"<<endl;
    cin>>b2.capacity;
    cout<<" bus route is: "<<b2.bus_route<<endl;
    cout<<" bus capacity is: "<<b2.capacity<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class product{
    int id;
    string name;
    int quan;//quantity
    int pp;//product price
    public: 
        product(int id,string name,int quan,int pp){
            id=id;
            name=name;
            quan=quan;
            pp=pp;

        }
};
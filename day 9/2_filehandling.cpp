#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
int main(){
    ofstream fout;
    fout.open("1_filehandling.txt");
    fout<<"Hello world! \n";
    fout<<"The file is opened and written and then it is read";
    fout.close();
    //cout<<"File is closed"<<endl;
    ifstream fin;
    fin.open("1_filehandling.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;

    }
fin.close();

}
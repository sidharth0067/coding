#include<iostream>
#include<string>

using namespace std;

class car{
    public:
    int year;
    int milage;
    string fuel;
    string name;
        void displaydata(){
            cout<<"vehicle details:"<<endl;
            cout<< name<<endl;
            cout<< year<< endl;
            cout<<milage<<endl;
            cout<<fuel<<endl;
        } 

        void setdata(string a, string b, int x, int y){
            name = a;
            fuel = b;
            year = x;
            milage = y;
            
        }
};

int main(){
    car m1;
    m1.setdata("meteor 350", "petrol", 2021, 9500);
    m1.displaydata();
}
#include<iostream>
using namespace std;

class number{
    public:
    double value;
    number(double x){
        value=x;
        if(value>0){
            cout<<value<<" is a positive number";
        }
        else if(value ==0 ){
            cout<<value<<" is neutral";
        }
        else{
            cout<<value<<" is a negative number";
        }
    }

};

int main(){
    double n;
    cout<<"enter number:";
    cin>>n;
    number n1(n);

}
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a=n;
    int sum=0, r;
    while(n!=0){
        r=n/10;
        n=n%10;
        sum=sum+(r*r*r);
    }
    if(sum==a){
        cout<<"armstrong";
    }
    else{cout<<"no";}
}

#include<iostream>
using namespace std;

int main(){
int x=1234567899;
    int sum=0,r;
    int p = x;
    while(p>0)
    {
    r=p%10;
    p=p/10;
    sum=(sum*10)+r;
    }
    cout<<sum;

    if(sum==x){
        cout<< 1;
    }
    else{
        cout<< 0;
    }
        
}
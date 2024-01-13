#include<iostream>
#include<vector>
using namespace std;

class area{
    public :
    int a;
    circle(int b){
        int a=(b*b);
        cout<<a;
    }
    rectangle(int l, int b){
        int a=l*b;
        cout<<a;
    }
};

int main(){
    int n;
    cin>>n;
    area a1;
    if(n==1){
        int r;
        cin>>r;
        a1.circle(r);
    }
    else if(n==2){
        int l,b;
        cin>>l;
        cin>>b;
        a1.rectangle(l,b);

    }
}
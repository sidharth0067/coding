#include<iostream>

using namespace std;

// int main(){
//     int a;
//     cin>>a;
// for (int i=0;i<=a;i++){
//     if(i%3==0){
//         cout<<i<<endl;
//     }
//     else{
//         continue;
//     }
// }}

int main(){
    int a,b=0;
    cin>>a;
    for(int i=2;i<a;i++){
        if(a%i==0){
            b=1;
        }
        else{
            continue;
    }
    }
    if(b==1){
        cout<<"not prime";}
    else{
        cout<<"prime";}

}

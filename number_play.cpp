#include<iostream>
using namespace std;

// int main(){
//     int a;
//     int y=0;
//     cin>>a;
//     for(int i=2;i<a/2;i++){
//         if(a%i==0){
//             y=1;
//         }
//         else{continue;}
//     }
//     if(y==1){cout<<"not prime";}
//     else{cout<<"prime";}
// }


 int main(){
    int a;
    cin>>a;
    int r=0,sum=0;
    while(a>0){
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    cout<<sum;
 }
#include<iostream>
using namespace std;
// int add(int a,int b){
//     int sum= a+b;
//     return sum;
// }
// int main(){

// int a, b;
// cin>>a;
// cin>>b;
// cout<<add(a,b)<<endl;

// }

// int isprime(int a){
//     for (int i=2;i<a/2;i++){
//         if(a%i==0){
//             return 0;
//         }
//         else{return 1;}
//     }
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a;i<b;i++){
//         if(isprime(i)==1){
//             cout<<i<<endl;
//         }
//         else{continue;}
//     }
// }

// int fibo(int i){
//     int a=0, b=1,sum;
//         for(int j=1;j<=i;j++){
//                 if(i==1){
//         cout<<a<<endl;
//     }
//     else if(i==2){
//         cout<<a+b<<endl;
//     }
//     else{
//             cout<<a<<endl;
//             sum=a+b;
//             a=b;
//             b=sum;
//     }
//         }
// }

// int main(){
//     int a;
//     cin>>a;
//     fibo(a);
// }

int fact(int a){
    int facto=1;
    for(int i=1;i<=a;i++){
        facto=facto*i;
    }
    return facto;
}
int main(){
    int a;
    cin>>a;
    cout<<fact(a)<<endl;
}
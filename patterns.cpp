#include<iostream>
using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     for(int i=0;i<a;i++){
//         for(int j=0;j<a;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int a;
//     cin>>a;
//     for(int i=0;i<a;i++){
//         for (int j=0;j<a;j++){
//             if((i>0 && i<a-1) && (j>0 && j<a-1)){
//                 cout<<" ";
//             }
//             else{cout<<"*";}
//         }
//         cout<<endl;
//     }
// }

// int main(){
//  int count = 1;
//  int a;
//  cin>>a;
//  for(int i=0;i<a;i++){
//     for(int j=0;j<=i;j++){
//         cout<<" "<<count<<" ";
//         count++;
//     }
//     cout<<endl;
//  }

// }

// int main(){
//     int a;
//     cin>>a;
//     for(int i=0;i<a;i++){
//         int count=1;
//         for(int j=0;j<a-i;j++){
//             cout<<count;
//             count++;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int a;
//     cin>>a;
//     for(int i=0;i<a;i++){
//         for(int j=0;j<=i;j++){
//             if ((i+j)%2==0){
//                 cout<<" 1 ";
//             }
//             else{
//                 cout<<" 0 ";
//             }
//         }
//         cout<<endl;
//     }
// }'


int main(){
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        for(int j=a;j>i;j--){
            cout<<" ";
        }
        for(int k=0;k<a;k++){
            cout<<" * "; 
        }
        cout<<endl;
    }
}
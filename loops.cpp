#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         // cout<<"this line is of "<<i<<" element"<<endl;
//         for(int j=0;j<i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
// }


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<endl;

    }
}
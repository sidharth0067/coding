#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

}


int union(int arr1[n], int arr[2]){
    int union[n] = arr1[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(union[j]!=arr2[i]){
                
            }
        }
    }
}
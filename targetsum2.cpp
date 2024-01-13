#include<iostream>
using namespace std;
int main(){
    int n, target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    int a=0,b=n-1;
    while(a<b){
    if(arr[a]+arr[b]==target){
        cout<<arr[a]<<","<<arr[b];
        break;
    }
    else if(arr[a]+arr[b]>target){
        b--;
    }
    else if(arr[a]+arr[b]<target){
        a++;
    }
    }
}
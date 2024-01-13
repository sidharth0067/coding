#include<iostream>
#include<climits>
using namespace std;

int last_occurance(int arr[],int a){
    int idx=INT_MIN;
    int n=sizeof(arr);
    for(int i=0;i<n;i++){
        if(arr[i]==a && idx<i){
            idx=i;
        }
        else{continue;}
    }
    return idx;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int test;
    cin>>test;
    cout<<last_occurance(arr, test);
}


#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=2;
    int sum=0, sum2=0,x,y;
    for(int i=0;i<n-1;i++){
        sum=arr[i]+arr[j];
        sum2= sum2+ arr[i+a];
        if(sum>sum2){
            continue;
        }
        else{
            
        }
    }
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int target, count=0;
    cin>>target;
    for(int i=0;i<v.size();i++){
        if(v[i]>target){
            count++;
        }
        else{continue;}
    }
    cout<<count;
}
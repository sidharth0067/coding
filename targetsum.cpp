#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(6);
    for(int a=0;a<v.size();a++){
        cin>>v[a];
    }
    int target, count=0;
    cin>>target;
    for(int x=0;x<v.size();x++){
        for(int j=0;j<v.size() && x!=j;j++){
            if(v[x]+v[j]==target){
                count++;
            }
            else{continue;}
        }
    }
    cout<<count;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int target, count=0;
    cin>>target;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
                if(v[i]+v[j]+v[k]==target){
                    cout<<v[i]<<v[j]<<v[k]<<endl;
                    count++;

                }
                else{continue;
                }
            }
        }
    }
    cout<<count;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> dup(2);
    int a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n && j!=i;j++){
            if(v[i]==v[j]){
                dup[a]=v[i];
                a++;
            }
            else{continue;}
        }
    }
    for(int i=0;i<a;i++){
        cout<<dup[i]<<" ";
    }
}
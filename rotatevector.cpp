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
    int rotate;
    cin>>rotate;
    for(int i=0;i<n;i++){
        if(i<rotate){
            int t;
            t=v[i];
            v[i]=v[-1-i];
            v[-1-i]=v[i];
        }
        else{continue;}
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}
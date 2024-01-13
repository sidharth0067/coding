#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(7);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int guard=1, unique;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size()&& j!=i;j++){
            if(v[i]!=v[j]){
                guard=1;
                unique=v[i];
            }
            else{guard=0;}
        }

    }
    cout<<unique;
}
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int result=1;
    for(int i=0;i<5;i++){
        if(v[i]>v[i-1]){
            continue;
        }
        else{result=0;}
    }
    cout<<result;
}

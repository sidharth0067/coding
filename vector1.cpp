#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int target, occurance=-1;
    cin>>target;

    for(int i=0;i<6;i++){
        if(v[i]==target){
            occurance=i;
        }
        else{
            continue;
        }
    }
    cout<<occurance<<endl;
    cout<<v.size();

}
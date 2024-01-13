#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int target, count=0;
    cin>>target;
    for(int i=0;i<6;i++){
        if(v[i]==target){
            count++;
        }
        else{continue;}
    }
    cout<<"the number of times "<<target<< " occured is "<< count<<endl;
}
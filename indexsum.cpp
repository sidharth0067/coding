#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    int sum1=0, sum2=0;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
        if(i%2==0){
            sum1=sum1+v[i];
        }
        else{
            sum2=sum2+v[i];
        }
    }
    int diff=sum1-sum2;
    cout<<diff;
}
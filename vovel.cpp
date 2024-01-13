#include<iostream>
#include<string>

using namespace std;

int main(){
    string vow = "aeiouAEIOU";
    string n;
    int count=0;
    cin>>n;
    for(int i=0;i<n.length();i++){
        for(int j=0;j<vow.length();j++){
            if(n[i]== vow[j]){
                count++;
            }
            else{continue;}
        }
    }
    cout<<" No. of vowels: "<<count;
}
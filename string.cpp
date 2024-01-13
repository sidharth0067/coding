#include<iostream>
#include<string>
#include<vector> 
using namespace std;

int main(){
 string str;
 getline(cin, str);
 string check ="";
 string sum;
 int n=str.length(); 
 for(int i=0;i<n;i++){
    if( str[i] != ' '){
        sum=sum+str[i];
    }
    else{if (sum.size()>check.size())
    {
        check=sum;
    }

    else{continue;}
    sum=" ";
    }
 }
     if (sum.size() > check.size()) {
        check = sum;
    }
    cout<<check;
}

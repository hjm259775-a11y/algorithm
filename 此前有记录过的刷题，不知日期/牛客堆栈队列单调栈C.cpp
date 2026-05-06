#include<bits/stdc++.h>
using namespace std;
int main(){
    string xgz;
    cin>>xgz;
    stack<char> myn;
    int panduan=0;
    for(char c:xgz){
        if(c=='a'){
            myn.push(c);
        }
        else{
            if(!myn.empty() && myn.top()=='a'){
                myn.pop();
            }
            else{
                panduan=1;
                break;
            }
        }
    }
    if(panduan==0 && myn.empty()){
        cout<<"Good";
    }
    else{
        cout<<"Bad";
    }
    return 0;
}
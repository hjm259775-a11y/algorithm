#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    
    while(cin>>q){
        stack<string> lishi;
        lishi.push("");
        while(q--){
        
        int t;
        cin>>t;
        if(t==1){
            string jia;
            cin>>jia;
            string jishiben=lishi.top();
            jishiben+=jia;
            lishi.push(jishiben);
        }
        else if(t==2){
            int k;
            cin>>k;
            string jishiben=lishi.top();
            jishiben.erase(jishiben.size()-k);
            lishi.push(jishiben);
        }
        else if(t==3){
            int kk;
            cin>>kk;
            cout<<lishi.top()[kk-1]<<endl;
        }
        else{
                lishi.pop();
        }
    }
    }
    return 0;
} 
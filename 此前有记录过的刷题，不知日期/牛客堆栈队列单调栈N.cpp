#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> xgz(n);
    for(int i=0;i<n;i++){
        cin>>xgz[i];
    }
    vector<int> right(n,0);
    stack<int> dandiao;
    for(int i=0;i<xgz.size();i++){
        while(!dandiao.empty() && xgz[i] > xgz[dandiao.top()]){
            right[dandiao.top()]=i+1;
            dandiao.pop();
        }
        dandiao.push(i);
    }
    for(int i;i<right.size();i++){
        cout<<right[i]<<endl;
    }
    return 0;
}
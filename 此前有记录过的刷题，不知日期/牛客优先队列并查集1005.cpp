#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> jianzhu(n);
    for(int i=0;i<n;i++){
        cin>>jianzhu[i].second>>jianzhu[i].first;
    }
    sort(jianzhu.begin(),jianzhu.end());
    priority_queue<long long,vector<long long>> dui;
    long long dangqian=0;
    long long zuida=0;
    for(int i=0;i<n;i++){
        dangqian+=jianzhu[i].second;
        dui.push(jianzhu[i].second);
        while(dangqian>jianzhu[i].first){
            dangqian-=dui.top();
            dui.pop();
        }
        
        
    }
    cout<<dui.size();
    return 0;
}
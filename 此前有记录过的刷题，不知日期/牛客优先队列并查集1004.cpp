#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> shibing(n);
    for(int i=0;i<n;i++){
        cin>>shibing[i].second>>shibing[i].first;
    }
    sort(shibing.begin(),shibing.end(),greater<pair<int,int>>());
    priority_queue<long long,vector<long long>,greater<long long>> dui;
    long long dangqian=0;
    long long zuida=0;
    for(int i=0;i<n;i++){
        dui.push(shibing[i].second);
        dangqian+=shibing[i].second;
        while(dui.size()>shibing[i].first){
            dangqian-=dui.top();
            dui.pop();
        }
        zuida=max(dangqian,zuida);
    }
    cout<<zuida;
    return 0;
}
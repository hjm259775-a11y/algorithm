#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,n;
    cin>>l>>n;
    vector<pair<int,int>> xgz;
    for(int i=0;i<n;i++){
        int kaishi,jieshu;
        cin>>kaishi>>jieshu;
        xgz.push_back({kaishi,jieshu});
    }
    sort(xgz.begin(),xgz.end());
    vector<pair<int,int>> hou;
    for(int i=0;i<xgz.size();i++){
        if(hou.empty() || xgz[i].first>hou.back().second){
            hou.push_back({xgz[i].first,xgz[i].second});
        }
        else{
            hou.back().second=max(hou.back().second , xgz[i].second);
        }
    }
    int shu=0;
    for(int i=0;i<hou.size();i++){
        shu+=hou[i].second-hou[i].first+1;
    }
    cout<<l-shu+1;
    return 0;
}
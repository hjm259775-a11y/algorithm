#include<bits/stdc++.h>
using namespace std;
int l,n,m;
vector<int> pos;
bool caozuo(int x){
    int shuliang=0;
    int dangqian_qidian=0;
    for(int i=0;i<n;i++){
        if(pos[i]-dangqian_qidian<x){
            shuliang++;
        }else{
            dangqian_qidian=pos[i];
        }
    }
    if(l-dangqian_qidian<x){
        return false;
    }
    if(shuliang<=m){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cin>>l>>n>>m;
    pos.resize(n);
    for(int i=0;i<n;i++){
        cin>>pos[i];
    }
    int left=1,right=l;
    int ans=0;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(caozuo(mid)){
            ans=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
long long m;
vector<long long> xgz;
bool caozuo(long long k){
    long long xuyao=0;
    for(int i=0;i<n;i++){
        if(xgz[i]<k){
            xuyao+=k-xgz[i];
            if(xuyao>m){
                return false;
            }
            if(xuyao>k){
                return false;
            }
        }
    }
    return xuyao<=min(m,k);
}

int main(){
    cin>>n>>m;
    xgz.resize(n);
    for(int i=0;i<n;i++){
        cin>>xgz[i];
    }
    long long zuida=0;
    for(int i=0;i<n;i++){
        cin>>xgz[i];
        if(xgz[i]>zuida){
            zuida=xgz[i];
        }
    }
    int l=0,r=m+zuida;
    int ans=0;
    while(l<=r){
        long mid=l+(r-l)/2;
        if(caozuo(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
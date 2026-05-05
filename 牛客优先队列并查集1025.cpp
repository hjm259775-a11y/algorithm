#include<bits/stdc++.h>
using namespace std;
int chazhao(vector<int>& xgz,int x){
    if(xgz[x]!=x){
        xgz[x]=chazhao(xgz,xgz[x]);
    }
    return xgz[x];
}
void hebing(vector<int>& xgz,int x,int y){
    int xx=chazhao(xgz,x);
    int yy=chazhao(xgz,y);
    if(xx!=yy){
        xgz[xx]=yy;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> xgz(n+1);
    for(int i=1;i<n+1;i++){
        xgz[i]=i;
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        hebing(xgz,x,y);
    }
    int geshu=0;
    for(int i=1;i<n+1;i++){
        if(xgz[i]==i){
            geshu++;
        }
    }
    cout<<geshu-1;
    return 0;
}
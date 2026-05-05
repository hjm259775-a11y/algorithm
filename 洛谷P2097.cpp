#include<bits/stdc++.h>
using namespace std;
int xunzhao(vector<int>& xgz,int x){
    if(xgz[x]!=x){
        xgz[x]=xunzhao(xgz,xgz[x]);
    }
    return xgz[x];
}
void hebing(vector<int>& xgz,int x,int y){
    int xx=xunzhao(xgz,x);
    int yy=xunzhao(xgz,y);
    if(xx!=yy){
        xgz[xx]=yy;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> xgz(n+1);
    for(int i=0;i<n;i++){
        xgz[i]=i;
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        hebing(xgz,x,y);
    }
    int geshu=0;
    for(int i=0;i<n;i++){
        if(xgz[i]==i){
            geshu++;
        }
    }
    cout<<geshu;
    return 0;
}
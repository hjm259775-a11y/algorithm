#include<bits/stdc++.h>
using namespace std;
int xunzhao(vector<int>& xgz,vector<int>& guanxi,int x){
    if(xgz[x]!=x){
        int linshi=xunzhao(xgz,guanxi,xgz[x]);
        guanxi[x]=(guanxi[x]+guanxi[xgz[x]])%3;
        xgz[x]=linshi;
    }
    return xgz[x];
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> xgz(n+1);
    vector<int> guanxi(n+1,0);
    for(int i=1;i<n+1;i++){
        xgz[i]=i;
    }
    int geshu=0;
    while(k--){
        int d,x,y;
        cin>>d>>x>>y;
        if(x>n||y>n){
            geshu++;
            continue;
        }
        if(d==2 && x==y){
            geshu++;
            continue;
        }
        int xx=xunzhao(xgz,guanxi,x);
        int yy=xunzhao(xgz,guanxi,y);
        
        if(xx!=yy){
            xgz[xx]=yy;
            if(d==1){
                guanxi[xx]=(guanxi[y]-guanxi[x]+3)%3;
            }
            else{
                guanxi[xx]=(guanxi[y]-guanxi[x]+4)%3;
            }
        }
        if(xx==yy){
            if(d==1){
                if(guanxi[x]!=guanxi[y]){
                    geshu++;
                }
            }
            else{
                if((guanxi[x]-guanxi[y]+3)%3!=1){
                    geshu++;
                }
            }
        }
    }
    cout<<geshu;
    return 0;
}
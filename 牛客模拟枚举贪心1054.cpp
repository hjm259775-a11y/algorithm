#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1005][1005];
    long long xgz[1005][1005];
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int j=1;j<=m;j++){
            a[i][j]=s[j-1]-'0';
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            xgz[i][j]=xgz[i-1][j]+xgz[i][j-1]-xgz[i-1][j-1]+a[i][j];
        }
    }
    long long ans=0;
    for(int i=1;i<=n-k+1;i++){
        for(int j=1;j<=m-k+1;j++){
            int x2=i+k-1;
            int y2=j+k-1;
            long long cnt=xgz[x2][y2]-xgz[i-1][y2]-xgz[x2][j-1]+xgz[i-1][j-1];
            if(cnt>0){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
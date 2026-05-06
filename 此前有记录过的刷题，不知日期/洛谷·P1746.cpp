#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> ditu(n+1);
    for(int i=0;i<n;i++){
            cin>>ditu[i];
    }
    int x11,y11,x22,y22;
    cin>>x11>>y11>>x22>>y22;
    int x1=x11-1;
    int y1=y11-1;
    int x2=x22-1;
    int y2=y22-1;
    vector<vector<int>> xgz(n,vector<int>(n,-1));
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    queue<pair<int,int>> q;
    q.push({x1,y1});
    xgz[x1][y1]=0;
    while(!q.empty()){
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            int xxx=xx+dx[k];
            int yyy=yy+dy[k];
            if(xxx>=0 && xxx<n && yyy>=0 && yyy<n && ditu[xxx][yyy]=='0' && xgz[xxx][yyy]==-1){
                q.push({xxx,yyy});
                xgz[xxx][yyy]=xgz[xx][yy]+1;
            }
        }
    }
    cout<<xgz[x2][y2];
    return 0;
}
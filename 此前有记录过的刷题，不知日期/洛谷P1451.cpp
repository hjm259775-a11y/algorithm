#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> xgz(n);
    for(int i=0;i<n;i++){
        cin>>xgz[i];
    }
    vector<vector<int>> biaoji(n,vector<int>(m,0));
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(xgz[i][j]!='0' && biaoji[i][j]==0){
                ans++;
                queue<pair<int,int>> q;
                q.push({i,j});
                biaoji[i][j]=1;
                while(!q.empty()){
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                    for(int k=0;k<4;k++){
                        int xx=x+dx[k];
                        int yy=y+dy[k];
                        if(xx>=0 && xx<n && yy>=0 && yy<m && biaoji[xx][yy]==0 && xgz[xx][yy]!='0'){
                            q.push({xx,yy});
                            biaoji[xx][yy]=1;
                        }
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
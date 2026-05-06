#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> xgz(n,vector<int>(n));
    vector<vector<int>> biaoji(n,vector<int>(n,0));
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>xgz[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(xgz[i][0]==0){
            queue<pair<int,int>> q;
            q.push({i,0});
            biaoji[i][0]=1;
            while(!q.empty()){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int xx=x+dx[k];
                    int yy=y+dy[k];
                    if(xx>=0 && xx<n && yy>=0 && yy<n && biaoji[xx][yy]==0 && xgz[xx][yy]==0){
                        q.push({xx,yy});
                        biaoji[xx][yy]=1;
                    }
                }
            }
        }
        if(xgz[i][n-1]==0){
            queue<pair<int,int>> q;
            q.push({i,n-1});
            biaoji[i][n-1]=1;
            while(!q.empty()){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int xx=x+dx[k];
                    int yy=y+dy[k];
                    if(xx>=0 && xx<n && yy>=0 && yy<n && biaoji[xx][yy]==0 && xgz[xx][yy]==0){
                        q.push({xx,yy});
                        biaoji[xx][yy]=1;
                    }
                }
            }
        }
    }
    for(int j=0;j<n;j++){
        if(xgz[0][j]==0){
            queue<pair<int,int>> q;
            q.push({0,j});
            biaoji[0][j]=1;
            while(!q.empty()){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int xx=x+dx[k];
                    int yy=y+dy[k];
                    if(xx>=0 && xx<n && yy>=0 && yy<n && biaoji[xx][yy]==0 && xgz[xx][yy]==0){
                        q.push({xx,yy});
                        biaoji[xx][yy]=1;
                    }
                }
            }
        }
        if(xgz[n-1][j]==0){
            queue<pair<int,int>> q;
            q.push({n-1,j});
            biaoji[n-1][j]=1;
            while(!q.empty()){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int xx=x+dx[k];
                    int yy=y+dy[k];
                    if(xx>=0 && xx<n && yy>=0 && yy<n && biaoji[xx][yy]==0 && xgz[xx][yy]==0){
                        q.push({xx,yy});
                        biaoji[xx][yy]=1;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(biaoji[i][j]==0 && xgz[i][j]==1){
                biaoji[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(biaoji[i][j]==0){
                xgz[i][j]=2;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<xgz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
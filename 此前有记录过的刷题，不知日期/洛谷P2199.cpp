#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int panduan=0;
    vector<string> xgz(n);
    for(int i=0;i<n;i++){
        cin>>xgz[i];
    }
    int bx[4]={0,1,0,-1};
    int by[4]={1,0,-1,0};
    
    int xx1,yy1,xx2,yy2;
    while(cin>>xx1>>yy1>>xx2>>yy2 && xx1!=0 && yy1!=0 && xx2!=0 && yy2!=0){
        vector<vector<bool>> zhongdian(n,vector<bool>(m,false));
        panduan=0;
        int x1=xx1-1;
        int y1=yy1-1;
        int x2=xx2-1;
        int y2=yy2-1;
        int dx[8]={-1,0,1,1,1,0,-1,-1};
        int dy[8]={1,1,1,0,-1,-1,-1,0};
        for(int k=0;k<8;k++){
            int X=x1+dx[k];
            int Y=y1+dy[k];
            while(X>=0 && X<n && Y>=0 && Y<m){
                if(xgz[X][Y]=='X'){
                    break;
                }
                zhongdian[X][Y]=true;
                X+=dx[k];
                Y+=dy[k];
            }
        }
        if(zhongdian[x2][y2]==true){
            cout<<"0"<<endl;
            continue;
        }
        if(xgz[x1][y1]=='O'){
            zhongdian[x1][y1]=true;
        }
        vector<vector<int>> bushu(n,vector<int>(m,-1));
        queue<pair<int,int>> q;
        q.push({x2,y2});
        bushu[x2][y2]=0;
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(zhongdian[x][y]==true){
                cout<<bushu[x][y]<<endl;
                panduan=1;
                break;
            }
            for(int k=0;k<4;k++){
                int xx=x+bx[k];
                int yy=y+by[k];
                if(xx>=0 && xx<n && yy>=0 && yy<m && bushu[xx][yy]==-1 && xgz[xx][yy]=='O'){
                    q.push({xx,yy});
                    bushu[xx][yy]=bushu[x][y]+1;
                }
            }
        }
        if(panduan==0){
            cout<<"Poor Harry"<<endl;
        }
    }
    return 0;
}
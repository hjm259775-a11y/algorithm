#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<string> ditu(r);
    for(int i=0;i<r;i++){
        cin>>ditu[i];
    }
    int n;
    cin>>n;
    vector<string> dir(n);
    for(int i=0;i<n;i++){
        cin>>dir[i];
    }
    vector<vector<bool>> cur(r,vector<bool>(c,false));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(ditu[i][j]=='*'){
                cur[i][j]=true;
                ditu[i][j]='.';
            }
        }
    }
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    for(int step=0;step<n;step++){
        vector<vector<bool>> nxt(r,vector<bool>(c,false));
        int d=-1;
        if(dir[step]=="NORTH"){
            d=0;
        } 
        else if(dir[step]=="SOUTH"){
            d=1;
        } 
        else if(dir[step]=="WEST"){
            d=2;
        } 
        else if(dir[step]=="EAST"){
            d=3;
        } 
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(cur[i][j]){
                    int x=i,y=j;
                    while(true){
                        int nx=x+dx[d];
                        int ny=y+dy[d];
                        if(nx<0||nx>=r||ny<0||ny>=c||ditu[nx][ny]=='X'){
                            break;
                        }
                        x=nx;
                        y=ny;
                        nxt[x][y]=true;
                    }
                }
            }
        }
        cur=nxt;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(cur[i][j]){
                cout<<'*';
            }
            else{
                cout<<ditu[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}
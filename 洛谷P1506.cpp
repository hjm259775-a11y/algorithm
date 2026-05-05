#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    vector<string> ditu(x);
    for(int i=0;i<x;i++){
        cin>>ditu[i];
    }
    int dx[4]={0,-1,0,1};
    int dy[4]={1,0,-1,0};
    for(int i=0;i<x;i++){
        if(ditu[i][0]=='0'){
            queue<pair<int,int>> qqq;
            qqq.push({i,0});
            ditu[i][0]='1';
            while(!qqq.empty()){
                int xx=qqq.front().first;
                int yy=qqq.front().second;
                qqq.pop();
                for(int k=0;k<4;k++){
                    int xxx=xx+dx[k];
                    int yyy=yy+dy[k];
                    if(xxx>=0 && xxx<x && yyy>=0 && yyy<y && ditu[xxx][yyy]=='0'){
                        ditu[xxx][yyy]='1';
                        qqq.push({xxx,yyy});
                    }
                }
            }
        }
        if(ditu[i][y-1]=='0'){
            queue<pair<int,int>> q;
            q.push({i,y-1});
            ditu[i][y-1]='1';
            while(!q.empty()){
                int xx=q.front().first;
                int yy=q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int xxx=xx+dx[k];
                    int yyy=yy+dy[k];
                    if(xxx>=0 && xxx<x && yyy>=0 && yyy<y && ditu[xxx][yyy]=='0'){
                        q.push({xxx,yyy});
                        ditu[xxx][yyy]='1';
                    }
                }
            }
        }
    }
    for(int j=0;j<y;j++){
            if(ditu[0][j]=='0'){
                queue<pair<int,int>> q;
                q.push({0,j});
                ditu[0][j]='1';
                while(!q.empty()){
                    int xx=q.front().first;
                    int yy=q.front().second;
                    q.pop();
                    for(int k=0;k<4;k++){
                        int xxx=xx+dx[k];
                        int yyy=yy+dy[k];
                        if(xxx>=0 && xxx<x && yyy>=0 && yyy<y && ditu[xxx][yyy]=='0'){
                            q.push({xxx,yyy});
                            ditu[xxx][yyy]='1';
                        }
                    }
                }
            }
            if(ditu[x-1][j]=='0'){
                queue<pair<int,int>> q;
                q.push({x-1,j});
                ditu[x-1][j]='1';
                while(!q.empty()){
                    int xx=q.front().first;
                    int yy=q.front().second;
                    q.pop();
                    for(int k=0;k<4;k++){
                        int xxx=xx+dx[k];
                        int yyy=yy+dy[k];
                        if(xxx>=0 && xxx<x && yyy>=0 && yyy<y && ditu[xxx][yyy]=='0'){
                            q.push({xxx,yyy});
                            ditu[xxx][yyy]='1';
                        }
                    }
                }
            }
        }

    
    int ans=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(ditu[i][j]=='0'){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> k(n+1);
    for(int i=1;i<=n;i++){
        cin>>k[i];
    }
    if(a==b){
        cout<<0;
        return 0;
    }
    vector<int> step(n+1,-1);
    queue<int> q;
    step[a]=0;
    q.push(a);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        int up=cur+k[cur];
        if(up<=n&&step[up]==-1){
            step[up]=step[cur]+1;
            if(up==b){
                cout<<step[up];
                return 0;
            }
            q.push(up);
        }
        int down=cur-k[cur];
        if(down>=1&&step[down]==-1){
            step[down]=step[cur]+1;
            if(down==b){
                cout<<step[down];
                return 0;
            }
            q.push(down);
        }
    }
    cout<<-1;
    return 0;
}
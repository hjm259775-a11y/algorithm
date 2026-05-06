#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    vector<vector<int>> ditu(5001,vector<int>(5001,0));
    while(n--){
        int x,y,v;
        cin>>x>>y>>v;
        ditu[x][y]+=v;
    }
    int jiazhi=0;
    vector<vector<int>> qianzhuihe(5002,vector<int>(5002));
    for(int i=0;i<5001;i++){
        for(int j=0;j<5001;j++){
            if(i==0||j==0){
                qianzhuihe[i][j]=0;
            }
        }
    }
    qianzhuihe[0][0]=ditu[0][0];
    for(int i=1;i<5001;i++){
        for(int j=1;j<5001;j++){
            qianzhuihe[i][j]=qianzhuihe[i-1][j]+qianzhuihe[i][j-1]-qianzhuihe[i-1][j-1]+ditu[i-1][j-1];
        }
    }
    for(int i=1;i<5001;i++){
        for(int j=1;j<5001;j++){
            if(i-r>=0&&j-r>=0){
                int dangqian=qianzhuihe[i][j]-qianzhuihe[i-r][j]-qianzhuihe[i][j-r]+qianzhuihe[i-r][j-r];
                jiazhi=max(jiazhi,dangqian);
            }
        }
    }
    cout<<jiazhi;
    return 0;
}
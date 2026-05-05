#include<bits/stdc++.h>
using namespace std;
string xgz;
int n;
char dfs(int left,int right){
    char benci;
    if(left==right){
        if(xgz[left]=='0'){
            benci='B';
            cout<<benci;
            return benci;
        }
        else{
            benci='I';
            cout<<benci;
            return benci;
        }
    }
    int mid=(left+right)/2;
    char zuozhi=dfs(left,mid);
    char youzhi=dfs(mid+1,right);
    if(zuozhi==youzhi){
        benci=zuozhi;
    }
    else{
        benci='F';
    }
    cout<<benci;
    return benci;
    
};

int main(){
    cin>>n>>xgz;
    dfs(0,(1<<n)-1);
    return 0;
}
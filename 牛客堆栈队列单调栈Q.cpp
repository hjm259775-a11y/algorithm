#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> kuan(n);
    vector<long long> gao(n);
    vector<long long> right(n,n);
    vector<long long> left(n,-1);
    for(int i=0;i<n;i++){
        cin>>kuan[i];
    }
    for(int i=0;i<n;i++){
        cin>>gao[i];
    }
    vector<long long> qianzhuihe(n+1);
    qianzhuihe[0]=0;
    for(int i=1;i<=n;i++){
        qianzhuihe[i]=qianzhuihe[i-1]+kuan[i-1];
    }
    stack<long long> zhan1;
    stack<long long> zhan2;
    for(int i=0;i<n;i++){
        while(!zhan1.empty() && gao[i]<gao[zhan1.top()]){
            right[zhan1.top()]=i;
            zhan1.pop();
        }
        zhan1.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!zhan2.empty() && gao[i]<gao[zhan2.top()]){
            left[zhan2.top()]=i;
            zhan2.pop();
        }
        zhan2.push(i);
    }
    vector<long long> mianji(n);
    for(int i=0;i<n;i++){
        mianji[i]=(qianzhuihe[right[i]]-qianzhuihe[left[i]+1])*gao[i];
    }
    sort(mianji.begin(),mianji.end());
    cout<<mianji[n-1];
    return 0;
}
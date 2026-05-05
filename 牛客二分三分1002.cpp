#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> shuzu(n);
    for(int i=0;i<n;i++){
        cin>>shuzu[i];
    }
    vector<int> qianzhuihe(n+1);
    qianzhuihe[0]=0;
    for(int i=1;i<=n;i++){
        qianzhuihe[i]=qianzhuihe[i-1]+shuzu[i-1];
    }
    while(q--){
        int t;
        cin>>t;
        auto xgz=upper_bound(qianzhuihe.begin(),qianzhuihe.end(),t);
        int pos=xgz-qianzhuihe.begin();
        cout<<pos<<endl;
    }
    return 0;
}
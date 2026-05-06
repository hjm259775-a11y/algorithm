#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<long long,vector<long long>,greater<long long>> xgz;
    for(int i=0;i<n;i++){
        long long dangqian;
        cin>>dangqian;
        xgz.push(dangqian);
    }
    int zongshu=0;
    while(xgz.size()>1){
        int a=xgz.top();
        xgz.pop();
        int b=xgz.top();
        xgz.pop();
        zongshu+=(a+b);
        xgz.push(a+b);
    }
    cout<<zongshu;
    return 0;
}
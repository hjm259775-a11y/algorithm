#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> xgz(n);
    for(int i=0;i<n;i++){
        cin>>xgz[i];
    }
    sort(xgz.begin(),xgz.end());
    long long maxx=0;
    for(int i=0;i<n-1;i++){
        maxx+=xgz[i]*(i+1);
    }
    maxx+=xgz[n-1]*(n-1);
    cout<<maxx;
    return 0;
}
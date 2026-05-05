#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int>weizhi(n);
    for(int i=0;i<n;i++){
        cin>>weizhi[i];
    }
    sort(weizhi.begin(),weizhi.end());
    long long daan=0;
    int you=0;
    for(int zuo=0;zuo<n;zuo++){
        while(you<n && weizhi[you]-weizhi[zuo]<=d){
            you++;
        }
        daan+=(you-zuo-1);
    }
    cout<<daan<<endl;
    return 0;
}
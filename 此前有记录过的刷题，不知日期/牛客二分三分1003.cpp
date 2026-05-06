#include<bits/stdc++.h>
using namespace std;
int n,d;
vector<long long> xgz;
bool panduan(long long kuaile,vector<int>& chi_day){
    long long he=0;
    int gezi=0;
    for(int day=1;day<=d;++day){
        while(he<kuaile){
            if(gezi==n){
                return false;
            }
            he+=xgz[gezi];
            chi_day[gezi]=day;
            gezi++;
        }
        he/=2;
    }
    while(gezi<n){
        chi_day[gezi]=d;
        gezi++;
    }
    return true;
}
int main(){
    cin>>n>>d;
    xgz.resize(n);
    for(int i=0;i<n;++i){
        cin>>xgz[i];
    }
    long long left=0,right=1e18;
    vector<int> zui_chi_day(n,d);
    while(left<=right){
        long long mid=left+(right-left)/2;
        vector<int> dangqian_eat_day(n,d);
        if(panduan(mid,dangqian_eat_day)){
            zui_chi_day=dangqian_eat_day;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    cout<<right<<endl;
    for(int i=0;i<n;++i){
        cout<<zui_chi_day[i]<<"\n";
    }
    return 0;
}
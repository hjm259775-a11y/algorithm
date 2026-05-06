#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int myn[100010];
        for(int i=0;i<=100000;i++){
            myn[i]=i;
        }
    while(n--){
        int l,r;
        cin>>l>>r;
        
        int zuo=lower_bound(myn,myn+100000,sqrt(l))-myn;
        int you=upper_bound(myn,myn+100000,sqrt(r))-myn;
        cout<<you-zuo<<endl;
    }
    return 0;
}
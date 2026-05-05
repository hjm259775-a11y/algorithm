#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int h[N];
int cnt[N];
int main(){
    int n;
    int x;
    int c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>h[i];
        for(int j=1;j*j<=h[i];j++){
            if(h[i]%j==0){
                cnt[j]++;
                if(j*j!=h[i]){
                    cnt[h[i]/j]++;
                }
            }
        }
    }
    for(int i=N-5;i>=1;i--)
    {
        if(cnt[i]>=3){
            x=i;
            break;
        }
    }
    sort(h+1,h+n+1);
    for(int i=1;i<=n;i++){
        if(h[i]%x==0){
            cout<<h[i]<<" ";
            c++;
        }
        if(c==3){
            return 0;
        }
    }
    return 0;
}
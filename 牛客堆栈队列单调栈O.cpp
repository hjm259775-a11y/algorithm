#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n && n!=0){
        vector<long long> gao(n);
        for(int i=0;i<n;i++){
            cin>>gao[i];
        }
        
        vector<int> left(n,-1);
        vector<int> right(n,n);
        stack<int> zhan1;
        for(int i=0;i<n;i++){
            while(!zhan1.empty() && gao[i]<gao[zhan1.top()]){
                right[zhan1.top()]=i;
                zhan1.pop();
            }
            zhan1.push(i);
        }
        stack<int> zhan2;
        for(int i=n-1;i>=0;i--){
            while(!zhan2.empty() && gao[i]<gao[zhan2.top()]){
                left[zhan2.top()]=i;
                zhan2.pop();
            }
            zhan2.push(i);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            long long kuandu = right[i]-left[i]-1;
            long long mianji = kuandu * gao[i];
            if(mianji > ans){
                ans = mianji;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> xgz(n);
        for(int i=0;i<n;i++){
            cin>>xgz[i];
        }
        vector<int> right(n,n);
        vector<int> left(n,-1);
        stack<int> zhan;
        for(int i=0;i<n;i++){
        while(!zhan.empty() && xgz[i]<=xgz[zhan.top()]){
            right[zhan.top()]=i;
            zhan.pop();
        }
        zhan.push(i);
        }
        while(!zhan.empty()){
            zhan.pop();
        }
    for(int i=n-1;i>=0;i--){
        while(!zhan.empty() && xgz[i]<xgz[zhan.top()]){
            left[zhan.top()]=i;
            zhan.pop();
        }
        zhan.push(i);
    }
        while(!zhan.empty()){
            zhan.pop();
        }
        vector<long long> mi(n);
        long long minn=0;
        for(int i=0;i<n;i++){
            mi[i]=((long long)(right[i]-i)*(i-left[i])-1)*xgz[i];
            minn+=mi[i];
        }
        vector<int> left_max(n,-1);
        vector<int> right_max(n,n);
        stack<int> zhan1;
        for(int i=0;i<n;i++){
        while(!zhan1.empty() && xgz[i]>=xgz[zhan1.top()]){
            right_max[zhan1.top()]=i;
            zhan1.pop();
        }
        zhan1.push(i);
        }
        while(!zhan1.empty()){
            zhan1.pop();
        }
    for(int i=n-1;i>=0;i--){
        while(!zhan1.empty() && xgz[i]>xgz[zhan1.top()]){
            left_max[zhan1.top()]=i;
            zhan1.pop();
        }
        zhan1.push(i);
    }
        while(!zhan1.empty()){
            zhan1.pop();
        }
        
        vector<long long> ma(n);
        long long maxx=0;
        for(int i=0;i<n;i++){
            ma[i]=((long long)(right_max[i]-i)*(i-left_max[i])-1)*xgz[i];
            maxx+=ma[i];
        }
        cout<<maxx-minn<<endl;
    }
    return 0;
}
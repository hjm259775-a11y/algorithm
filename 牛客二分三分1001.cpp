#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> shuzu(n);
    for(int i=0;i<n;i++){
        cin>>shuzu[i];
    }
    sort(shuzu.begin(),shuzu.end());
    while(q--){
        int l,r;
        cin>>l>>r;
        auto left_pos=lower_bound(shuzu.begin(),shuzu.end(),l);
        auto right_pos=upper_bound(shuzu.begin(),shuzu.end(),r);
        int left=left_pos-shuzu.begin();
        int right=right_pos-shuzu.begin();
        right--;
        cout<<right-left+1<<endl;
    }
    return 0;
}
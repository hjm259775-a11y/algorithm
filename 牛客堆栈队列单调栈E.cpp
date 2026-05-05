#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string xgz;
        cin>>xgz;
        stack<int> zhan;
        for(int i=0;i<xgz.size();i++){
            zhan.push(xgz[i]);
            while(zhan.size()>=2){
                char a=zhan.top();
                zhan.pop();
                char b=zhan.top();
                zhan.pop();
                if(a=='o' && b=='o'){
                    zhan.push('O');
                }
                else if(a=='O' && b=='O'){
                    
                }
                else {
                    zhan.push(b);
                    zhan.push(a);
                    break;
                }
            }
        }
        string myn;
        while(!zhan.empty()){
            myn+=zhan.top();
            zhan.pop();
        }
        reverse(myn.begin(),myn.end());
        cout<<myn<<endl;
    }
    return 0;
}
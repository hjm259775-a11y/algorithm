#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    while(cin>>q && q!=0){
        vector<int> yaoqiu(q);
        stack<int> zhan;
        while(cin>>yaoqiu[0] && yaoqiu[0]!=0){
            for(int i=1;i<q;i++){
                cin>>yaoqiu[i];
            }
            int panduan=0;
            int dangqian=1;
            for(int i=0;i<q;i++){
                while(dangqian<=q && (zhan.empty() || zhan.top()!=yaoqiu[i])){
                    zhan.push(dangqian);
                    dangqian++;
                }
                if(!zhan.empty() && zhan.top()==yaoqiu[i]){
                    zhan.pop();
                }
                else{
                    panduan=1;
                    break;
                }
            }
            if(panduan==1){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
            while(!zhan.empty()){
                zhan.pop();
            }
        }
        cout<<endl;
    }
    return 0;
}
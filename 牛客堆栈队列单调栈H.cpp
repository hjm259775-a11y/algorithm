#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    while(cin>>q && q!=0){
        vector<int> huoche(q);
        stack<int> zhan;
        while(cin>>huoche[0] && huoche[0]!=0){
            for(int i=1;i<q;i++){
                cin>>huoche[i];
            }
            int dangqian=1;
            int panduan=0;
            for(int i=0;i<q;i++){
                zhan.push(huoche[i]);
                while(dangqian<=q && (zhan.empty() || zhan.top()!=huoche[i])){
                    zhan.push(dangqian);
                    dangqian++;
                }
                if(!zhan.empty() && zhan.top()==huoche[i]){
                    zhan.pop();
                }
                else{
                    panduan=1;
                }
            }
            if(panduan==1){
                cout
            }
        }
    }
    return 0;
}
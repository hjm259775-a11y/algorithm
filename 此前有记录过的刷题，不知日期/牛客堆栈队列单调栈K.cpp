#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    deque<int> shuang;
    while(m--){
        int caozuo;
        cin>>caozuo;
        int shu;
        
        if(caozuo==1 ||caozuo==3){
            cin>>shu;
        }
        if(caozuo==1){
            shuang.push_front(shu);
        }
        else if(caozuo==3){
            shuang.push_back(shu);
        }
        else if(caozuo==2){
            shuang.pop_front();
        }
        else if(caozuo==4){
            shuang.pop_back();
        }
        else if(caozuo==5){
            reverse(shuang.begin(),shuang.end());
        }
        else if(caozuo==7){
            sort(shuang.begin(),shuang.end());
        }
        else{
            cout<<shuang.size()<<endl;
            deque<int> baocun=shuang;
            while(!baocun.empty()){
                
                cout<<baocun.front()<<" ";
                baocun.pop_front();
            }
            cout<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> xian;
vector<int> zhong;
vector<int> hou;
unordered_map<int,int> houxu_weizhi;
void caozuo(int xian_zuo,int xian_you,int hou_zuo,int hou_you){
    if(xian_zuo>xian_you){
        return;
    }
    if(xian_zuo==xian_you){
        zhong.push_back(xian[xian_zuo]);
        return;
    }
    int gen=xian[xian_zuo];
    int zuogen=xian[xian_zuo+1];
    int zuozuzhang_weizhi=houxu_weizhi[zuogen];
    int zuorenshu=zuozuzhang_weizhi-hou_zuo+1;
    caozuo(xian_zuo+1,xian_zuo+zuorenshu,hou_zuo,zuozuzhang_weizhi);
    zhong.push_back(gen);
    caozuo(xian_zuo+zuorenshu+1,xian_you,zuozuzhang_weizhi+1,hou_you-1);
    
    
};


int main(){
    int n;
    cin>>n;

    xian.resize(n);
    hou.resize(n);
    for(int i=0;i<n;i++){
        cin>>xian[i];
    }
    for(int i=0;i<n;i++){
        cin>>hou[i];
        houxu_weizhi[hou[i]]=i;
    }
    caozuo(0,n-1,0,n-1);
    for(int i=0;i<n;i++){
        cout<<zhong[i]<<" ";
    }
    
    return 0;
}
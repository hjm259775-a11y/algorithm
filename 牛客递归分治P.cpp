#include<bits/stdc++.h>
using namespace std;
string pro,in,post;
unordered_map<char,int> in_weizhi;

void formula(int in_left,int in_right,int post_left,int post_right){
      if(in_left>in_right){
          return;
      }
    char gen=post[post_right];
    int key=in_weizhi[gen];
    pro.push_back(gen);
    int fenge=key-in_left;
    formula(in_left,key-1,post_left,post_left+fenge-1);
    formula(key+1,in_right,post_left+fenge,post_right-1);
};
int main(){
    cin>>in;
    cin>>post;
    int size=in.size();
    for(int i=0;i<size;i++){
        in_weizhi[in[i]]=i;
    }
    formula(0,size-1,0,size-1);
    cout<<pro;
    
    return 0;
}

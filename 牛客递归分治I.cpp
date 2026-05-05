#include<bits/stdc++.h>
using namespace std;
struct xuanshou{
    int id;
    int score;
};
bool caozuo(xuanshou a,xuanshou b){
    if(a.score!=b.score)return a.score>b.score;
    return a.id<b.id;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<xuanshou> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].id>>arr[i].score;
    }
    sort(arr.begin(),arr.end(),caozuo);
    int xianshu=int(m*1.5);
    int fenshuxian=arr[xianshu-1].score;
    int renshu=0;
    for(int i=0;i<n;i++){
        if(arr[i].score>=fenshuxian){
            renshu++;
        }
        else{
            break;
        }
    }
    cout<<fenshuxian<<" "<<renshu<<endl;
    for(int i=0;i<renshu;i++){
        cout<<arr[i].id<<" "<<arr[i].score<<endl;
    }
    return 0;
}
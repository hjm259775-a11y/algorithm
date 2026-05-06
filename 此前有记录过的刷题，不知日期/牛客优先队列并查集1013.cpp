#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a={1,2,3,4,5,6,7,8};
    do{
        for(int i=0;i<8;i++){
            cout<<a[i];
            if(i<7){
                cout<<' ';
            }
        }
        cout<<endl;
    }while(next_permutation(a.begin(),a.end()));
    return 0;
}
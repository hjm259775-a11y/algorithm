#include<bits/stdc++.h>
using namespace std;
int main(){
    double s,a,b;
    cin>>s>>a>>b;
    double time=s*(a+3*b)/(b*(3*a+b));
    printf("%.6f\n",time);
    return 0;
}
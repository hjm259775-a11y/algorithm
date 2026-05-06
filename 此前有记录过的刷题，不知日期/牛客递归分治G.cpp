#include<bits/stdc++.h>
using namespace std;
long long gongshi(long long a,long long b){
    long long jieguo=1;
        while(b){
                if(b&1){
                    jieguo*=a;
                }
                a*=a;
                b>>=1;
        }
        return jieguo;
}
int youxianji(char fuhao){
    if(fuhao=='+'||fuhao=='-')return 1;
    if(fuhao=='*'||fuhao=='/')return 2;
    if(fuhao=='^')return 3;
        return 0;
}
long long jisuan(long long a,long long b,char fuhao){
    if(fuhao=='+')return a+b;
    if(fuhao=='-')return a-b;
    if(fuhao=='*')return a*b;
    if(fuhao=='/')return a/b;
    if(fuhao=='^')return gongshi(a,b);
    return 0;
}
int main(){
    string s;
    cin>>s;
    stack<long long> shuzi;
    stack<char> fuhao;
    for(int i=0;i<s.size();i++){
                if(isdigit(s[i])){
                        long long shu=0;
                        while(i<s.size()&&isdigit(s[i])){
                                shu=shu*10+(s[i]-'0');
                                i++;
                        }
                        shuzi.push(shu);
                        i--;
            }
            else if(s[i]=='('){
                    fuhao.push('(');
                }
                else if(s[i]==')'){
                    while(!fuhao.empty()&&fuhao.top()!='('){
                            char c=fuhao.top();fuhao.pop();
                            long long b=shuzi.top();shuzi.pop();
                                long long a=shuzi.top();shuzi.pop();
                                shuzi.push(jisuan(a,b,c));
                        }
                        fuhao.pop();
                }
                else{
                    while(!fuhao.empty()&&youxianji(fuhao.top())>=youxianji(s[i])){
                            char c=fuhao.top();fuhao.pop();
                            long long b=shuzi.top();shuzi.pop();
                            long long a=shuzi.top();shuzi.pop();
                            shuzi.push(jisuan(a,b,c));
                        }
                    fuhao.push(s[i]);
                }
        }
        while(!fuhao.empty()){
            char c=fuhao.top();fuhao.pop();
            long long b=shuzi.top();shuzi.pop();
            long long a=shuzi.top();shuzi.pop();
            shuzi.push(jisuan(a,b,c));
        }
        cout<<shuzi.top()<<endl;
        return 0;
}
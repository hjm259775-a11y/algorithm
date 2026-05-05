class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 给定一个后缀表达式，返回它的结果
     * @param str string字符串 
     * @return long长整型
     */
    long long legalExp(string str) {
        stack<long long> st;
        int i=0;
        int n=str.size();
        for(;i<n;){
            if(str[i]>='0' && str[i]<='9'){
                long long num=0;
                while(i<n && str[i]!='#'){
                    num=num*10+(str[i]-'0');
                    i++;
                }
                st.push(num);
                i++;
            }
            else if(str[i]=='+' || str[i]=='-' || str[i]=='*'){
                long long b=st.top();
                st.pop();
                long long a=st.top();
                st.pop();
                if(str[i]=='+'){
                    st.push(a+b);
                }
                else if(str[i]=='-'){
                    st.push(a-b);
                }
                else{
                    st.push(a*b);
                }
                i++;
            }
        }
        return st.top();
    }
};
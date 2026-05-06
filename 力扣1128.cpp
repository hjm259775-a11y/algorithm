class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dom) {
        map<int,int> xgz;
        int ans=0;
        for(int i=0;i<dom.size();i++)
        {
            int a=dom[i][0];
            int b=dom[i][1];
            if(b<a)
            {
                int c=a;
                a=b;
                b=c;
            }
            int jilu=a*10+b;

            if(xgz[jilu]>0)
            {
                ans+=xgz[jilu];
            }


            xgz[jilu]++;


            
        }

        return ans;
    }
};
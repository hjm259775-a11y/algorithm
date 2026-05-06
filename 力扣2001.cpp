class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rec) {
        map<double,long long> xgz;
        long long ans=0;
        for(int i=0;i<rec.size();i++)
        {
            double a=rec[i][0];
            double b=rec[i][1];
            double jilu=a/b;
            if(xgz[jilu]>0)
            {
                ans+=xgz[jilu];
            }

            xgz[jilu]++;
        }
        return ans;
    }
};
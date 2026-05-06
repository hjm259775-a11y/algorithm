class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> xgz;
        for(int i=0;i<nums.size();i++)
        {
            if(xgz.count(nums[i]) && abs(i-xgz[nums[i]])<=k)
            {
                return true;
            }
            xgz[nums[i]]=i;
        }
        return false;
    }
};
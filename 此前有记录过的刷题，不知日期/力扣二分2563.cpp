class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long geshu=0;
        for(int j=0;j<nums.size();j++){
            auto l=lower_bound(nums.begin(),nums.begin()+j,lower-nums[j]);
            auto r=upper_bound(nums.begin(),nums.begin()+j,upper-nums[j]);
            geshu+=(r-l);
        }
        return geshu;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> haxi;
        for(int i=0;i<nums.size();i++){
            auto weizhi=haxi.find(target-nums[i]);
            if(weizhi!=haxi.end()){
                int shu=weizhi->second;
                return {shu,i};
            }
            haxi[nums[i]]=i;
        }
        return {};
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto erfen=lower_bound(nums.begin(),nums.end(),target);
        if(erfen!=nums.end() && nums[erfen-nums.begin()]==target){
            return erfen-nums.begin();
        }
        else{
            return -1;
        }
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> haxi;
        for(int i=0;i<nums.size();i++){
            haxi[nums[i]]++;
        }
        int i = 0;
        for(const auto & tmp : haxi)
        {
            nums[i++] = tmp.first;
        }

        return i;
    }
};
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int juli=0;
        int n=arrays.size();
        int mi=arrays[0][0];
        int ma=arrays[0][arrays[0].size()-1];
        for(int i=1;i<arrays.size();i++){
            juli=max(juli,max(ma-arrays[i][0],arrays[i][arrays[i].size()-1]-mi));
            mi=min(mi,arrays[i][0]);
            ma=max(ma,arrays[i][arrays[i].size()-1]);
        }
        return juli;
    }
};
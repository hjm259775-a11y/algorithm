class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int geshu=0;
        for(int i=0;i<arr1.size();i++){
            auto it=upper_bound(arr2.begin(),arr2.end(),arr1[i]);
            int weizhi=it-arr2.begin();
            int panduan=0;
            if(weizhi<arr2.size()){
                if(abs(arr2[weizhi]-arr1[i])<=d){
                    panduan=1;
                }
            }
            if(weizhi>0){
                if(abs(arr2[weizhi-1]-arr1[i])<=d){
                    panduan=1;
                }
            }
            if(panduan==0){
                geshu++;
            }


        }
        return geshu;
    }
};
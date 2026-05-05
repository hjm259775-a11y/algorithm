class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> xgz(n);
        for(int i=0;i<n;i++){
            xgz[i]=start+2*i;
        }
        int hhh=0;
        for(int i=0;i<n;i++){
            hhh^=xgz[i];
        }
        return hhh;
    }
};
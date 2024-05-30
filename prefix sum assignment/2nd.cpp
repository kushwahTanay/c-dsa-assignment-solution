class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int n = nums.size();

        // handle edge case
        if(n==0) return -1;

        vector<int>pre(n+1);
        vector<int>suf(n+1);
        
        pre[0] = 0;
        for(int i=0; i<n; i++){
            pre[i+1] =  pre[i] + nums[i];
        }

        suf[n] = 0;
        for(int i=n-1; i>=0; i--){
            suf[i] = nums[i]+suf[i+1];
        }

        for(int i=0; i<n; i++){
            if(pre[i]==suf[i+1]) return i;
        }
     
        return -1;
    }
};
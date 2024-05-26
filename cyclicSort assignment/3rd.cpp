class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n){
            if(nums[i]>n || nums[i]==i+1 || nums[i]==nums[nums[i]-1]) i++;
            else swap(nums[i],nums[nums[i]-1]);
        }
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(nums[i] != i+1) ans.push_back(nums[i]);
        }
        return ans;
    }
};
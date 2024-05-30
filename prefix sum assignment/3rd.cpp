class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        long long n = nums.size();
        vector<long long>Pmax,Conver,Score;

        long long max = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]>max) max = nums[i];
            Pmax.push_back(max);
        }

        for(int i=0; i<n; i++){
            // conver[i] = nums[i]+ max(arr[0...i]) which is Pmax;
            Conver.push_back(nums[i] + Pmax[i]);
        }
      
        // Score = sum of the values of conver arr;

        long long tempScore = 0;
        for(int i=0; i<n; i++){
            tempScore += Conver[i];
            Score.push_back(tempScore);
        }

        return Score;


    }
};
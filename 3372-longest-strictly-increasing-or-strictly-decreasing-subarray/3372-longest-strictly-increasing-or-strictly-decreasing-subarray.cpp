class Solution {
public:
    int solve(vector<int>& nums) {
        int mx = 1;
        int count = 1;
        for(int i = 0; i < nums.size()-1;i++){
            if(nums[i+1] > nums[i]) count++;
            else{
                mx= max(mx, count);
                count = 1;
            }
        }
        return max(mx, count);
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int ans = solve(nums);
        reverse(nums.begin(), nums.end());
        
        return max(ans, solve(nums));
    
    }
};
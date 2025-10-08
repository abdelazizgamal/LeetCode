class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffled(nums.size());
        int j = 0;
        for(int i = 0; i < n; i++){
            shuffled[j]   = nums[i] ;
            j++;
            shuffled[j] = nums[i + n];
            j++;
        }
        return shuffled;


        // for(int i = 0; i < nums.size()/2; i ++) swap(nums[i],nums[i+n]);
        // return nums;
    }
};
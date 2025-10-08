class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = -1;
        for(int i = 0; i < candies.size(); i++){
            if(max < candies[i]) max = candies[i];
        }

        vector<bool> arr(candies.size());
        for(int i = 0; i < arr.size(); i++){
            if(candies[i] + extraCandies >= max) arr[i] = true;
            else arr[i] = false;
        }
        return arr;
    }
};
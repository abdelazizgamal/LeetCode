class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans[501] = {0};
        int n = arr.size();
        
        for(int i = n-1; i >= 0 ;i--){
            ans[arr[i]] +=1;     
        }
        
        int maxLucky = -1;
        for (int i = 1; i <= 500; ++i) {
            if (ans[i] == i) {
                maxLucky = max(maxLucky, i);
            }
        }
        return maxLucky;
    }
};
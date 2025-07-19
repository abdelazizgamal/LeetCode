class Solution {
public:
    bool isPowerOfTwo(int n) {
        long sum = 1;
        for(int i = 0; i < 32; i++){
            if (n == sum) return 1;
            else sum *= 2;
        }
        return 0;
    }
};
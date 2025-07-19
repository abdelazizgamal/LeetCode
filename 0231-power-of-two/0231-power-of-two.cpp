class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = 0;
        if (n < 0) return 0;
        for (int i = 31; i >= 0; --i) {
            if (flag == 1 and ((n >> i) & 1) == 1) return 0;
            if (((n >> i) & 1) == 1)flag = 1; 
        }
        return flag;
    }
};
class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = 0;
        for (int i = 30; i >= 0; --i) {
            if (((n >> 31) & 1) == 0){
                if (flag == 1 and ((n >> i) & 1) == 1) return 0;
                if (((n >> i) & 1) == 1)flag = !flag;

            } 
            
        }
        return flag;
    }
};
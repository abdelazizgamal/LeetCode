class Solution {
public:
    bool isPowerOfTwo(int n) {
        vector<int> vec(32,0) ;
        long sum = 1;
        /*for(int i = 0; i < vec.size(); i++){
            vec[i] = sum;
            if (i == 31) sum  = sum * 2  - 1;
            else sum *= 2;
            cout <<i<<":"<< vec[i] << " ";
        } */
        for(int i = 0; i < 32; i++){
            if (n == sum) return 1;
            else sum *= 2;
        }
        return 0;
    }
};
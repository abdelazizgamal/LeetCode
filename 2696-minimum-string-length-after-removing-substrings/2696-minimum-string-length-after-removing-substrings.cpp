class Solution {
public:
    int minLength(string s) {


        int last = 0;
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'B'  && last && s[last-1] == 'A') {
                last--;
            }
            else if (s[i] == 'D'  && last && s[last-1] == 'C') {
               last--;
            }

            else{
                s[last] = s[i] ;
                last++;
                }
        }
        return last;
    }
};
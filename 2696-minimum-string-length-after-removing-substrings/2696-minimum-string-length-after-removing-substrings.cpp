class Solution {
public:
    int minLength(string s) {

        s.push_back('*');
        int n = s.size();
        for (int i = 0; i < n; i++) {

            if (s[i] == 'B'  && s.back() == 'A') {
                s.pop_back();
            }
            else if (s[i] == 'D'  && s.back() == 'C') {
                s.pop_back();
            }

            else
                s.push_back(s[i]);
        }
        return s.size() - n - 1;
    }
};
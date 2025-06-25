class Solution {
public:
    int minLength(string s) {

        vector<char> ans ;
        for(int i = 0; i < s.size(); i++){
            
            if (s[i] == 'B' && ans.size() &&ans[ans.size()-1] == 'A') {
                ans.pop_back();
            }
            else if (s[i] == 'D'&& ans.size() && ans[ans.size()-1] == 'C'){
                ans.pop_back();
            }
            
            else ans.push_back(s[i]);
        }
        return ans.size();
    }
};
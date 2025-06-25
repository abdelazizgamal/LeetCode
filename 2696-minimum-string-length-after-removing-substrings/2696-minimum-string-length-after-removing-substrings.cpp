class Solution {
public:
    int minLength(string s) {

        vector<char> ans ;
        for(int i = 0; i < s.size(); i++){
            if(ans.size()> 0 ){
                if (s[i] == 'B' && ans[ans.size()-1] == 'A') {
                    ans.pop_back();
                    continue;
                }
                else if (s[i] == 'D' && ans[ans.size()-1] == 'C'){
                    ans.pop_back();
                    continue;
                }
            }
            ans.push_back(s[i]);
        }
        return ans.size();
    }
};
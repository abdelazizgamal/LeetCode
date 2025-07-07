class Solution {
public:

    int solve (string &s, string remove, int n){
        int score = 0;
        vector<char> stk;
        
        for(int i = 0; i < s.size(); i++){
            if(!stk.empty() && stk.back() == remove[0] && s[i] == remove[1]){
                score +=n;
                stk.pop_back();
            }
            else stk.push_back(s[i]);
        }
        s = string(stk.begin(), stk.end());
        return score;
    }
    int maximumGain(string s, int x, int y) {
        string max, min;
        
        int mx , mn, score = 0;
        if(x > y) {
            max= "ab", min = "ba";
            mx = x, mn = y;
        }
        else{
             max= "ba" , min = "ab";
             mx = y, mn = x;
        }
        score += solve(s,max,mx);
        score += solve(s,min,mn);
        
       
        return score;
    }
};
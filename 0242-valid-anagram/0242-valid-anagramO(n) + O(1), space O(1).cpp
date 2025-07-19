class Solution {
public:
    bool isAnagram(string s, string t) {
        short Arr[26] = {0};
        if(s.size() == t.size()){
            for(int i = 0; i < s.size(); i++){
                Arr[s[i]-'a'] += 1;
                Arr[t[i]-'a'] -= 1;
            }
            for(int i = 0; i < 26; i++){
                if(Arr[i] != 0) return 0;
            }
            return 1;
        }
        return 0;
    }
};
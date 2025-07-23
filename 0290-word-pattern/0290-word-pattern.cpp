class Solution {
public:
    bool wordPattern(string pattern, string s) {
            map<string, int> words; 
            vector<string> word;
            map<char, string> keys;
            int j = 0;
            for(int i = 0;  i < s.size(); i ++){
                string s2 = "";
                while(s[i] != ' ' && i < s.size()){
                    s2 += s[i];
                    i++;
                    j++;
                }
                word.push_back(s2);
            }
            if (s.size() < 1 || word.size() != pattern.size() ) return 0;
            for(int i = 0;  i < word.size(); i ++){
                if (keys.count(pattern[i]) > 0) {
                    if(keys[pattern[i]] != word[i]) return 0;
                } else {
                    if(words[word[i]] >= 1){return  0;}
                    keys[pattern[i]] = word[i];
                    words[word[i]] += 1;
                }
            }




             
        return 1;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> Arr(26,0);
        cout<< 'z'-'a' << endl;
        for(int i = 0; i < s.size(); i++){
            Arr[s[i]-'a'] += 1;
        }

        for(int i = 0; i < t.size(); i++){
            Arr[t[i]-'a'] -= 1;
        }
        for(int i = 0; i < Arr.size(); i++){
            if(Arr[i] != 0) return 0;
        }
        return 1;
        
    }
};
class Solution {
public:
    string reverseVowels(string s) {
        unordered_map<char, int> map;
        map['a'] = 1, map['A'] = 1 ;
        map['e'] = 1, map['E'] = 1;
        map['i'] = 1, map['I'] = 1;
        map['o'] = 1, map['O'] = 1;
        map['u'] = 1, map['U'] = 1;

        int point = 0;
        bool flag = 0;

        stack<char> stk;

        for(int i = 0; i <s.size(); i++){
            if(map.count(s[i])){
                stk.push(s[i]);
            }
        }
        for(int i = 0; i <s.size(); i++){
            if(map.count(s[i])){
               s[i] = stk.top();
               stk.pop();
            }
        }
        cout << s;
        return s;
    }
};
class Solution {
public:
    string reverseVowels(string s) {
        unordered_map<char, int> map;
        map['a'] = 1, map['A'] = 1 ;
        map['e'] = 1, map['E'] = 1;
        map['i'] = 1, map['I'] = 1;
        map['o'] = 1, map['O'] = 1;
        map['u'] = 1, map['U'] = 1;

        
        int p2 = s.size()-1, p1 = 0;

        while(p1 < s.size() && p1 < p2){
            if(map.count(s[p1])){
                char temp;
                while(p2 > p1){
                    if(map.count(s[p2])){
                        temp = s[p2];
                        s[p2] =  s[p1];
                        s[p1] = temp;
                        p2--; 
                        break;
                    }
                    p2--;
                }
                
            }
            p1++;
        }
        //stack<char> stk;
        // for(int i = 0; i <s.size(); i++){
        //     if(map.count(s[i])){
        //         if (!flag){
        //             p1 =  i;

        //         }
        //         else{
        //             flag = true
        //         }
        //     }
        // }

        // for(int i = 0; i <s.size(); i++){
        //     if(map.count(s[i])){
        //        s[i] = stk.top();
        //        stk.pop();
        //     }
        // }
        cout << s;
        return s;
    }
};
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;

        int i = 0;
        while(i + k < s.size()){
            string group= "";
            for(int j=0; j < k;j++){
                group += s[i + j];
            }
            ans.push_back(group);
            i+=k;
        }
        int x =k - (s.size() - i);
        string Lgroup= "";
        while(i < s.size()){
            Lgroup += s[i++];
        }
        for(int i=0; i < x;i++){
            Lgroup += fill;
        }
        if (!Lgroup.empty()) {
        ans.push_back(Lgroup);
    }
        return ans;

    }
};
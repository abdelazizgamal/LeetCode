class Solution {
public:
    int minLength(string s) {

        size_t pos1 = s.find("AB");
        size_t pos2 = s.find("CD");
        bool flag1 = (pos1 != string::npos), flag2 = (pos2 != string::npos);
        while(flag1 || flag2)
        {
            if(flag1){
                s.erase(pos1,2);
            }
            else if(flag2) s.erase(pos2,2);
            pos1 = s.find("AB");
            pos2 = s.find("CD");
            flag1 = (pos1 != string::npos), flag2 = (pos2 != string::npos);
        }
        cout<< s;
        return s.size();
    }
};
class Solution {
public:
    bool isValid(string str) {
        // vector<int> stack;
        // for(int i = 0; i < s.size();i++){
        //     if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
        //         stack.push_back(s[i]);
        //     }
        //     else{
                

        //         if( !stack.empty() ){
        //             if (stack.back() == '('  && s[i] == ')'){
        //                 stack.pop_back();
        //             }   
        //             else if (stack.back() == '['  && s[i] == ']'){
        //                 stack.pop_back();
        //             }   
        //             else if (stack.back() == '{'  && s[i] == '}'){
        //                 stack.pop_back();
        //             }   
        //         }
        //         else return 0;
        //     } 
            
        // }

        // return !stack.size();
        stack<char> st;

        for(int i=0; i<str.size(); i++){
            if(str[i]=='('|| str[i]=='{'|| str[i]=='['){   //opening
                st.push(str[i]);
            }else{    //closing
                if(st.size()==0){
                    return false;
                }
                if(st.top()=='(' && str[i]==')' ||
                    st.top()=='{' && str[i]=='}' ||
                    st.top()=='[' && str[i]==']'){
                        st.pop();
                }else{
                        return false;
                    }
                }
        }
        
       return st.size()==0; 
    }
};
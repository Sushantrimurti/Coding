class Solution {
public:
    bool isValid(string s) {
       
        int l=s.size();
        stack<char>st;
        for(int i=0;i<l;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);}
                
                else
                {
                    if(st.empty())
                        return false;
                    char ch=s[i];
                    switch(ch){
                        
                        case ')': if(st.top()!='(' || st.empty()) return false;
                                  else {st.pop();break;}
                            
                         case '}': if(st.top()!='{' || st.empty()) return false;
                                  else {st.pop();break;}
                            
                        case ']': if(st.top()!='[' || st.empty()) return false;
                                  else {st.pop();break;}
                            
                        default: ;
                    }
                }
            
        }
        
        return st.empty();
        
    }
};
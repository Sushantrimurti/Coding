class Solution {
public:
    string toLowerCase(string s) {
        
        int l=s.size();
        for(int i=0;i<l;i++){
            if(isupper(s[i]))
                s[i]=s[i]+32;
        }
        return s;
    }
};
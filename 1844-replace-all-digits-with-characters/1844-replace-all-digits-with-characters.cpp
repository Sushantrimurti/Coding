class Solution {
public:
    string replaceDigits(string s) {
        int l=s.size();
        
        for(int i=0;i<l;i++){
            if(s[i]>='0' && s[i]<='9'){
                s[i]=s[i-1]-'0'+s[i];
            }
        }
        
        return s;
    }
};
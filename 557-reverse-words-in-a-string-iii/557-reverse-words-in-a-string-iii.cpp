class Solution {
public:
    string reverseWords(string s) {
        
        
        string r="";
        int l=s.size();
        string temp="";
        for(int i=0;i<l;i++){
            if(s[i]!=' ')
                temp+=s[i];
            else
            {
                reverse(temp.begin(),temp.end());
                r+=temp;
                r+=' ';
                temp="";
            }
        }
        reverse(temp.begin(),temp.end());
        r+=temp;
        return r;
    }
};
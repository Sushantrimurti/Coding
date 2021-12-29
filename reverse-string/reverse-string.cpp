class Solution {
public:
    
    void reverse(vector<char> &s,int l, int r){
        if(l>=r)
            return;
        
        swap(s[l],s[r]);
        reverse(s,l+1,r-1);
    }
    
    void reverseString(vector<char>& s) {
        
        int r=s.size();
        int l=0;
        reverse(s,l,r-1);
        
    }
};
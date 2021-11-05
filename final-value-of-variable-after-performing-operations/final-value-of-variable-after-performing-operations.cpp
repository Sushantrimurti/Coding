class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int l=operations.size();
        string s;
        int res=0;
        string s1="X++";
        string s2="X--";
        string s3="++X";
        string s4="--X";
        for(int i=0;i<l;i++){
            s=operations[i];
            if(s.compare(s1)==0 || s.compare(s3)==0)
                res++;
            else
                res--;
        }
        
        
        return res;
    }
};
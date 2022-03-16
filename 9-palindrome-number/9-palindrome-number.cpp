class Solution {
public:
    bool isPalindrome(int x) {
        
        
        if(x<0)
            return false;
        
        if(x<=9)
            return true;
        string s=to_string(x);
        
        int length=s.size();
        int start=0,end=length-1;
        
        while(start<end){
            
            if(s[start++]==s[end--])
                continue;
            else
                return false;
            
        }
        
        return true;
        
//         while(x>0){
//             int q=x/10;
            
//             int r=x%10;
            
//             if(q!=r)
//                 return false;
            
//             x/=10;
                
//         }
//      return true;   
    }
};
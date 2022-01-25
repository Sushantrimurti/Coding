class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        int c=0;
        while(c<n-1 && (arr[c]<arr[c+1]))
            c++;
        
        if(c==0 || c==n-1)
            return 0;
        
        while(c<n-1 && (arr[c]>arr[c+1]))
            c++;
        
        if(c==n-1)
            return 1;
        
        else 
            return 0;
        
    }
};
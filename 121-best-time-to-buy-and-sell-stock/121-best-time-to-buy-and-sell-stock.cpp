class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l=prices.size();
        int mini,maxi;
        mini=INT_MAX;
        maxi=INT_MIN;
       // int result;
        for(int i=0;i<l;i++){
            
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
            
        }
        
        return maxi;
    }
};
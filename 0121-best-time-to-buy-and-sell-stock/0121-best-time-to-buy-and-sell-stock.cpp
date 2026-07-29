class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),maximum=0,sum=0;
        for(int i=1;i<n;i++)
        {
           
                sum+=prices[i]-prices[i-1];
                if(sum<0){
                 sum=0;   
                }
                maximum=max(maximum,sum);
            }
           
        
        return maximum;
    }
};
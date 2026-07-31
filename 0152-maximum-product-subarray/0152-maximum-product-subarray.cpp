class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size();
        int prefix=1;
        int suffix=1;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(prefix==0){
                prefix=1;
            }
            prefix*=nums[i];
            ans=max(ans,prefix);
        }
         for(int i=n-1;i>=0;i--){
            if(suffix==0){
                suffix=1;
            }
            suffix*=nums[i];
            ans=max(ans,suffix);
        }
return ans;
    }
};
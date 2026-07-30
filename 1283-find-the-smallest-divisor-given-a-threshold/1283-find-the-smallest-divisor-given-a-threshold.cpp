class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
         int low=1,high=0;
        for(int i=0;i<n;i++){
           high=max(high,nums[i]);
           }
           long long hours=0;
           int ans;
        while(low<=high){
            int mid=(low+high)/2;
            long long divisor=0;
            for(int i=0;i<n;i++){
            divisor+=ceil((double)nums[i]/mid);
        }
        if(divisor<=threshold){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }}
        return ans;
    }
};
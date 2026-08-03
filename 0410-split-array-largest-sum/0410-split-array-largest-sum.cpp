class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int maxSum) {
int count = 1;
        long long currentSum = 0;
         for (int i = 0; i < nums.size(); i++) {
    if (currentSum + nums[i] > maxSum) {
                count++;
                currentSum = nums[i];
            }
            else {
                currentSum += nums[i];
            }
        }

        return count <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        long long high=0;
        int low=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            high+=nums[i];
        }
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
        if(canSplit(nums,k,mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;}
};
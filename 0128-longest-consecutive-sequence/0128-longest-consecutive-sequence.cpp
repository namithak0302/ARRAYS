class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int index=0;
        for(auto it:st){
            nums[index++]=it;
        }
        int maxi=1,count=1;
        for(int i=1;i<n;i++){
            // if(nums[i]==nums[i-1]){
            //     continue;
            // }
             if(nums[i]==nums[i-1]+1){
                count++;
                maxi=max(count,maxi);
                
            }
            else{
                count=1;
            }
        }
        return maxi;
    }
};
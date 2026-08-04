class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ans;
        sort(nums.begin(),nums.end());
        if(n==1){
            return nums;
        }

        else{
            int majority=nums[0],count =1;
            for(int i=1;i<n;i++){
                if(nums[i]==majority){
                    count++;
                }
                else{
                    if(count>n/3){
            ans.push_back(majority);}
            majority=nums[i];
            count=1;
                }
            }
            if(count>n/3){
            ans.push_back(majority);}
            }

            return ans;
        }
    };
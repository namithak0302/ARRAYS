class Solution {
public:
    bool isfit(vector<int>& weights,int days,int mid){
        int currentweight=0;
        int count=1;
        for(int i=0;i<weights.size();i++){
            if(currentweight+weights[i]<=mid){
            currentweight+=weights[i];
            }
            else{
                count++;
                currentweight=weights[i];
            }
            

            }
        
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=0,high=0;
        for(int i=0;i<n;i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(isfit(weights,days,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return low;
    }
};
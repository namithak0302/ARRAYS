class Solution {
public:
bool isfit(vector<int>& bloomDay,int m,int k,int mid){
    int count=0;
    int bouquet=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            count++;
            }
            else{
                count=0;
            }
            if(count==k){
                bouquet++;
                count=0;
            }
    }
    return bouquet>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
       int n=bloomDay.size();
    // long long product=1L*m*k;
    // if(product>n){
    //     return -1;
    // }
    int ans=-1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(isfit(bloomDay,m,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
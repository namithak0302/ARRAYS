class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n=matrix.size(),left=0,top=0;
    vector<int> a;
 int right=matrix[0].size()-1,bottom=matrix.size()-1;
 while(top<=bottom&&left<=right){
 for(int i=left;i<=right;i++){
    a.push_back(matrix[top][i]);
 }
 top++;
 for(int i=top;i<=bottom;i++){
    a.push_back(matrix[i][right]);
 }
 right--;
 if(top<=bottom){
 for(int i=right;i>=left;i--){
    a.push_back(matrix[bottom][i]);
 }
 bottom--;}
 if(left<=right){
    for(int i=bottom;i>=top;i--){
        a.push_back(matrix[i][left]);
    }
    left++;
 }}
 return a;
 }
    
};
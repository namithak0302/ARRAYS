class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        int count=0;
        vector<int> freq(26, 0);
         vector<int> freq1(26, 0);
        if(n!=m){
            return false;
        }
        
            for(int j = 0; j < n; j++)
             {
                freq[s[j] - 'a']++;
    }
   
            for(int j = 0; j < m; j++)
             {
                freq1[t[j] - 'a']++;
    }
   for(int i=0;i<26;i++){
    if(freq[i]!=freq1[i])
    return false;
   }
   return true;
    }
};
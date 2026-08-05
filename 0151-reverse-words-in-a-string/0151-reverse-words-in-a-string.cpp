class Solution {
public:
    string reverseWords(string s) {
        stringstream st(s);
        string word;
        vector<string> words;
         while(st>>word){
            words.push_back(word);
        }
        int n=words.size();
        string ans="";
        for(int i=n-1;i>=0;i--){
            ans+=words[i];
            if(i!=0){
                ans+=" ";
            }
        }
return ans;
    }
};      
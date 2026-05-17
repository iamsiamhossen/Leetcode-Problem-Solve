class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,maxF=0,ans=0;
        unordered_map<int,int> mp;
        for(int r=0;r<s.size();r++){
            char c= s[r];
            mp[c]++;
            maxF= max(maxF,mp[c]);
            if((r-l+1)-maxF > k){
                mp[s[l]]--;
                l++;
            }
            int x = r-l+1;
           ans= max(ans,x);

        

        }
        return ans;
    }
};
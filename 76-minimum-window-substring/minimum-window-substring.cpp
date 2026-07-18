class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char,int> need;
        for(auto u:t){
            need[u]++;
        }
        unordered_map<char,int> window;
        int form = 0;
        int ans = INT_MAX;
        int start=0;
        int left =0;
        for(int right=0;right<s.size();right++){
            char ch= s[right];
            window[ch]++;
            if(need.count(ch) and window[ch]==need[ch]){
                form++;
            }
            while(form==need.size()){
                int tmp = ans;
                ans= min(right-left+1,ans);
                if(ans<tmp){
                    start = left;
                }
                window[s[left]]--;
                if(need.count(s[left]) and window[s[left]]<need[s[left]]){
                    form--;
                }
                left++;
            }
        }
        if(ans==INT_MAX){
            return "";
        }
        return s.substr(start,ans);
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;

        for(auto u : st){
            int curr= u;
            int len =1;
            if(st.find(u-1)==st.end()){
                curr++;
                while(st.find(curr)!=st.end()){
                    curr++;
                    len++;
                }
                ans= max(ans,len);
            }
        }
        return ans;
    }
};
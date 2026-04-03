class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map <char,int> cnt;
        for(char u:stones){
            cnt[u]++;
        }
        int ans=0;
        for(char u: jewels){
           ans+=cnt[u];
        }
        return ans;
    }
};
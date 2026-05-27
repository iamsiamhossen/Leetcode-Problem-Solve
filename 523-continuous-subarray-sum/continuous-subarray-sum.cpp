class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        int prefixSum=0;
        for(int i =0;i<nums.size();i++){
            prefixSum+=nums[i];
            int remain= prefixSum%k;
            if(mp.count(remain)){
                int chk = i-mp[remain];
                if(chk>=2){
                    return true;
                }
            }
            else{
                mp[remain]=i;
            }

        }
        return false;

    }
};
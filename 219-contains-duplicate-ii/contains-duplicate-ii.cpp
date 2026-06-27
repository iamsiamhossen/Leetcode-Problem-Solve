class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])){
                int val= abs(mp[nums[i]]-(i+1));
                if(val<=k) return true;
                else{
                    mp[nums[i]]=i+1;
                }
            }
            mp[nums[i]]=i+1;
        }
        return false;
        
    }
};
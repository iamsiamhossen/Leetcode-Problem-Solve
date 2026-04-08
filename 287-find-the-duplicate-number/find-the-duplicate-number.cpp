class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> n;
        for(int i=0;i<nums.size();i++){
            if(n.count(nums[i])){
                return nums[i];
            }
            n[nums[i]]++;
        
    }
    return {};
    }
};
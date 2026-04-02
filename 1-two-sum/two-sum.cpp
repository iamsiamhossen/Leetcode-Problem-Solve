class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(ans.find(target-num)!=ans.end()){
                return {i, ans[target-num]};
            }
            ans[num]=i;
        }
        return{};
    }
};
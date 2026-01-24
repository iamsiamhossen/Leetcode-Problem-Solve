class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int n= nums.size();
        int ans = INT_MIN;
        while(i<n/2){
            int tmp = nums[i]+nums[j];
            ans= max(tmp,ans);
            i++;
            j--;
        }
        return ans;
    }
};
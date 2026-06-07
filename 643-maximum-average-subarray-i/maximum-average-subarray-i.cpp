class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum= 0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        long long ans = sum;
        int l =0;
        for(int i = k;i<n;i++){
            sum = sum - nums[l]+nums[i];
            ans= max(sum,ans);
            l++;
        }
        return (double)ans/k;
    }
};
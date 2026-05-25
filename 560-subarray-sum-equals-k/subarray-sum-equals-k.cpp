class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

    mp[0] = 1;  

    int prefixSum = 0;
    int cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        prefixSum += nums[i];

        int need = prefixSum - k;

        if (mp.find(need) != mp.end())
        {
           cnt+=mp[need];
        }

        mp[prefixSum]++;
    }
    return cnt;
    }
};
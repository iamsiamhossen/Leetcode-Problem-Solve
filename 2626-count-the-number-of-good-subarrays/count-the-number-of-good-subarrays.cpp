class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
       map<int,int>m;
        long long cnt =0;
        int left=0;
        long long cp=0;
        for(int i=0;i<nums.size();i++){
            cp+=m[nums[i]];
            m[nums[i]]++;
            while(cp>=k){
               cnt+=(nums.size()-i);
               m[nums[left]]--;
               
                cp-=m[nums[left]];
                left++;
            }
        }
        return cnt;
    }
};
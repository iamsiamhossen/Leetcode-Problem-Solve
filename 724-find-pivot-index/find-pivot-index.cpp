class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        int leftm=0,rightm=0,maxpresum=prefix[n-1];
        // For Ind0
        int leftmost= 0;
        int rightmost= maxpresum-nums[0];
        if(leftmost==rightmost){
            int ans=0;
            return ans;
        }
        int l=0;
        for(int i=1;i<n;i++){
            leftm= (maxpresum-nums[i])-prefix[l];
            rightm= prefix[l];
            if(leftm==rightm){
                return i;
            }
            else{
                l++;
            }
        }

return -1;
    }
};
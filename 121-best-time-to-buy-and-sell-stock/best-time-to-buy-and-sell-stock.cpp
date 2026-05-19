class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1,canans=0,ans=INT_MIN;
        while(r<prices.size()){
           if(prices[l]>=prices[r]){
             l=r;
             if(r<prices.size()){
                r++;
             }
           }
           else if(prices[l]<prices[r]){
              canans= prices[r]-prices[l];
              ans=max(ans,canans);
              if(r<prices.size()){
                r++;
             }
           }
        }
        if(ans==INT_MIN){
            ans=0;
            return ans;
        }
        else{
            return ans;
        }
    }
};

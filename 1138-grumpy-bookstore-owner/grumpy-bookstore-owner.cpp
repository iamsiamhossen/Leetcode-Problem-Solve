class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int ws = minutes;
        int windowSum = 0;
        for(int i=0;i<ws;i++){
            if(grumpy[i]==1)
                windowSum+=customers[i];
        }
        int Sum = windowSum;
        for(int i = ws; i < n; i++)
        {
            if(grumpy[i]==1)
                windowSum+=customers[i];
            if(grumpy[i-ws]==1)
                windowSum-=customers[i-ws];
            Sum = max(Sum, windowSum);
        }
        
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                Sum+=customers[i];
            }
        }
        return Sum;
    }
};
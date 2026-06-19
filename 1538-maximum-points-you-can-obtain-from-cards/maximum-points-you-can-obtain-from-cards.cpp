class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);

        int ws = n - k;

        // Edge Case: sob card nite hobe
        if(ws == 0)
            return total;

        int windowSum = 0;

        // First Window
        for(int i = 0; i < ws; i++)
        {
            windowSum += cardPoints[i];
        }

        int minSum = windowSum;

        // Sliding Window
        for(int i = ws; i < n; i++)
        {
            windowSum = windowSum - cardPoints[i - ws] + cardPoints[i];
            minSum = min(minSum, windowSum);
        }

        return total - minSum;
    }
};
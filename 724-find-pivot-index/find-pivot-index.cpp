class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n = a.size();
        int total = accumulate(a.begin(), a.end(), 0);
    int index = -1, right = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int x = right + a[i];
        if (right == total - x)
        {
            index = i;
        }
        right += a[i];
    }
return index;
    }
};
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                if ((i < n - 1 and j < m - 1)) {
                    if (a[i][j] != a[i + 1][j + 1]) {
                        return false;
                    }
                }
            }
          
        }
          return true;
    }
};
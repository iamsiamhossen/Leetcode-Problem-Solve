class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m / 2; j++) {
                swap(a[i][j], a[i][m - (j + 1)]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j]^=1;
            }
           
        }
        return a;
    }
};
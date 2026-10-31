class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (m + 1) / 2; j++) {
                int temp = a[i][j];

                a[i][j] = a[i][m - 1 - j] ^ 1;
                a[i][m - 1 - j] = temp ^ 1;
            }
        }

        return a;
    }
};
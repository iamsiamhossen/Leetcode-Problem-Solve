class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        // Protita value er tar diagonal er value check kortesi 
        int m= matrix.size();
        int n= matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i<m-1 and j<n-1) and (matrix[i][j]!=matrix[i+1][j+1])) return false;
            }
        }
        return true;
    }
};
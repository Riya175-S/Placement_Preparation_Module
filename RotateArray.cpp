class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        //perform transpose first
        int n=matrix.size(),i,j;
        for(i=0; i<n; i++)
        {
            for(j=0; j<i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //let's perform the reversal now
            for (int i = 0; i < n; i++) {
                reverse(matrix[i].begin(), matrix[i].end());
    }
        
    }
};
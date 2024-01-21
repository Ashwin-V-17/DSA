/*
Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1;
        for(int i=0;i<matrix.size();i++)
        {
           for(int j=0;j<matrix[i].size();j++)
           {
               if(matrix[i][j]==0)
               {
                   matrix[i][0]=0;
                   if(j==0)
                   {
                       col0=0;
                   }
                   else
                   {
                       matrix[0][j]=0;
                   }
               }
           }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][0]==0||matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
               matrix[0][j]=0; 
            }
        }
        if(col0==0)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};

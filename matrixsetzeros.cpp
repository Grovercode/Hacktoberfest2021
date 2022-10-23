class Solution {
public:
    int n, m;
    void setZeroes(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
        bool firstrow = false, firstcol = false;
        
        for(int i = 0 ; i <n;i++)
        {
            for(int j = 0 ; j <m ;j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i==0)
                        firstrow = true;
                    
                    if(j==0)
                        firstcol = true;
                    
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        
        for(int i = 1 ; i<n;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j = 0;j<m;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        for(int j = 1 ; j<m;j++)
        {
            if(matrix[0][j]==0)
            {
                for(int i = 0;i<n;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        
        if(firstrow)
        {
            for(int i = 0 ; i < m;i++)
                matrix[0][i] = 0;
            
        }
        
        if(firstcol)
        {
            for(int i = 0 ; i<n;i++)
                matrix[i][0] = 0;
        }
        return ;
        
    }
};

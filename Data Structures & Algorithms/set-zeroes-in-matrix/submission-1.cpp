class Solution {
public:
    void setrowzero(vector<vector<int>>& matrix, int row, int col){
        for(int i=0; i<col; i++){
            matrix[row][i]=0;
        }
    }
    void setcolzero(vector<vector<int>>& matrix, int row, int col){
        for(int i=0; i<row; i++){
            matrix[i][col]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> rowmat(row, -1);
        vector<int> colmat(col, -1);

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    rowmat[i]=0;
                    colmat[j]=0;
                }
            }
        }
        for(int i=0; i<row; i++){
            if(rowmat[i]==0){
                setrowzero(matrix, i, col);
            }
        }
        for(int i=0; i<col; i++){
            if(colmat[i]==0){
                setcolzero(matrix, row, i);
            }
        }        
    }
};

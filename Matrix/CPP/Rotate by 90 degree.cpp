class Solution {
public:
    /*
    anti-clockwise
    i,j <- j,n-1-i <- n-1-i,n-1-j <- n-1-j,i <-i,j
    clockwise
    i,j -> j,n-1-i -> n-1-i,n-1-j -> n-1-j,i -> i,j
    a       b           c               d
    */
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        for(int i=0;i<=n/2;i++){
            for(int j=i;j<n-1-i;j++){
                int tmp=mat[i][j];
                mat[i][j]=mat[n-1-j][i];
                mat[n-1-j][i]=mat[n-1-i][n-1-j];
                mat[n-1-i][n-1-j]=mat[j][n-1-i];
                mat[j][n-1-i]=tmp;
            }
        }
        
        
        
    }
};

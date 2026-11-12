class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int count=0;

        int m=grid.size(),n=grid[0].size();
        int rows=0,cols=n-1;

        while( rows< m && cols>=0 ){
            if(grid[rows][cols]<0){
                count+=(m-rows);
                cols--;
            }
            else{
                rows++;
            }
        }

        return count;
        
    }
};

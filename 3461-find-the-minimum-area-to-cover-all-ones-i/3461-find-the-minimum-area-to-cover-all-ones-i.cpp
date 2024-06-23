class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
       vector<int>horizontal_index;
       vector<int>vertical_index;
        
        
        for(int i = 0 ; i< grid.size();i++){
            
            for(int j= 0 ; j < grid[0].size() ;j++){
                
               if(grid[i][j]==1){
                   horizontal_index.push_back(j);
                   vertical_index.push_back(i);
               }
            }
        }
        
        sort(horizontal_index.begin(),horizontal_index.end());
        sort(vertical_index.begin(),vertical_index.end());
        
        return (horizontal_index[horizontal_index.size()-1]-horizontal_index[0]+1)*(vertical_index[vertical_index.size()-1]-vertical_index[0]+1);
        
    }
};
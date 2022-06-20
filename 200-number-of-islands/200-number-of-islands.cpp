
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int c = 0;
        for (int i = 0; i < m ; i++) {
            for (int j = 0; j < n ; j++) {
                if(grid[i][j] == '1') {
                    queue<pair<int, int>> q;
                    grid[i][j] = '2';
                    q.push({i, j});
                    int dir[6][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
                    while (!q.empty()){
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();
                        for (auto &d : dir ){
                        int rr = r + d[0];
                        int cc = c + d[1];
                        if(!(rr<0 || cc<0 || rr>=m || cc>=n || grid[rr][cc]!='1')){
                            grid[rr][cc] = '2';
                            q.push({rr, cc});  
                            }
            
                        }

                    }
                    c++;
                }
            }
        }
    return c;
    }
};
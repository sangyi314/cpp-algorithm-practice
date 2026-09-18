#include <iostream>
#include <vector>


void dfs(std::vector<std::vector<int>>& grid , int x ,int y)
{
    int rows = grid.size();
    int cols = grid[0].size();
    std::vector dx{1 ,  -1 , 0 , 0};
    std::vector dy{0 ,  0 , 1 , -1};

    grid[x][y] = 0;
    for(int i{0} ; i < 4 ; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= rows || ny < 0 || ny >= cols)
        {
             continue;
        }
        if (grid[nx][ny] == 0)
        {
            continue;
        }
        dfs(grid , nx , ny);
    }

}

int countIsland(std::vector<std::vector<int>>& grid)
{
    int count{0};
    int rows = grid.size();
    int cols = grid[0].size();
    for(int i {0} ; i < rows ; i++)
    {
        for(int j {0} ; j < cols ; j++)
        {
            if(grid[i][j] == 1)
            {
                count++;
                dfs(grid , i ,j);
            }
        }
    }
    return count;
}
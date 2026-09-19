#include <iostream>
#include <vector>

int main()
{
    int rows , cols ;
    std::cin >> rows >> cols ;
    std::vector<std::vector<int>> nums(rows , std::vector<int>(cols ,0));
    
    for (int i {0} ; i < rows ; i++)
    {
        nums[i][0] = 1;
    }
    for(int i {0} ; i < cols ; i++)
    {
        nums[0][i] = 1 ;
    }

    for (int i {1} ; i < rows ; i++)
    {
        for(int j{1} ; j < cols ; j++)
        {
            nums[i][j] = nums[i-1][j] + nums[i][j-1];
        }
    }

    std::cout << nums[rows-1][cols-1] << '\n';
    return 0;
}
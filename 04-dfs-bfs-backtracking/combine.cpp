#include <iostream>
#include <vector>

void backtrack(std::vector<int>& nums , int k , int start , std::vector<int>& path , std::vector<std::vector<int>>& result)
{
    if (path.size() == k)
    {
        result.push_back(path);
        return; 
    }
            for (int i = start; i < nums.size(); i++)
        {
            path.push_back(nums[i]);
            backtrack(nums , k , i + 1 , path ,result);
            path.pop_back();
        }
    
}
std::vector<std::vector<int>> combine(int n , int k)
{
    std::vector<int> nums;
    for (int i{1} ; i < n + 1 ; i++)
    {
        nums.push_back(i);
    }
    std::vector<int> path;
    std::vector<std::vector<int>> result;

    backtrack(nums , k , 0 , path , result);
    return result;
}
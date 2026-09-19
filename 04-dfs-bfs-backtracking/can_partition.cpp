#include <iostream>
#include <vector>
#include <algorithm>

bool canPartition(std::vector<int>& nums)
{
    int sum{0};
    for(int num : nums)
    {
        sum += num;
    }

    if (sum % 2 == 1)
    {
        return false;
    }

    int halfsum = sum / 2 ;

    std::vector<int> target(halfsum + 1, 0);

    for(int i{0} ; i < nums.size() ; i++)
    {
        for (int j = halfsum ; j >= nums[i] ; j--)
        {
            target[j] = std::max(target[j] , target[j - nums[i]] + nums[i] );
        }
    }
    return target[halfsum] == halfsum;
}
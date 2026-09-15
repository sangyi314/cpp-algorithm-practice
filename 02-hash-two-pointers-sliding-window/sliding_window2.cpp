#include <iostream>
#include <vector>
#include <limits>

int main ()
{
    int n {};
    int target {};
    std::cin >> n >> target;
    std::vector<int> num(n);

    for (int i {0} ; i < n ; i++)
    {
        int value {};
        std::cin >> value ;
        num[i] = value ;
    }

    int left{0};
    int sum{0};
    int min = std::numeric_limits<int>::max();
    int value_l {-1};
    int value_r {};

    for(int right {0} ; right < n ; right++)
    {
        sum += num[right];

        while(sum > target && left <= right)
        {
            sum -=num[left];
            left++;
        }
        if(sum == target && min > right - left + 1)
        {
            min = right - left + 1;
            value_l = left;
            value_r = right;
        }
    }
    if(value_l == 0)
    {
        std::cout << '1' << '\n';
        return 0;
    }

    std::cout << min << '\n';

    for (int i = value_l ; i <= value_r ; i++)
    {
        std::cout << num[i] << ' ';
    }

    std::cout << '\n';


    return 0;
}
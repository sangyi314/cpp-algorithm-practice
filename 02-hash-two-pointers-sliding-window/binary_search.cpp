#include <iostream>
#include <vector>

int main()
{
    std::vector num {1 , 3 , 5 , 6};
    int target{};
    std::cin >> target;
    int left{0};
    int right = num.size() - 1;
    int mid{};
    if(target > num.front())
    {
        std::cout << num.size() << '\n';
        return 0;
    }

    while (true)
    {
        mid = (left + right) / 2; 
        if(num[mid] == target)
        {
            std::cout << mid << '\n';
            break;
        }
        if (left == right)
        {
            std::cout << mid << '\n';
            break;
        }
        if(num[mid] > target)
        {
            right = mid ;
            continue;
        }
        if(num[mid] < target)
        {
            left = mid + 1 ;
            continue;
        }
    }
    return 0;
}
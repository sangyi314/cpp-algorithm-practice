#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> num;
    int n {};
    std::cin >> n;
    for (int i {0}; i < n ; i++ )
    {
        int value {};
        std::cin >> value;
        num.push_back(value);
    }
    int left{0};
    int right = num.size() - 1;
    int sum {};
    int target{};
    std::cin >> target ;
    while (true)
    {
        sum = num[left] + num[right];
        if(sum < target)
        {
            left++;
            continue;
        }
        else if (sum > target)
        {
            right--;
            continue;
        }
        else
        {
            left++;
            right++;
            break;
        }
        if (left >= right)
        {
            std::cout << "Cannot find." << '\n';
            return 0;
        }
    }

    std::vector the_two{left ,right};

    for(int i : the_two)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    return 0;
}
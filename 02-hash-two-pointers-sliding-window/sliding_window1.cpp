#include <iostream>
#include <vector>

int main ()
{
    std::vector num {3, 1, 4, 2, 5};
    int left = 0 ;
    int sum {num[0] + num[1] + num[2]};
    int maxSum {sum};

    for (std::size_t right{3}; right < num.size() ; right++)
    {
        sum += num[right];
        sum -= num[left];
        maxSum = std::max (maxSum , sum);
        left++;
    }

    std::cout << maxSum << '\n';



    return 0;
}
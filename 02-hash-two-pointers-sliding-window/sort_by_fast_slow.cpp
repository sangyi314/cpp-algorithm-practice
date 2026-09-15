#include <iostream>
#include <vector>

int main()
{
    std::vector num {0, 1, 0, 3, 12};

    int slow{0};

    for (std::size_t fast {0} ; fast < num.size() ; fast++)
    {
        if(num[fast] != 0)
        {
            num[slow] = num [fast];
            slow++;
        }
    }

    for (int i {slow}; i < static_cast<int>(num.size()) ; i++)
    {
        num[i] = 0;
    }
    for (int i : num )
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    return 0;
}
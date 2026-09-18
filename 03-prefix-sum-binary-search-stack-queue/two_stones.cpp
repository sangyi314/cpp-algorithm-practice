#include <iostream>
#include <queue>

int main()
{
    int n {0};
    std::cin >> n;
    std::priority_queue<int> stones;

    for (int i{0} ; i < n ; i++)
    {
        int value{};
        std::cin >> value;
        stones.push(value);
    }

    int heavy{};

    while( !stones.empty() )
    {
        if(stones.size() == 1)
        {
            heavy = stones.top();
            stones.pop();
            break;
        }
        int x , y , z;
        x = stones.top();
        stones.pop();
        y = stones.top();
        stones.pop();
        z = x - y ;
        stones.push(z);
    }

    std::cout << heavy <<'\n';
    return 0;
}
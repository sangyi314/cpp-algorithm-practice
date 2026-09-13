#include <iostream>
#include <vector>

int main()
{
    int n {0};
    std::cin >> n ;
    std::vector<int> input(n);
    for (int i {0} ; i < n ; i++)
    {
        std::cin >> input[i] ;
    }
    std::vector<int> output {};
    output.push_back(input[0]);
    for (int i {1} ; i < n ; i++)
    {
        if(input[i] != input[i - 1])
        {
            output.push_back(input[i]);
        }
    }    
    for (int i : output)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return 0;
}
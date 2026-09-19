#include <iostream>
#include <vector>

int main()
{
    int n{0};
    std::cin >> n;
    std::vector<int> dp(n);
    dp[0] = 1 ;
    dp[1] = 2 ;

    for(int i{2} ; i < n ; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    std::cout << dp[n-1] << '\n';
}
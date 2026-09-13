#include <iostream>

int main ()
{
    long long sum {0};
    int min {0} ;
    int max {0} ;
    int n {0} ;
    std::cin >> n ;
    int x {0};
    std::cin >> x ;
    min = x ;
    max = x ;
    sum = x ;
    for (int i {1} ; i < n ; i++)
    {
        int num {0};
        std::cin >> num ;
        if (min > num)
        {
            min = num ;
        }
        if (max < num)
        {
            max = num;
        }
        sum += num ;

    }

    std::cout << min << ' ' << max << ' ' << sum << '\n';
    return 0;
}
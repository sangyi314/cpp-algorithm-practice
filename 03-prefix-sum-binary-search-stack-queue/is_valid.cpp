#include <iostream>
#include <unordered_map>
#include <stack>

int main ()
{
    std::string s{};
    std::cin >> s ;
    if(s.size() % 2 == 1)
    {
        std::cout << -1 << '\n';
        return 0;
    }
    std::unordered_map<char , char> bracket = {{')' , '('} , {']' , '['} , {'}' , '{'}};
    std::stack<char> stk;

    for (auto ch : s)
    {
        if(bracket.contains(ch))
        {
            if(stk.empty() || stk.top() != bracket[ch])
            {
                std::cout << -1 << '\n';
                return 0;
            } 
            stk.pop();
        }
        else
        {
             stk.push(ch);
        }
    }

    std::cout << "true" << '\n';

    return 0;
}
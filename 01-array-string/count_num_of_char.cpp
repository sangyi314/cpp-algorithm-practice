#include <iostream>

int main()
{
    std::string line{};
    std::getline (std::cin , line);
    char c {};
    c = std::tolower(std::getchar());
    int count{};
    for (char i : line)
    {
        if(c == std::tolower(i))
        {
            count++;
        }
    }
    std::cout << count << '\n';
    return 0;
}
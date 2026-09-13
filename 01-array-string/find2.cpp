#include <iostream>
#include <string>
#include <unordered_map>

int main ()
{
    std::string line{};
    getline(std::cin ,line);
    std::unordered_map<char , int > Ch;
    for(char ch : line)
    {
        Ch[ch]++;
    }

    for(std::size_t i {0} ; i < line.size() ; i++)
    {
        if(Ch[line[i]] == 1)
        {
            std::cout << i  << '\n';
            return 0;
        }
    }
    std::cout << "-1" << '\n';
    return 0;
}
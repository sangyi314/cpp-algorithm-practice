#include <iostream>
#include <string>
#include <utility>
#include <algorithm>

std::string reverse (const std::string& line)
{
    std::string reverse_line {line};
    for (std::size_t i {0} ; i < reverse_line.size() / 2; i++)
    {
        std::swap(reverse_line[i],reverse_line[reverse_line.size() - i - 1]);
    }
    return reverse_line;
}



int main ()
{
    std::string line {};
    getline(std::cin , line);
    std::reverse(line.begin(),line.end()) ;
    std::cout << line << '\n' ;

    return 0;
}
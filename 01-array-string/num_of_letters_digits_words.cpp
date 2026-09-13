#include <iostream>
#include <string>
#include <sstream>


int count_words(const std::string& line)
{
    std::istringstream input {line};
    std::string words{};

    int count {0};

    while (input >> words)
    {
        count++ ;
    }

    return count;

}

int main()
{
    int letters {0};
    int digits {0};

    std::string line {};

    getline(std::cin , line );

    for (char ch : line )
    {
        if (('a' <= ch && ch<= 'z') || ('A' <= ch  && ch <= 'Z'))
        {
            letters ++;
        }
        if ('0' <= ch && ch <= '9')
        {
            digits ++ ;
        }
    }
    int words {count_words(line)};

    std::cout << letters << ' ' << digits << ' ' << words << '\n';
    return 0;
}
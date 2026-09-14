#include <iostream>
#include <sstream>
#include <vector>


int main()
{
    std::string line {};
    std::getline(std::cin , line);
    std::vector<std::string> string{};
    std::istringstream input {line};
    std::string word{};
    while (input >> word)
    {
        string.push_back(word);
    }
    
    word = string[string.size() - 1];
    int i = word.size();
    std::cout << i << '\n';

    return 0;
}
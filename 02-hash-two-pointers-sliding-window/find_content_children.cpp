#include <iostream>
#include <vector>
#include <algorithm>

int find_content_children(std::vector<int>& g, std::vector<int>& s)
{
    std::sort(g.begin(),g.end());
    std::sort(s.begin(),s.end());

    int m = g.size() , n = s.size();
    int count{0};

    for (int i , j ; i < m && j < n ; i++ ,j++)
    {
        while(j < n && s[j] < g[i])
        {
            j++;
        }
        if(s[j] > g[i])
        {
            count++;
        }
    }
    return count;
}
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 0, 1};
    int max = 0;
    int c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            c++;
        }
        else
        {
            c = 0;
        }
        if (max < c)
        {
            max = c;
        }
    }
    cout << max;
    return max + 1;
}
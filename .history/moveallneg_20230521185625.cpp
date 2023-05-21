#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 6, -2, 3, 4, -5};
    vector<int> lol;
    int x = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= 0)
        {
            lol.push_back(v[i]);
        }
        else if (v[i] < 0)
        {
            // swap
            swap(v[i],v[x]);
            x++;
        }
        if (v[x] < 0)
        {
            x++;
        }
    }
    for (int i = x; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout<<x;
    return 0;
}
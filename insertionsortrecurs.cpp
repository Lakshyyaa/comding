#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
void pattern(int r, int c, vector<int> &v)
{
    if (r == 1)
    {
        return;
    }
    if (c == 0)
    {
        pattern(r - 1, v.size() - r + 2, v);
    }
    if (c > 0)
    {
        if (v[c] < v[c - 1])
        {
            swap(v[c], v[c - 1]);
        }
        pattern(r, c - 1, v);
    }
}

int main()
{
    vector<int> v = {8, 3, 1, 1, 34, 6, 8, 0, 9, 7, 4, 3, 2, 2, 5, 7, 8, 84};
    // vector<int> v = {8, 3, 1, 9};

    pattern(v.size(), 1, v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << i + 1 << " : " << v[i] << endl;
    }
    return 0;
}
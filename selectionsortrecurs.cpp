#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
void ssort(int r, int c, vector<int> &v, int min)
{
    if (r == 0)
    {
        return;
    }
    else if (c + r > v.size() - 1)
    {
        if (v[c] < v[min])
        {
            min = c;
        }
        ssort(r, c - 1, v, min);
    }
    else
    {
        swap(v[c + 1], v[min]);
        ssort(r - 1, v.size() - 1, v, v.size() - 1);
    }
}
int main()
{
    vector<int> v = {5, 2, 1, 4, 2, 2, 4, 6, 7, 9, 9, 6, 43, 3, 2, 13};
    ssort(v.size(), v.size() - 1, v, v.size() - 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
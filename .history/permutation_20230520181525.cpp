#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,4,3};
    int x = 0;
    int i = v.size() - 1;
    while (x == 0)
    {
        i--;
        if (v[v.size() - 1] > v[i])
        {
            swap(v[v.size() - 1], v[i]);
            x++;
        }
    }
    sort(v.begin()+i,v.end)
    return 0;
}
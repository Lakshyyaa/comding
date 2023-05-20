#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int x=0;
    int i=v.size()-1;
    vector<int> v = {1, 2, 3, 4, 5};
    while(x!=1)
    {
        i--;
        if (v[v.size() - 1] > v[i - 1])
        {
            swap(v[i], v[i - 1]);
        }
    }
    return 0;
}
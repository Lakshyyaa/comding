#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int x = 0;
    int i = v.size() - 1;
    while(x==0)
    {
        i--;
        if (v[v.size() - 1] > v[i - 1])
        {
            swap(v[i], v[i - 1]);
            x++;
        }
    }
    int 
    while()
    return 0;
}
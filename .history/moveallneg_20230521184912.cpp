#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1,6, -2, 3, 4, -5};
    0)
        {
            b--;
        }
        if (v[a] < 0)
        {
            a++;
        }
        if (v[a] > 0 && v[b] < 0)
        {
            // cout<<a<<" "<<b<<endl;
            swap(v[a], v[b]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout<<a<<" "<<b;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> v = {7,6,5,4,3,2,1};
    int i=2;
    // int x = 0;
    // int i = v.size() - 1;
    // while (x == 0)
    // {
    //     i--;
    //     if (v[v.size() - 1] > v[i])
    //     {
    //         swap(v[v.size() - 1], v[i]);
    //         x++;
    //     }
    // }
    sort(v.begin()+i,v.end());
    for(int i=0;i<v.size();i+)
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {-9,-5,-5,0};
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
            swap(v[i],v[x]);
            x++;
        }
        if (v[x] < 0)
        {
            x++;
        }
    }
    // for (int i = x; i < v.size(); i++)
    // {
    //     v[i]=lol[i-x];
    // }
    // cout<<x;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
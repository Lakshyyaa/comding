#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> v = {5};
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
    cout<<i<<endl;;
    sort(v.begin()+i+1,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
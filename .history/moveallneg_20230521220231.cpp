#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1,2,7};
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
            if(v[x]<0){
            }
            else{
                swap(v[i], v[x]);
                x++;
            }
            //make it swap only if v[x] is positive
            // cout<<x<<endl;
        }
        if (v[x] < 0)
        {
            x++;
            // cout << x << endl;
        }
    }
    for (int i = x; i < v.size(); i++)
    {
        v[i]=lol[i-x];
    }
    // cout<<x;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=1;
    vector<int>v;
    int nums[1]={1};
    for (int i = 0; i >= 0; i--)
    {
        if (i < k)
        {
            nums[i]=v[k-i-1];
        }
        else
        {
            if(x>0)
            {
                v.push_back(nums[i]);
                x--;
            }
            nums[i] = nums[i - k];
            // cout<<i<<"...";
        }
    }
    for(int i=0;i<1;i++)
    {
        cout<<nums[i]<< ' ';
    }
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<< ' ';
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=2;
    int x=k;
    vector<int>v;
    int nums[7]={1,2,3,4,5,6,7};
    for (int i = 6; i >= 0; i--)
    {
        if (i < k)
        {
            // nums[i]=v[k-i];
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
    for(int i=0;i<7;i++)
    {
        cout<<nums[i]<< ' ';
    }
    cout<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<< ' ';
    // }
    return 0;
}
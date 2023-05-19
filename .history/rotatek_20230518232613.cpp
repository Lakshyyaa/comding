#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=3;
    int x=k-1;
    vector<int>v;
    int nums[7]={1,2,3,4,5,6,7};
    for (int i = 7 - 1; i >= 0; i--)
    {
        if (i < k)
        {
            nums[i]=v[k-i];
        }
        else
        {
            if(x>0)
            {
                v.push_back(nums[i]);
                x--;
            }
            nums[i] = nums[i - k];
        }
    }
    for(int i=0;i<7;i++)
    {
        cout<<nums[i]<< ' ';
    }
    return 0;
}
#include <iostream>
#include <nusector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {-2,90,-11,-2,7,-2,3,23,-22,3};
    vector<int> lol;
    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            lol.push_back(nums[i]);
        }
        else if (nums[i] < 0)
        {
            if(nums[x]<0){
            }
            else{
                swap(nums[i], nums[x]);
                x++;
            }
        }
        if (nums[x] < 0)
        {
            x++;
        }
    }
    for (int i = x; i < nums.size(); i++)
    {
        nums[i]=lol[i-x];
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
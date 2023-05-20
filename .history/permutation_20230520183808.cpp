#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    vector<int>nums={1,2,3};
    int x = 0;
    int i = nums.size() - 1;
    while (x == 0)
    {
        i--;
        if (i < 0)
        {
            break;
        }
        if (nums[nums.size() - 1] > nums[i])
        {
            swap(nums[nums.size() - 1], nums[i]);
            x++;
        }
    }
    sort(nums.begin() + i + 1, nums.end());
}
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}}
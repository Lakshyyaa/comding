#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
//13254
//150743
{
    vector<int> nums = {11,1,1};
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
    reverse(nums.begin()+i+1, nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
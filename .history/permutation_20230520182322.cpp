#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    vector<int>nums={5,2,1,2,3};
    int x = 0;
    int i = nums.size() - 1;
    while (x == 0 && i > -1)
    {
        i--;
        if (nums[nums.size() - 1] > nums[i])
        {
            swap(nums[nums.size() - 1], nums[i]);
            x++;
        }
    }
    sort(nums.begin() + i + 1, nums.end());
    return 0;
}
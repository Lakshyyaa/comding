#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
//13254
//150743
//11269 10 3
{
    vector<int> nums = {1,1,2,6,9,10,3};
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
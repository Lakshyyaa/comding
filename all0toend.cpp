#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{
    // vector<int> nums = {1, 0, 4, 2, 0};
    vector<int> nums = {1,0};
    // Brute: new array fill with non zero and then zeroes
    // vector<int> ans;
    // int c = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] != 0)
    //     {
    //         ans.push_back(nums[i]);
    //     }
    //     else
    //     {
    //         c++;
    //     }
    // }
    // for (int i = 0; i < c; i++)
    // {
    //     ans.push_back(0);
    // }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // Optimal: two pointers just like remove duplicate
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[j] != 0)
        {
            j++;
        }
        if (nums[i] != 0 && i > j)
        {
            swap(nums[i], nums[j]);
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
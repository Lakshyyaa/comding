#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
// n^2 approach:
// begin from left each time and find best way to reach the max one
// int forloop(vector<int> nums, int final)
// {
//     for (int i = 0; i < final; i++)
//     {
//         if (nums[i] >= final - i - 1)
//         {
//             return i;
//         }
//     }
// }
// int main()
// {
//     vector<int> nums = {2,3,1,1,4};
//     int size = nums.size();
//     int j = 0;
//     if (nums.size() == 1)
//     {
//         return 0;
//     }
//     while (1)
//     {
//         int x = forloop(nums, size);
//         j++;
//         if (x == 0)
//         {
//             cout << j;
//             return j;
//         }
//         size = 1 + x;
//     }
// }

// O(n) approach:
int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    int i = 0;
    int jumps = 0;
    while (1)
    {
        int max = -1;
        int maxi=-1;
        for (int x = i; x <= i + nums[i]; x++)
        {
            // cout<<100<<x<<endl;
            if (nums[x] + i >= nums.size() - 1)
            {
                jumps++;
                cout << jumps;
                return jumps;
            }
            else if (max < nums[x])
            {
                max = nums[x];
                maxi=x;
            }
        }
        i = i + maxi;
        cout<<i;
        jumps++;
    }
    return 0;
}
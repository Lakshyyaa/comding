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
    vector<int>nums={1,3,2,5,4};
    int x=0;
    for(int i=nums.size()-1;i>0;i--){
        if(nums[i]>nums[i-1]){
            // swap(nums[i],nums[i-1]);
            x=i;
            break;
            if(nums[i-1]<nums[nums.size()-1]){
                swap(nums[i], nums[nums.size() - 1]);
            }
            else{
                swap(nums[i],nums[i-1]);
            }
        }
    }
    reverse(nums.begin() + x, nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}

// int x = 0;
// int i = nums.size() - 1;
// while (x == 0)
// {
//     i--;
//     if (i < 0)
//     {
//         break;
//     }
//     if (nums[nums.size() - 1] > nums[i])
//     {
//         swap(nums[nums.size() - 1], nums[i]);
//         x++;
//     }
// }
// reverse(nums.begin() + i + 1, nums.end());

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
//132
{
    vector<int> nums = {1,2};
    for
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
    int x=0;
    // for(int i=nums.size()-1;i>0;i--){
    //     if(nums[i]>nums[i-1]){
    //         swap(nums[i],nums[i-1]);
    //         x=i;
    //         break;
    //     }
    // }
    // sort(nums.begin() + x, nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
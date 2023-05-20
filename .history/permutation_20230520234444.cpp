#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
// 13254
// 150743
// 11269 10 3
{
    vector<int> nums = {1, 3, 2, 5, 4};
    for (int i = nums.size() - 1; i >= 0; i--)
    {
    }
    // int x=0;
    // for(int i=nums.size()-1;i>0;i--){
    //     if(nums[i]>nums[i-1]){
    //         if(nums[i-1]<nums[nums.size()-1]){
    //             swap(nums[i-1], nums[nums.size() - 1]);
    //             x = i;
    //             break;
    //         }
    //         else{
    //             swap(nums[i],nums[i-1]);
    //             x = i;
    //             break;
    //         }
    //     }
    // }
    // reverse(nums.begin() + x, nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}

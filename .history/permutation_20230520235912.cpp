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
    int index1=0;
    int index2=nums.size()-1;
    for (int i = nums.size() - 1; i >= 0; i--){
        if(nums[i-1]<nums[i]){
            index1=i-1;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
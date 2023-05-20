#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
// 13254
// 150743
// 11269 10 3
// tell the interviewer the brute force way=> the better=> the optimal way
// finding all premutations using recursion=> knowing the STL next_permutation=> final algo:
{
    vector<int> nums = {1, 3, 2, 5, 4};
    int index1=0;
    int index2=nums.size()-1;
    for (int i = nums.size() - 1; i >= 0; i--){
        if(nums[i-1]<nums[i]){
            index1=i-1;
            break;
        }
    }
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] > nums[index1])
        {
            index2 = i;
            break;
        }
    }
    swap(nums[index1],nums[index2]);
    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

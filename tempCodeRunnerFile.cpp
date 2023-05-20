#include <algorithm>
#include <limits.h>
using namespace std;
int main()
// 13254
// 150743
// 11269 10 3
// tell the interviewer the brute force way=> the better=> the optimal way
// finding all premutations using recursion=> knowing the STL next_permutation=> final algo:
// algo knows that for a dictionary, in the dictionary there's always a pattern where it decreases till end
// index1 is the part of descent start, index2 is the part which is just bigger than index1 to be swapped
// then reversed to get shortest number on the right after swapping
{
    vector<int> nums = {3,2,1};
    int index1=0;
    int index2=nums.size()-1;
    for (int i = nums.size() - 1; i > 0; i--){
        if(nums[i-1]<nums[i]){
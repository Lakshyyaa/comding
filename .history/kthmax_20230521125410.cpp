#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    // brute: either sort and then begin from the end
    // better: first pass find max, second pass find second max by comparing with first max and its own elements(like max)
    // optimal: or do this where we find max, then make all occurences of the max as -1 and find one less than max
    vector<int> nums = {6,6,4};
    int max1=nums[0];
    int max2=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max1){
            max1
        }
    }
    cout<<max2;
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    // brute: either sort and then begin from the end
    // better: first pass find max, second pass find second max by comparing with first max and its own elements(like max)
    // or do this where we find max, then make all occurences of the max as -1 and find one less than max
    vector<int> nums = {6,6};
    int max1=-1;
    int max2=-2;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max1){
            max1=nums[i];
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]==max1){
            nums[i]=-1;
        }
        if(nums[i]>max2){
            max2=nums[i];
        }
    }
    cout<<max2;
    return 0;
}
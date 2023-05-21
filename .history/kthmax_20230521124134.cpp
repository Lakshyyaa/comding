#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    //either sort and then begin from the end
    // or
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
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int nums[6]={2,0,2,1,1,0};
    int size=6;
    for(int i=0;i<size-1;i++){
        if(nums[i]>nums[i+1])
        {
            swap(nums[i],nums[i+1]);
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<nums
    }
    return 0;
}
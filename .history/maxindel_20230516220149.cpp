#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{

    int nums[10] = {};
    int max = INT_MIN;
    int maxi;
    int mini;
    int min = INT_MAX;
    for (int i = 0; i < sizeof(nums)/4; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            maxi = i;
            // cout<<"maxi: "<<maxi<<endl;
        }
        if (nums[i] <= min)
        {
            min = nums[i];
            mini = i;
            // cout<<"mini: "<<mini<<endl;
        }
    }
    if(maxi>mini){
        //maxi+1
        //mini+1+(size-maxi)
        //size-mini
        if(maxi+1<=mini+1+)
    }else{
        //mini+1
        //maxi+1+(size-mini)
        //size-maxi
    }
    return 0;
}
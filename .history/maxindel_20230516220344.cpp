#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{

    int nums[10] = {54,32,67,4,32,67,54,34,67,7};
    int max = INT_MIN;
    int maxi;
    int mini;
    int min = INT_MAX;
    int s=sizeof(nums)/4;
    for (int i = 0; i < s; i++)
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
        cout<<minx(maxi+1)
    }else{
        //mini+1
        //maxi+1+(size-mini)
        //size-maxi
    }
    return 0;
}
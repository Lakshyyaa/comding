#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{

    int nums[0] = {};
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
    cout<<mini<<" "<<maxi;
    return 0;
}
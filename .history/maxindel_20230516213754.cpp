#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    int nums[8]={}
    int max = INT_MIN;
    int maxi;
    int mini;
    int min = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            maxi = i;
        }
        if (nums[i] <= min)
        {
            min = nums[i];
            mini = i;
        }
    }
}
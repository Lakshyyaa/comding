#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 5, 0, 7, 4, 3};
    int x = 0;
    for (int i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            swap(nums[i], nums[i - 1]);
            cout<<nums[i]<<" "<<nums[i-1];
            x = i;
            break;
        }
    }
    cout<<endl;
    // sort(nums.begin() + x, nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
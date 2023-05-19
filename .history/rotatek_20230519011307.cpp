#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k = 3;
    k = k % 7;
    vector<int> v;
    int nums[7] = {1, 2, 3, 4, 5,6,7};
    for (int i = 0; i < k; i++)
    {
        v.push_back(nums[7 - 1 - i]);
    }
    for (int i = 7 - 1; i >= 0; i--)
    {
        if (i - k < 0)
        {
            nums[i] = v[v.size() + i - k];
        }
        else
        {
            nums[i] = nums[i - k];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
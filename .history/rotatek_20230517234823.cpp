#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{

    for (int i = 0; i < k; i++)
    {
        for (int j = 7 - 1; j >= 0; j--)
        {
            int x;
            if (i == nums.size() - 1)
            {
                x = nums[i];
            }
            if (i == 0)
            {
                nums[i] = x;
            }
            else
            {
                nums[i] = nums[i - 1];
            }
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}
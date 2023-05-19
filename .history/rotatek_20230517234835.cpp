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
            if (i == 7 - 1)
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
    for (int i = 0; i < 7; i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}
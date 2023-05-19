#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=3;
    int nums[7]={1,2,3,4,5,6,7};
    for (int i = 0; i < k; i++)
    {
        for (int j = 7 - 1; j >= 0; j--)
        {
            int x;
            if (j == 7 - 1)
            {
                x = nums[i];
            }
            if (j == 0)
            {
                nums[j] = x;
            }
            else
            {
                nums[j] = nums[j - 1];
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int nums[3]={0,1,2,2,1,0,1,1,0,2};
    int n0, n1, n2;
    n0 = 0;
    n1 = 0;
    n2 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] == 0)
        {
            n0++;
        }
        else if (nums[i] == 1)
        {
            n1++;
        }
        else
        {
            n2++;
        }
    }
    for (int i = 0; i < n0; i++)
    {
        cout << 0 << " ";
    }
    for (int i = 0; i < n1; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < n2; i++)
    {
        cout << 2 << " ";
    }
    return 0;
}
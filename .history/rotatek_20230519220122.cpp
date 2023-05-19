#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k = 3;
    k = k % 7;
    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    int size=7;
    for (int i = 0; i < 7; i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
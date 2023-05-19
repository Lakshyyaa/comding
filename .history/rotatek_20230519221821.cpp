#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void reverse(vector<int> )
int main()
{
    int k = 3;
    k = k % 7;
    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    int size=7;
    for (int i = 0; i < size/2; i++)
    {
        swap(nums[i],nums[size-1-i]);
    }

    return 0;
}
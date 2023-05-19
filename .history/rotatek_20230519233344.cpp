#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void reverse(vector<int> &nums, int a, int b)
{
    int x = 0;
    int r = b - a;
    if (r % 2== 1)
    {
        r = r + 1;
    }
    r = r / 2;
    while (r > 0)
    {
        swap(nums[a + x], nums[b - x]);
        x++;
        r--;
    }
}
int main()
{
    int size = 1;
    int k = 1;
    k = k % size;
    vector<int> v;
    reverse(v, 0, size - 1);
    reverse(v, 0, k - 1);
    reverse(v, k, size - 1);
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void reverse(vector<int> &nums, int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        swap(nums[i],nums[b-i]);
    }
}
int main()
{
    int size = 8;
    int k = 3;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    reverse(v, 0, size - 1);

    return 0;
}
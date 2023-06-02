#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void reverse(vector<int> &nums, int a, int b)
{
    int x = 0;
    int r = b - a;
    if (r % 2 == 1)
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

void rotateby1(vector<int> &nums)
{
    int a = nums[0];
    for (int i = 0; i < nums.size() - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
    nums[nums.size() - 1] = a;
}
// using O(n) space
void rotatebykn(vector<int> &nums, int k)
{
    k = k % nums.size();
    vector<int> t;
    for (int i = 0; i < nums.size(); i++)
    {
        t.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = t[(i + k) % nums.size()];
    }
}
// using O(k) space
void rotatebykk(vector<int> &nums, int k)
{
    k = k % nums.size();
    vector<int> t;
    for (int i = 0; i < k; i++)
    {
        t.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (i >= nums.size() - k)
        {
            nums[i] = t[i - nums.size() + k];
        }
        else
        {
            nums[i] = nums[(i + k) % nums.size()];
        }
    }
}
// using no space
void rotatebyk0(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums, 0, nums.size() - 1);
    reverse(nums, 0, k-1);
    reverse(nums, k, nums.size() - 1);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // rotateby1(v);
    // rotatebykn(v, 5);
    // rotatebykk(v, 2);
    rotatebyk0(v, 3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void reverse(vector<int> &nums, int a, int b)
{
    int x=0;
    while(){
        swap(nums[a+x], nums[])
    }
}
int main()
{
    int size = 6;
    int k = 2;
    k = k % size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    reverse(v, 0, size - 1);
    reverse(v, 0, k - 1);
    // reverse(v, k, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
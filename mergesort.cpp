#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> merged;  // result of left & right vector being merged(sorted)
    int left = low;      // first pointer for left array
    int right = mid + 1; // first pointer for right array
    while (left <= mid && right <= high)
    {
        if (v[left] < v[right])
        {
            merged.push_back(v[left]);
            left++;
        }
        else
        {
            merged.push_back(v[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        merged.push_back(v[left]);
        left++;
    }
    while (right <= high)
    {
        merged.push_back(v[right]);
        right++;
    }
    // pushing this merged array in the main array
    int x = 0;
    for (int i = low; i <= high; i++)
    {
        v[i] = merged[x];
        x++;
    }
}
void mergesort(vector<int> &v, int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(v, low, mid);
    mergesort(v, mid + 1, high);
    // after both the above calls are returned when low==high,
    // they are merged by the call below
    merge(v, low, mid, high);
}
int main()
{
    vector<int> v = {7, 3, 7, 9, 4, 2, 2, 4, 5, 6, 8, 9, 0, 9, 6, 4, 3};
    int n = v.size();
    mergesort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
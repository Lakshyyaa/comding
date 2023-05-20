#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

ksort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int part = partition(v, low, high);
        quicksort(v, low, part - 1);
        quicksort(v, part + 1, high);
    }
}
int main()
{
    vector<int> v = {1, 2, 0, 2, 2, 1, 0, 1, 2, 2, 0, 0, 1, 0};
    quicksort(v, 0, v.size() - 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
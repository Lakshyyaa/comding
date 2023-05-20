#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int partition(vector<int> v, int high, int low)
{
    int part;
    int pivot=v[low];
    int i=low;
    int j=high;
    while (i<j)
    {
        while(v[i]<=pivot &&  i<high)
        {
            i++;
        }
        while (v[i] <= pivot && i < high)
        {
            j--;
        }
    }
    return part;
}
int quicksort(vector<int> &v, int low, int high)
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
    int low = 0;
    int high = v.size() - 1;
    quicksort(v, 0, v.size() - 1);
    // quicksort(v, low, partition - 1);
    // quicksort(v, partition + 1, high);
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (v[i] <= pivot && i < high)
        {
            i++;
        }
        while (v[j] > pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    swap(v[low],v[j]);
    return j;
}
void quicksort(vector<int> &v, int low, int high)
{
    if(low<high){
        int part = partition(v, low, high);
        quicksort(v, low, part - 1);
        quicksort(v, part + 1, high);
    } 
}
int main()
{
    vector<int> v = {7,9,9,7,5,3,1,3,5,8,0,9,7,5,3,32,1,4};
    quicksort(v, 0, v.size() - 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
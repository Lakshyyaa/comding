#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
// int partition(vector<int> &v, int low, int high)
// {
//     int pivot=v[low];
//     int i=low;
//     int j=high;
//     while (i<j)
//     {
//         while(v[i]<=pivot &&  i<high)
//         {
//             i++;
//         }
//         while (v[j] > pivot && j > low)
//         {
//             j--;
//         }
//         if(i<j)
//         {
//             swap(v[i],v[j]);
//         }
//     }
//     swap(v[low], v[j]);
//     return j;
// }
// void quicksort(vector<int> &v, int low, int high)
// {
//     if (low < high)
//     {
//         int part = partition(v, low, high);
//         quicksort(v, low, part - 1);
//         quicksort(v, part + 1, high);
//     }
// }
void quicksort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        
    }
}
int main()
{
    vector<int> v = {1, 2, 0, 2, 2, 1, 0, 1, 2, 2, 0, 0, 1, 0};
    quicksort(v, 0, v.size() - 1);
    return 0;
}
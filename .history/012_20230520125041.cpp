#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int quicksort(vector<int> &v, int low, int high)
{
    int pivot=v[low];
    int i=low;
    int j=high;
    if(low<high)}
    
}
int main()
{
    vector<int> v = {1, 2, 0, 2, 2, 1, 0, 1, 2, 2, 0, 0, 1, 0};
    int low = 0;
    int high = v.size() - 1;
    int partition = quicksort(v, 0, v.size() - 1);

    return 0;
}
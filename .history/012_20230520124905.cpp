#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int quicksort(int pivot, vector<int> &v, int low, int high)
{
}
int main()
{
    vector<int> v = {1, 2, 0, 2, 2, 1, 0, 1, 2, 2, 0, 0, 1, 0};
    int low = 0;
    int high = v.size() - 1;
    int partition = quicksort(v[low], v, 0, v.size() - 1);

    return 0;
}
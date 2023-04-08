#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {9, 2, 3, 4, -1, 2, 3, -4, -5};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < 9; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
        else if (mini > arr[i])
        {
            mini = arr[i];
        }
    }
    // but if the array has negative elements, we find maxi by adding absolute values of min and max element
    // and +1 added to accoutn for 0

    int freq[abs(maxi) + 1 + abs(mini)] = {0};
    for (int i = 0; i < 9; i++)
    {
        freq[arr[i] - mini]++;
    }
    for (int i = 0; i < abs(maxi) + 1 + abs(mini); i++)
    {
        cout << freq[i] << " ";
    }
    return 0;
}

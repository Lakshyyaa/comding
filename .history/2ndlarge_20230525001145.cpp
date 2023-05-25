#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    // brute: either sort and then begin from the end
    // better: first pass find max, second pass find second max by comparing with first max and its own elements(like max)
    // optimal: one pass, for each check if its first or second max and ensure first!=second max
    vector<int> arr = {642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642};
    int max1 = -1;
    int max2 = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>max1){
            max1=arr[i];
        }
        if(max2)
        // if (arr[i] > max1)
        // {
        //     max2 = max1;
        //     max1 = arr[i];
        // }
        // else if (arr[i] > max2 && arr[i] != max1)
        // {
        //     max2 = arr[i];
        // }
    }
    cout << max2;
    return max2;
}
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
    for (int i = 0; i < arr.size(); i++)
    {
    }
    return max2;
}
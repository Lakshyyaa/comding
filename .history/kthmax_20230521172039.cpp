#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
   each check if its first or second max and ensure first!=second max
    vector<int> nums = {642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642, 642};
    int k = 2;
    k = k % nums.size();
    int max = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return 0;
}
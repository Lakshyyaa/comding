#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    vector<int>nums={-1,0,1,2,-1,-4};
    //-4 -1 -1 0 1 2
    int sum=0;
    sort(nums.begin(),nums.end());
    return 0;
}
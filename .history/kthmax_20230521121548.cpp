#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> nums = {6, 2, 5, 4, 1, 3, 0};
    int k = 2;
    k = k % nums.size();
    
    return 0;
}
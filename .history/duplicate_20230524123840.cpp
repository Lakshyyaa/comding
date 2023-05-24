#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
//endcases
//more testcases
//past questions
//more pointers
using namespace std;
int main(){
    // vector<int>nums={2,2,2,2,2};
    vector<int>nums={1,3,4,3,2};
    int slow=nums[0];
    int fast=nums[0];
    slow=nums[slow];
    fast=nums[nums[fast]];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[nums[fast]];
    }
    fast=nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    cout,<slow;
    return 0;
}
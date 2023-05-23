#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int forloop(vector<int>nums, int final){
    for(int i=0;i<final;i++){
        if(nums[i]>=final-i-1){
            // cout<<i<<" ";
            return i;
        }
    }
}
int main()
{
    vector<int> nums = {1, 3, 6, 1, 3, 6, 8, 4, 3, 4, 5, 9};
    int size=nums.size();
    int j=0;
    while(1){
        int x=forloop(nums, size);
        j++;
        if(x==0){
            cout<<j;
            return j;
        }
        size=1+x;
    }
    return 0;
}
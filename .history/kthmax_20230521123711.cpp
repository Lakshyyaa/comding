#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> nums = {6, 2, 5, 4, 1, 3, 0};
    int k = 2;
    vector<int>v;
    k = k % nums.size();
    int max=-1;
    int max2
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
            v.push_back(nums[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
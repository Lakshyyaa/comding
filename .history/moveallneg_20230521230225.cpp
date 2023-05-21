#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {99};
    vector<int> lol;
    int x = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            lol.push_back(nums[i]);
        }
        else if(nums[i]>0){
            if(nums[x]<0){
                swap(nums[i], nums[x]);
                x++;
            }
        }
        if(nums[x]>=0){
            x++;
        }
    }
    for(int i=0;i<lol.size();i++){
        nums[i+x]=lol[i];
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
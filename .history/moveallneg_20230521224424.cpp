#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    vector<int> lol;
    int x = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] >= 0)
    //     {
    //         lol.push_back(nums[i]);
    //     }
    //     else if (nums[i] < 0)
    //     {
    //         if(nums[x]<0){
    //         }
    //         else{
    //             swap(nums[i], nums[x]);
    //             x++;
    //         }
    //     }
    //     if (nums[x] < 0)
    //     {
    //         x++;
    //     }
    // }
    // for (int i = x; i < nums.size(); i++)
    // {
    //     nums[i]=lol[i-x];
    // }
    // for(int i=0;i<nums.size();i++)
    // {
    //     cout<<nums[i]<<" ";
    // }
    // for(int i=0;i<lol.size();i++)
    // {
    //     cout<<lol[i]<<" ";
    // }

    
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            lol.push_back(nums[i]);
        }
        else if(nums[i]>0){
            
        }
    }
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
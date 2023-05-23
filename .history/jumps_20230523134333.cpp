#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int jumper(vector<int>nums, int final, int jumped){
    for(int i=0;i<final;i++){
        if(nums[i]>=final-i){
            int index=i;
            jumped++;
            if(index==0){
                return jumped;
            }
            else{
                jumper(nums,index,jumped);
            }
        }
    }
}
int forloop(vector<int>nums, int final){
    for(int i=0;i<final;i++){
        if(nums[i]<=final-i){

        }
    }
}
int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    // cout<<jumper(nums,nums.size()-1,0);
    int j=0;
    while(1){
        j
    }
    return 0;
}
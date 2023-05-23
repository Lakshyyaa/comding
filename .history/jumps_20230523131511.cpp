#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int jumper(vector<int>nums, int final, int jumped){
    for(int i;i<final;i++){
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

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    int size = nums.size();
    int x=0;
    cout<<jumper(nums,size-1,0);
    
    return 0;
}
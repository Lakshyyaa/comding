#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main(){
    vector<int> nums={2,3,1,1,4};
    int size=nums.size();
    for(int i=size-1;i>-1;i--){
        if(nums[i]>=size-i-1){
            max=nums[i];
        }
    }
    return 0;
}
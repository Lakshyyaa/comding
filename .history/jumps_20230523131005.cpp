#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    int size = nums.size();
    int x=0;
    for(int i=0;i<size;i++){
        if(nums[i]>=size-1-i){
            x++;
            if(i==0){
                cout<<x;
                return x;
            }
            else{
                //i=0;i<i
            }
        }
    }
    return 0;
}
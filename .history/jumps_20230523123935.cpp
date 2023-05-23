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
    int max=-1;
    for(int i=0;i<size;i++){
        if(nums[i]>=size-1-i){
            cout<<nums[i];
            break;
        }
    }
    return 0;
}
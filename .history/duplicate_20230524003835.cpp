#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main(){
    vector<int>nums={1,3,4,2,2};
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(i==j){
                continue;
            }
            if(nums[i]==nums[j])
            {
                cout<<nums[i]<<" :"<<i<<endl;
            }
        }
    }
    return 0;
}
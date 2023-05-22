#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    for(int i=0;i<nums.size();i++){
        for(int j=0;i<nums.size();j++){
            for(int k=0;k<nums.size();k++){
                if(nums[i]+nums[j]+nums[k]==0 && i!=j && j!=k && ){
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                }
            }
        }
    }
    return 0;
}
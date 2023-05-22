#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main(){
    int target=0;
    
    vector < int >nums= {1, 0, -1, 0, -2, 2};
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int a=j+1;
            int b=nums.size()-1;
            while(a<b){
                int sum=nums[i]+nums[j]+nums[a]+nums[b];
                if(nums[i]+nums[j]+nums[a]+nums[b]){
                    
                }
            }
        }
    }
    return 0;
}
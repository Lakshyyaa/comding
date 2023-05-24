#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
//endcases
//more testcases
//past questions
//more pointers
using namespace std;
int main(){
    vector<int>nums={2,2,2,2,2};
    // vector<int>nums={1,3,4,2,2};
    int sum=0;
    int n=nums.size()-1;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];        
    }
    for(int i=1;i<=n;i++){
        sum=sum-i*(n+1)
        if(sum){
            cout<<i+1;
        }
    }
    return 0;
}
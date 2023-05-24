#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main(){
    vector<int>nums={2,2,2,2,2};
    int n=nums.size()-1;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
    }
    cout<<sum-n*(n+1)/2;
    return 0;
}
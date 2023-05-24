#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main(){
    vector<int>nums={1,3,4,2,2};
    int n=nums.size()-1;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
    }
    cout<<n*(n+1)/2;
    return 0;
}
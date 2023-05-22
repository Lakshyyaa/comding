#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    vector<int>nums={-1,0,1,2,-1,-4};
    int sum=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        int a=0;
        int b=nums.size()-1;
        while(a<b){
            if(sum>nums[i]+nums[a]+nums[b]){
                a++;
            }
            else if (sum < nums[i] + nums[a] + nums[b]){
                b--;
            }
            else if (sum == nums[i] + nums[a] + nums[b]){
                cout<<a<<" "<<i<<" "<<b<<endl;
                cout << nums[a]<<endl<< nums[i]<<endl<< nums[b];
                return 0;
            }
        }
    }
    return 0;
}
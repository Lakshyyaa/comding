#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    vector<int>nums={0,1,1};
    int sum=0;
    sort(nums.begin(),nums.end());
    vector<int>
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
            else{
                if (i != a && a != b && b != i){
                    cout << nums[i] << " " << nums[a] << " " << nums[b] << endl;
                }
                a++;
                b--;
            }
        }
    }
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    return 0;
}
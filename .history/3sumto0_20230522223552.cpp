#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    // brute: n^3 way and use a set to store unique arrays, in the end store the set in the answer vector
    
    // better: n^2 hashing, as shown below
    // for hashing we take sums of two and try to look for the element which is equal to -sum as we need the
    // net sum to be 0.
    vector<int>nums={-1,0,1,2,-1,-4};
    int sum=0;
    sort(nums.begin(),nums.end());
    //-4, -1, -1, 0, 1, 2
    for(int i=0;i<nums.size();i++){
        int a=i+1;
        int b=nums.size()-1;
        while(a<b){
            if(sum<nums[i]+nums[a]+nums[b]){
                b--;
            }
            else if (sum>nums[i]+nums[a]+nums[b]){
                a++;
            }
            else{
                if(a!=i && i!=b && b!=a){
                    cout<<nums[i]<<" "<<nums[a]<<" "<<nums[b]<<" i: "<<i<<endl;
                }
                a++;
                b--;
            }
        }
    }
    return 0;
}

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
    //-2 -1 0 0 1 2
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i-1])
        for(int j=i+1;j<nums.size();j++){
            int a=j+1;
            int b=nums.size()-1;
            while(a<b){
                int sum=nums[i]+nums[j]+nums[a]+nums[b];
                if(nums[i]+nums[j]+nums[a]+nums[b]>target){
                    b--;
                }
                else if (nums[i] + nums[j] + nums[a] + nums[b] < target){
                    a++;
                }
                else{
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[a]<<" "<<nums[b]<<endl;
                    a++;
                    b--;
                    while(a<b && nums[a]==nums[a-1]){
                        a++;
                    }
                    while (a < b && nums[b] == nums[b+ 1])
                    {
                        b--;
                    }
                }
            }
        }
    }
    return 0;
}
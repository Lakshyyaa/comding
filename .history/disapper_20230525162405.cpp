#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main(){
    vector<int>nums={4,3,2,7,8,2,3,1};
    int n=nums.size();
    vector<int>ans;
    //O(n^2) method: look for one element per pass
    // for(int i=0;i<n;i++){
    //     int found;
    //     for(int j=0;j<n;j++){
    //         if(i+1==nums[j]){
    //             found++;
    //         }
    //     }
    //     if(found==0){
    //         ans.push_back(i+1);
    //     }
    //     found=0;
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    return 0;
}
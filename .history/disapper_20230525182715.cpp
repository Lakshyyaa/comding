#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = nums.size();
    vector<int> ans;
    // O(n^2) method: look for one element per pass
    //
    //  for(int i=0;i<n;i++){
    //      int found;
    //      for(int j=0;j<n;j++){
    //          if(i+1==nums[j]){
    //              found++;
    //          }
    //      }
    //      if(found==0){
    //          ans.push_back(i+1);
    //      }
    //      found=0;
    //  }
    //  for(int i=0;i<ans.size();i++){
    //      cout<<ans[i]<<" ";
    //  }

    // O(n) with space O(n) method: store in a map in first pass, search the map in second pass
    //
    //  map<int,int>m;
    //  for(int i=0;i<nums.size();i++){
    //      m[nums[i]]=1;
    //  }
    //  for(int i=0;i<m.size();i++){
    //      if(m[i+1]==0){
    //          ans.push_back(i+1);
    //      }
    //  }
    //  for(int i=0;i<ans.size();i++){
    //      cout<<ans[i]<<" ";
    //  }

    // O(n) with no space method:
    // intuition: Since O(n) given we cannot check all in a single pass, we need extra space to mark them
    // no extra space allowed, so use the same array itself to mark.
    // in this array only the ones present can be marked and not present cant be as they are not present
    // and in the next pass we check their indices
    // so just like the above one we had to mark and then check by indices, we will mark here and also
    // check by indices but to mark here we just make them negative
    // {4, 3, 2, 7, 8, 2, 3, 1}
    for (int i = 0; i < nums.size(); i++)
    {
        int x;
        if (nums[i] < 0)
        {
            x = -1 * nums[i] - 1;
        }
        else
        {
            x = nums[i] - 1;
        }
        if(nums[x]>0){
            nums[x] = -1 * nums[x];
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            
        }
    }
    return 0;
}
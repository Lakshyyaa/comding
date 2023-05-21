#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    vector<int>v;
    vector<int>nums1={4,9,5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    map<int, int> m;
    for (int i = 0; i < nums1.size(); i++)
    {
        m[nums1[i]]=1;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        if (m[nums2[i]] == 1)
        {
            m[nums2[i]]=2;
        }
    }
    for(int i=0;i<nums1.size();i++){
        if(m[i]==2){
            v.push_back(i);
        }
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}
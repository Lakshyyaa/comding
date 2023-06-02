#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{
    vector<int> u;
    vector<int> nums1 = {2, 2, 3, 4, 5};
    vector<int> nums2 = {1, 1, 2, 3, 4};
    // Brute: use a set that stores unique in order by putting both arrays in
    // a set, then putting the set in answer vector
    // space m+n time=
    // set<int> s;
    // for(int i=0;i<nums1.size();i++){
    //     s.insert(nums1[i]);
    // }
    // for(int i=0;i<nums2.size();i++){
    //     s.insert(nums2[i]);
    // }
    // for(auto it:s){
    //     u.push_back(it);
    // }
    // for(int i=0;i<u.size();i++){
    //     cout<<u[i]<<" ";
    // }
    //
    // Optimal: since the arrays are sorted
    // use two pointers and keep comparing for both
    int n = nums1.size();
    int m = nums2.size();
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        while (i < n - 1 && nums1[i] == nums1[i + 1])
        {
            i++;
        }
        while (j < m - 1 && nums2[j] == nums2[j + 1])
        {
            j++;
        }
        if (nums1[i] < nums2[j])
        {
            u.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            u.push_back(nums2[j]);
            j++;
        }
        else
        {
            u.push_back(nums2[j]);
            j++;
            i++;
        }
    }
    while (i < n)
    {
        while (i < n - 1 && nums1[i] == nums1[i + 1])
        {
            i++;
        }
        u.push_back(nums1[i]);
        i++;
    }
    while (j < m)
    {
        while (j < m - 1 && nums2[j] == nums2[j + 1])
        {
            j++;
        }
        u.push_back(nums2[j]);
        j++;
    }
    for (int i = 0; i < u.size(); i++)
    {
        cout << u[i] << " ";
    }
    return 0;
}
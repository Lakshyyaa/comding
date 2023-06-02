#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {4, 4, 8, 9, 9};
    // Brute: using a map space is O(m)
    // map<int, int> m;
    // for (int i = 0; i < nums1.size(); i++)
    // {
    //     m[nums1[i]]=1;
    // }
    // for (int i = 0; i < nums2.size(); i++)
    // {
    //     if (m[nums2[i]] == 1)
    //     {
    //         m[nums2[i]]=2;
    //     }
    // }
    // for(int i=0;i<m.size();i++){
    //     if(m[i]==2){
    //         v.push_back(i);
    //     }
    // }
    // Optimal: since they are sorted, use two pointers like union
    int i = 0;
    int j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        while (i < nums1.size() - 1 && nums1[i] == nums1[i + 1])
        {
            i++;
        }
        while (j < nums2.size() - 1 && nums2[j] == nums2[j + 1])
        {
            j++;
        }
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            v.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    map<int, int> m;
    for (int i = 0; i < nums1.size(); i++)
    {
        m[nums1[i]] = 1;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        m[nums2[i]] == 1;
    }
    cout << m.size();
    return 0;
}
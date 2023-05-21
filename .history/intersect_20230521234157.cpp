#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums1={1,2,3,4,9,5,6,8,5};
    vector<int>nums2={8,4,3,22,2,9,0,0,0,0}
    map<int, int> m;
    for (int i = 0; i < nums1.size(); i++)
    {
        map[i] = 0;
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        if (map[i] == 0)
        {
            map[i]++;
        }
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        if (map[i] == 1)
        {
            map[i]++;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,3,3,4,5,5,6,7,8,8,8};
    // vector<int>v={1,2,3,3,3,4,5,6};
    // vector<int>v={2,2,2,3,3,3,3,4,4,4,8,8,8};
    // Brute: Using a set that stores all unique elements
    // then putting them in array, Time: O(nlogn) as insertion in set is logn
    // Space: O(n) for set
    // set<int> s;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     s.insert(v[i]);
    // }
    // int x = 0;
    // for (auto it : s)
    // {
    //     v[x] = it;
    //     x++;
    // }
    //
    // Optimal: Two pointers approach
    // One pointer traverses the array 
    // Other pointer stays at beginning and moves with the unique ones
    // keep traversing and the moment one found different than the previous one, replace
    // int i=0;
    // for(int j=i;j<v.size();j++){
    //     if(v[j]!=v[i]){
    //         v[i+1]=v[j];
    //         i++;
    //     }
    // }
    // cout<<i+1;
    // Other optimal approach: Find the one where duplicate occurs,
    // replace this with one where next bigger number occurs
    // int i = 0;
    // int j = 1;
    // while (j < v.size())
    // {
    //     j++;
    //     if (v[i] > v[i - 1])
    //     {
    //         i++;
    //     }
    //     if (v[i] < v[j] && j < v.size())
    //     {
    //         v[i] = v[j];
    //     }
    // }
    // cout << i << endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
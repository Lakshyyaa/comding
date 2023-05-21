#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, -4, 2, -9, 3, -5, -2, -2, 5, 5, -2, 42, 7, 43, -25, 6, -4, 3, 6, 5, -47, -5, 6};
    sort(v.begin(), v.end());
    int a=0;
    int b=v.size()-1;
    while(a<b)
    {
        if(v[b]>0){
            b--;
        }
        if(v[a]<0)
        {
            a++;
        }
        swap(nums[a],nums[b]);
    }
    
    return 0;
}
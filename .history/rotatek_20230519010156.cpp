#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=2;
    k=k%1;
    vector<int>v;
    int nums[5]={1,2,3,4,5};
    for(int i=0;i<k;i++)
    {
        v.push_back(nums[5-1-i]);   
    }
    for(int i=0;i<5;i--)
    {
        if(i-k<0){
            nums[i]=v[v.size()+i-k];
        }
        else{
            nums[i] = nums[i - k];
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
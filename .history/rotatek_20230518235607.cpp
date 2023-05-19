#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=1;
    vector<int>v;
    int nums[1]={1};
    for(int i=0;i<1;i++)
    {
        v.push_back(nums[v.size()-1]);   
    }
    for(int i=0;i<1;i++)
    {
        if(i-k<0){
            nums[i]=v[v.size()+i-k];
        }
        else{
            nums[i] = v[i - k];
        }
    }
    for(int i=0;i<1;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
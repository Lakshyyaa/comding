#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int minx(int a, int b){
    if(a>b){
        return b;
    }
    return a;
}
int main()
{

    int nums[10] = {54,32,67,4,32,67,54,34,67,7};
    int max = INT_MIN;
    int maxi;
    int mini;
    int min = INT_MAX;
    int s=sizeof(nums)/4;
    for (int i = 0; i < s; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            maxi = i;
            // cout<<"maxi: "<<maxi<<endl;
        }
        if (nums[i] <= min)
        {
            min = nums[i];
            mini = i;
            // cout<<"mini: "<<mini<<endl;
        }
    }
    cout<<maxi<<mini<<endl;
    if(maxi>mini){
        //maxi+1
        //mini+1+(size-maxi)
        //size-mini
        cout<<minx(maxi+1,minx(s-mini,mini+1+s-maxi));
    }else{
        //mini+1
        //maxi+1+(size-mini)
        //size-maxi
        cout<<minx(mini+1, maxx(maxi+1+s-mini, s-maxi));
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=3;
    int nums[7]={1,2,3,4,5,6,7};
    for (int i = 6; i <7 ; i++)
    {
        if(i-k<0)
        {
            int x=k-i;
            cout<<nums[7-x]<<' ';
        }
        else{
            cout << nums[i - k] << ' ';
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=3;
    int nums[7]={1,2,3,4,5,6,7};
    for (int i = 0; i <7 ; i++)
    {
        if(i+k>6)
        {
            int x=k+i-6;
            cout<<nums[]<<' ';
        }
        else{
            cout << nums[i + k] << ' ';
        }
    }
    return 0;
}
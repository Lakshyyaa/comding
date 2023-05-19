#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int k=3;
    int nums[7]={1,2,3,4,5,6,7};
    for (int i = 6; i >=0 ; i--)
    {
        cout<<nums[i-k];
    }
    return 0;
}
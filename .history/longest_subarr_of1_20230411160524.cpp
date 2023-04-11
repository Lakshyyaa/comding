#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[9]={0,1,1,1,0,1,1,0,1};
    int n=9;
    int sum=0;
    int index;
    for(int i=0;i<9;i++)
    {
        if(arr[i])
        {
            index=i;
            sum++;
        }
    }
    return 0;
}
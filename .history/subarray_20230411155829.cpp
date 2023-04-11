#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int k=3;
    for(int i=0;i<n-k+1;i++)
    {
        cout<<arr[i]+arr[i+1]+arr[i+2]<<" "
    }
    return 0;
}
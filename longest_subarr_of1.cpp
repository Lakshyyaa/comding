#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[9]={0,1,1,1,0,1,1,0,1};
    int n=9;
    int sum=0;
    int index;
    int max=-100;
    int count=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i])
        {
            sum++;
        }
        else if(arr[i]==0 & count==0)
        {
            sum++;
            count++;
        }
        else{
            if(sum>max)
            {
                index = i-sum;
                max=sum;
            }
            sum=0;
            count=0;
        }
    }
    cout<<max<<" "<<index;
    return 0;
}
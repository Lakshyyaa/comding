#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n,a;
    int x,y;
    cin>>m>>n>>a;
    if(m%a==0)
    {
        x=m/a;
    }
    else{
        x=m/a+1;
    }
    if (n%a==0)
    {
        y=n/a;
    }
    else
    {
        y=n/a+1;
    }
    cout<<x*y;
    return 0;
}
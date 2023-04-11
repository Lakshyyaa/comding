#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int maxp,minp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x>maxi)
        {
            maxi=x;
            maxp=i;
        }
        if(x<=mini)
        {
            mini=x;
            minp=i;
        }
        v.push_back(x);
    }
    if(maxp<=minp)
    {
        cout <<maxp+n-minp-1;
    }
    else{
        cout << maxp+n-minp-2;
    }
    return 0;
}

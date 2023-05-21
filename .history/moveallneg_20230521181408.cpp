#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {-1,-2,-3,-4};
    sort(v.begin(), v.end());
    int a=0;
    int b=v.size()-1;
    while(a<b)
    {
        if(v[b]>0){
            b--;
        }
        if(v[a]<0)
        {
            a++;
        }
        swap(v[a],v[b]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int main()
{
    vector<int> v = {1, 2, 0, 2, 2, 1, 0, 1, 2, 2, 0, 0, 1, 0};
    int low=0;
    int mid=0;
    int high=v.size()-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[mid]==0)
        {
            swap(v[mid],v[low]);
            mid++;
            low++;
        }
        else if(v[mid]==1)
        {

        }
        else if(v[mid==2])
        {

        }
        else if(mid==high)
        {
            return;
        }
    }
    return 0;
}
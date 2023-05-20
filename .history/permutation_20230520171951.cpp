#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = v.size() - 1; i >0; i--)
    {
        if(v[v.size()-1]>v[i-1]){
            swap(v[i],v[i-1]);
        }
    }
    return 0;
}
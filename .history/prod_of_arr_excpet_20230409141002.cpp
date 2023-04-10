#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v={1,2,3,4};
    vector<int>out;
    for(int i=0;i<4;i++)
    {
        int prod=1;
        for(int j=0;j<4;j++)
        {
            if(i!=j)
            {
                prod=prod*arr[j];
            }
        }
    }
    return 0;
}
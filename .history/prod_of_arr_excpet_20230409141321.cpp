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
                prod=prod*v[j];
            }
        }
        out.push(back)=prod;
        cout<<out[i]<<" ";
    }
    // cout<<out[0]<<" "<<out[1]<<" "<<out[2]<<" "<<out[3];
    return 0; 
}
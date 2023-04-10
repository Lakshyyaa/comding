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
        out.push_back(1);
        if(i-1>=0)
        {
            out[i]=out[i]*(v[i-1]);
        }
        if(i+1<4)   
        {
            out[i]=out[i]*v[i+1];
        }
    }
   
    // cout<<out[0]<<" "<<out[1]<<" "<<out[2]<<" "<<out[3];
    return 0; 
}
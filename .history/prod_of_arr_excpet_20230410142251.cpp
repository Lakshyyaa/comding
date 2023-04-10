//  to be done with o(1) space
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
    }
    
    // vector<int>r;  
    // vector<int>l;  
    // vector<int>x;  
    // for(int i=0;i<4;i++)
    // {
    //     if(i==0)
    //     {
    //         l.push_back(1);
    //     }
    //     else{
    //         l.push_back(l[i-1]*v[i-1]);
    //     }
    // }
    // for(int i=0;i<4;i++)
    // {
    //     r.push_back(1);
    // }
    // for(int i=3;i>=0;i--)
    // {
    //     if(i!=3)
    //     {
    //         r[i]=r[i+1]*v[i+1];
    //     }
    // }
    // for(int i=0;i<4;i++)
    // {
    //     x.push_back(l[i]*r[i]);
    //     cout<<x[i]<<" ";
    // }
    return 0; 
}
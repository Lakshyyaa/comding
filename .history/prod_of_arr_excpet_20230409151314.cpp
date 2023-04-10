#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v={1,2,3,4};
    vector<int>r;  
    vector<int>l;  
    for(int i=0;i<4;i++)
    {
        if(i==0)
        {
            l.push_back(1);
        }
        else{
            l.push_back(l[i-1]*v[i-1]);
        }
        cout<<l[i]<<" ";
    }
    for(int i=0;i<3;i++)
    {
        r.push_back(1);
    }
    for(int i=3;i>=0;i--)
    {
        if(i!=3)
        {
            r[i]=r[i+1]*v[i+1]
        }
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<l[i]<<"  ";
    // }
    
    return 0; 
}
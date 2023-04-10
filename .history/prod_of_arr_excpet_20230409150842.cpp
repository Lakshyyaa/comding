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
            l.push_back(l[i-1]*l[i]);
        }
    }
    for
    return 0; 
}
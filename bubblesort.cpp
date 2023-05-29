#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{
    int x=0;
    vector<int> v = {1,2,3,4,5,6,7,8,9,11,10,12,13,14};
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int c = 0;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                c++;
            } 
            x++;
        }
        if(c==0){
            cout<<x;
            return 0;
            //which means already sorted and runs only for n-1 times
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<"  ";
    // }
    return 0;
}
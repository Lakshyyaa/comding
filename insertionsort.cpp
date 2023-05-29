#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{ 
    int c=0;
    vector<int>v={1,2,3,4,5,6,7,8,9};
    int n=v.size();
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && v[j-1]>v[j]){
            swap(v[j-1],v[j]);
            j--;
            c++;
            cout<<c<<" ";
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
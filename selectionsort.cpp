#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main(){
    vector<int>v={6,2,7,9,4,2,1,5,8,8,5,3};
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int mini=v[i];
        for(int j=i;j<n;j++){
            if(v[j]<v[mini]){
                mini=j;
            }
        }
        swap(v[i], v[mini]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
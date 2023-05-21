#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    // brute: either sort and then begin from the end
    // better: first pass find max, second pass find second max by comparing with first max and its own elements(like max)
    // optimal: or do this where we find max, then make all occurences of the max as -1 and find one less than max
    vector<int> arr = {7,9,8};
    // vector<int> arr={1,2,3};
    int max1=INT_MIN;
    int max2 = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]<max2 && )
        // if(arr[i]>max2){
        //     if(arr[i]<max1){
        //         max2=arr[i];
        //     }
        // }
    }
    cout<<max2;
    return max2;
}
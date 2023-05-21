#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    // brute: either sort and then begin from the end
    // better: first pass find max, second pass find second max by comparing with first max and its own elements(like max)
    // optimal: or do this where we find max, then make all occurences of the max as -1 and find one less than max
    vector<int> arr = {28,43,26,65,60,54,51,35,42,48,33,40,58,38,64,47,44,49,46,25,57,39,55,45,29,32,61,53,31,36,56 ,63 ,30 ,52 ,27 ,34 ,50 ,41 ,37 ,66 ,62,59};
    int max1=INT_MIN;
    int max2 = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
        if(arr[i]>max2){
            if(arr[i]<max1){
                max2=arr[i];
            }
        }
    }
    return max2;
}
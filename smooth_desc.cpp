#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]-arr[i+1]==1)
        {
            count++;
            // cout << "sex   ";
        }
        else
        {
            // cout<<"sex   ";
            sum=sum+count*(count+1)/2;
            count=0;
        }
    }
    cout<<sum+n;
    return 0;
}
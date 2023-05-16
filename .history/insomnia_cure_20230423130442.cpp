#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    int d;
    cin>>d;
    int dd=d;
    int ans=d-(dd/l+dd/k+dd/m+dd/n)+(dd/(k*l)+dd/(l*m)+dd/(m*n)+dd/(k*m))-(dd/(k*l*m)+dd/(l*m*n))+dd/(k*l*n*n);
    cout<<ans;
    return 0;
}
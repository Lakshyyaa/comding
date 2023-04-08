// also do prefix array question
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 6;
    string s = "abcdefghijklmnopqrstuvwxyz";
    string word = "hello";
    int sum = 0;
    int count = n;
    int a = 0;
    int b = 0;
    while (count > 0)
    {
        for (int i = 0; i < 26; i++)
        {
            if (s[i] == word[n - count])
            {
                if (n-count==0)
                {
                    a=i;
                    b=i;
                }
                else
                {
                    b = a;
                    a = i;
                }
            }
        }
        sum = sum + abs(b - a);
        cout<<"current: "<<sum<<" "<<a<<' '<<b<<' '<<word[n-count]<<endl;
        count--;
    }
    cout<<sum;
    return 0;
}
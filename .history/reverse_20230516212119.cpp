#include <iostream>
#include <vector>
using namespace std;
int main()
{
    char s[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for (int i = 0; i < sizeof() / 2; i++)
    {
        swap(s[i], s[s.size() - 1]);
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<' ';
    }
    return 0;
}

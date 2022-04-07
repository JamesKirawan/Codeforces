#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long int sum = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if (('0' - s[i])  % 2 == 0)
        {
            sum+=i+1;
        }
    }
    cout<<sum<<endl;
}

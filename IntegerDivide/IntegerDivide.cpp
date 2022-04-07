#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int sum = n + ((n*n - n)/2);
    if (sum % 2 == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        cin>>n;
        long long int a = n;
        for(int i = 1 ; i <= n ; i++)
        {
            if (a == i)
            {
                cout<<a-1<<" "<<a<<" ";
                i++;
                a--;
            }
            else
            {
                cout<<a<<" ";
            }
            a--;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if (n <= 4) cout<<4-n<<endl;
        else if (n % 2 != 0) cout<<1<<endl;
        else cout<<0<<endl;
    }
}

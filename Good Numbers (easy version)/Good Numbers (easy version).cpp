#include <bits/stdc++.h>
using namespace std;
bool solve(int x)
{
    while (x > 0)
    {
        if (x % 3 == 2) return false;
        else x/=3;
    }
    return true;
}
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        bool flag=true;
        while (flag)
        {
            if (solve(n)) flag=false;
            else n++;
        }
        cout<<n<<endl;
    }
}

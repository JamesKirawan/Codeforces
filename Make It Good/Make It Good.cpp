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
        vector <int> a(n+1);
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        int idx = n - 1;
        while (idx > 0 && a[idx-1] >= a[idx])
        {
            idx--;
        }
        while (idx > 0 && a[idx-1] <= a[idx])
        {
            idx--;
        }
        cout<<idx<<endl;
    }
}

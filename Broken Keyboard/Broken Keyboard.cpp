#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string a;
        set <char> res;
        int temp=0;
        cin>>a;
        int i =0;
        while (i < a.size())
        {
            if (a[i] == a[i+1]) i+=2;
            else
            {
                res.insert(a[i]);
                i++;
            }
        }
        for(auto x : res)
        {
            cout<<x;
        }
        cout<<endl;

    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int zero=0;
        int one = 0;
        string s;
        cin>>s;
        for(int i = 0 ; i < a ; i++)
        {
            if (s[i] == '0') zero++;
            else one++;
        }
        int e,f,g;
        e = (zero * b) + (one * c);
        f = (zero * d) + (a * c);
        g = (one * d) + (a * b);
        cout<<min(e,min(f,g))<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        string s;
        cin>>s;
        bool flag = false;
        int k=2e9;
        int cek1 = 0;
        int cek2 = 0;
        int cek3 = 0;
        int track= -1;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if (cek1 == 0 && cek2 == 0 && cek3 == 0)
            {

                if (i == 0)
                {
                    track=i;
                }
                else
                {
                    if (i-track == 2)
                    {
                        track=i-1;
                        i--;
                    }
                    else
                    {
                        track = i -2;
                        i-=2;
                    }

                }
               // cout<<"Ini"<<s[track]<<endl;
                if (s[track] == '1')
                {
                    cek1++;
                    continue;
                }
                else if (s[track] == '2')
                {
                    cek2++;
                    continue;
                }
                else if (s[track] == '3')
                {
                    cek3++;
                    continue;
                }
            }
            if (s[i] == '1')
            {
                if (s[i] != s[track]) cek1++;
                else /*cout<<"INI"<<i<<endl,*/cek1=0,cek2=0,cek3=0;
            }
            else if (s[i] == '2')
            {
                if (s[i] != s[track]) cek2++;
                else cek1=0,cek2=0,cek3=0;
            }
            else if (s[i] == '3')
            {
                if (s[i] != s[track]) cek3++;
                else cek1=0,cek2=0,cek3=0;
            }

            if (cek1 > 0 && cek2 > 0 && cek3 > 0)
            {
                flag=true;
                k = min(k,cek1+cek2+cek3);
                cek1=0;
                cek2=0;
                cek3=0;
            }
        }
        if (flag) cout<<k<<endl;
        else cout<<0<<endl;
    }
}

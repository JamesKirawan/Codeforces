#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int cnt = 0;
        int idx1=-1;
        int idx2=-1;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == '1')
            {
                idx1=i;
                break;
            }
        }
        for(int i = s.size()-1 ; i >= 0 ; i--)
        {
            if (s[i] == '1')
            {
                idx2=i;
                break;
            }
        }
        /*for(int i = idx1 ; i <= idx2 ; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
                if (s[i+1] == '0')
                {
                    one.push_back(cnt);
                   // cout<<cnt<<endl;
                    cnt=0;
                }
            }
            else if (s[i] == '0')
            {
                cnt++;
                if (s[i+1] == '1')
                {
                    zero.push_back(cnt);
                   // cout<<cnt<<endl;
                    cnt=0;
                }
            }
        }*/
        vector <int> zero;
        for(int i = idx1 ; i <= idx2 ; i++)
        {
            if (s[i] == '0') cnt++;
            else if (s[i] == '1' && cnt > 0)
            {
                zero.push_back(cnt);
                cnt=0;
            }
        }
        int acnt=0;
        if (idx1 == -1)
        {
            acnt=0;
        }
        else
        {
            acnt=1;
        }
        int bcnt=0;
        int cntmx = a / b;
        for (auto i : zero)
        {
            if (i <= cntmx)
            {
                bcnt+=i;
            }
            else
            {
                acnt++;
            }
        }
        cout<<acnt * a + bcnt * b <<endl;
       /*for (auto i : zero)
        {
            cout<<i<<" ";
        }*/
        /*
        for (auto i : cntboom)
        {
            if (i <= cntmx)
            {
                bcnt+=i;
            }
            else
            {
                acnt++;
            }
        }*/

       /* for (auto i : zero)
        {
            cout<<i<<" zero ";
        }
        for (auto i : one)
        {
            cout<<i<<" one ";
        }*/
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        /*if (card >= m)
        {
            cout<<m<<endl;
        }
        else
        {
            mxj =min(m,card);
            m-=card;
            k--;
            int test;
            if (m % k != 0)
            {
                test = m/k + 1;
            }
            else
            {
                test = m/k;
            }
            //cout<<mxj<<endl;
            if (test <= 1)
            {
                cout<<mxj-1<<endl;
            }
            else
            {
                int bantu = m/k;
                m-=bantu;
                cout<<mxj-m<<endl;
            }
        }*/
        int n,m,k;
        cin>>n>>m>>k;
        int mxj=0;
        int mnj=0;
        int card = n/k;
        mxj=min(card,m);
        k--;
        m-=mxj;
        if (m % k == 0)
        {
            mnj=m/k;
        }
        else
        {
            mnj = m/k + 1;
        }
        cout<<mxj-mnj<<endl;




    }
}

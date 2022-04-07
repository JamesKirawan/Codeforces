#include <bits/stdc++.h>
using namespace std;
void node(int m , int &l , int &r)
{
    if (m == 1)
    {
        l=1;
        r=1;
        return;
    }
    int l1,r1;
    node(m/2,l1,r1);
    cout<<m%2<<" Modulo"<<endl;
    if (m % 2) l=l1+r1,r=r1;
    else l=l1,r=r1+l1;
    cout<<l1<<" Ini "<<r1<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int m,cnt;
        cin>>cnt>>m;
        int l,r;
        node(m,l,r);
        cout<<cnt<<" "<<l<<"/"<<r<<endl;
    }
    /*
    vector <int> v;
    int tc;
    cin>>tc;
    while (tc--)
    {
        int cnt,n;
        cin>>cnt>>n;
        v.clear();
        while(n != 1)
        {
            if (n % 2) v.push_back(1);
            else v.push_back(0);
            n/=2;
        }
        int l=1,r=1;
        for(int i = v.size() - 1 ; i >= 0 ; i--)
        {
            if(v[i]) l+=r;
            else r+=l;
        }
        cout<<cnt<<" "<<l<<"/"<<r<<endl;
    }
    */
}

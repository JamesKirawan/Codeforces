#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mxN = 265000;
ll sTree[2*mxN]={};
ll lazy[2*mxN]={};
ll arr[mxN];
ll GET(ll p)
{
    return sTree[p] + lazy[p];
}

void LAZY_UPDATE(ll p , ll v)
{
    lazy[p] += v;
}

void PROPAGATE(ll p)
{
    LAZY_UPDATE(2 * p, lazy[p]);
    LAZY_UPDATE(2 * p + 1, lazy[p]);
    lazy[p] = 0;
}

void MERGE(ll p)
{
    sTree[p] = min(GET(2 * p), GET(2 * p + 1));
}
void build (ll p , ll L , ll R)
{
    if (L == R)
    {
        sTree[p] = arr[L];
    }
    else
    {
        build(p*2,L,(L+R)/2);
        build(p*2 + 1 , (L+R)/2 + 1 , R);
        sTree[p] = min(sTree[2*p],sTree[2 * p + 1]);
    }
}
ll query (ll p , ll L , ll R , ll x , ll y)
{
    if (x <= L && y >= R)
    {
        GET(p);
    }
    else
    {
        PROPAGATE(p);
        ll ans = 2e9;
        if (x <= (L+R)/2) ans = min(ans,query(p* 2 , L , (L+R) / 2 , x , y));
        if (y > (L+R)/2) ans = min(ans,query(p * 2 + 1 , (L+R)/ 2 + 1 , R , x , y));
        MERGE(p);
        return ans;
    }
}
void update (ll p , ll L ,ll R ,ll x , ll y , ll v)
{
    if (x <= L && y >= R)
    {
        LAZY_UPDATE(p,v);
    }
    else
    {
        PROPAGATE(p);
        if (x <= (L+R)/2) update(p * 2 , L , (L+R) / 2 , x , y , v);
        if (y > (L+R) /2)update(p * 2 + 1 , (L+R)/ 2 + 1 , R , x , y , v);
        MERGE(p);
    }
}
int toint(string s){
    int ret=0;
    if (s[0]=='-')
    {
        for(int i = 1 ; i < s.size() ; i ++)
        {
            ret=(ret*10)+(s[i]-'0');
        }
        ret*=-1;
    }
    else
    {
        for(int i = 0 ; i < s.size() ; i++)
        {
            ret=(ret*10)+(s[i]-'0');
        }
    }
    return ret;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    build(1,0,n-1);
    string s;
    ll q;
    cin>>q;
    getline(cin,s);
    while(q--)
    {
        getline(cin,s);
        ll space = 0;
        vector <ll> vec;
        string angka="";
        for(ll i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == ' ')
            {
                space++;
                vec.push_back(toint(angka));
                angka="";
            }
            else
            {
                angka+=s[i];
            }
        }
        if (space == 1)
        {
            if (vec[0] > vec[1])
            {
                cout<<min(query(1,0,n-1,vec[0],n-1),query(1,0,n-1,0,vec[1]))<<endl;
            }
            else
            {
                cout<<query(1,0,n-1,vec[0],vec[1])<<endl;
            }
        }
        else
        {
            if(vec[0] > vec[1])
            {
                update(1,0,n-1,vec[0],n-1,vec[2]);
                update(1,0,n-1,0,vec[1],vec[2]);
            }
            else
            {
                update(1,0,n-1,vec[0],vec[1],vec[2]);
            }
        }
    }

}

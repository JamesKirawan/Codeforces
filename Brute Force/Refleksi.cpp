#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>n;
    int a[n+5][n+5];
    int b[n+5][n+5];
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>n>>n;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin>>b[i][j];
        }
    }
    bool identik=true;
    bool horisontal=true;
    bool diagonal_kanan_bawah=true;
    bool diagonal_kiri_bawah=true;
    bool vertikal=true;
    int c=n;
    int d;
    for(int i = 0 ; i < n ; i ++)
    {
        c--;
        d=0;
        for(int j = 0 ; j < n ; j++)
        {
            if (a[i][j] != b[c][d])
            {
                horisontal=false;
            }
            d++;
        }
    }
    c=-1;
    for(int i = 0 ; i < n ; i++)
    {
        c++;
        d=n-1;
        for(int j = 0 ; j < n ; j++)
        {
            if (a[i][j] != b[c][d])
            {
                vertikal=false;
            }
            d--;
        }
    }
    c=-1;
    for(int i = 0 ; i < n ; i++)
    {
        d=0;
        c++;
        for(int j = 0 ; j < n ; j++)
        {
            if (a[i][j] != b[d][c])
            {
                diagonal_kanan_bawah=false;
            }
                d++;
        }
    }
    c=n;
    for(int i = 0 ; i < n ; i++)
    {
        d=n-1;
        c--;
        for(int j = 0 ; j < n ; j++)
        {
            if (a[i][j] != b[d][c])
            {
                diagonal_kiri_bawah=false;
            }
            d--;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if (a[i][j] != b[i][j])
            {
                identik=false;
            }
        }
    }
    if (identik) cout<<"identik\n";
    else if (horisontal) cout<<"horisontal\n";
    else if (vertikal) cout<<"vertikal\n";
    else if (diagonal_kanan_bawah) cout<<"diagonal kanan bawah\n";
    else if (diagonal_kiri_bawah) cout<<"diagonal kiri bawah\n";
    else cout<<"tidak identik\n";
}




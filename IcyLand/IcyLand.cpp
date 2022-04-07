#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , m;
    cin>>n>>m;
    char grid[n][m];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin>>grid[i][j];
        }
    }
    if(n > 2 && m > 2)
    {
        long long int pagar = 0;
        long long int ans = 0;
        for(int i = 1 ; i < n - 1 ; i++)
        {
            for(int j = 1 ; j < m - 1 ; j++)
            {
                if (grid[i][j] == '#') pagar++;
                ans++;
            }
        }
        //cout<<ans<<endl;
        ans = ans - pagar;
        pagar = 0;
        for(int i = 1 ; i < m - 1; i++)
        {
            if (grid[0][i] == '#') pagar++;
            if (grid[n-1][i] == '#') pagar++;
        }
        for(int i = 1 ; i < n - 1; i++)
        {
            if (grid[i][0] == '#') pagar++;
            if (grid[i][m-1] == '#') pagar++;
        }
        if (pagar >= 1)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans+1<<endl;
        }
    }
    else if (n == 2 && m > 2)
    {
        bool pagar[m];
        long long int ans = 0;
        for(int i = 1 ; i < m - 1 ; i++)
        {
            if (grid[0][i] == '#') pagar[i]=true;
            if (grid[1][i] == '#') pagar[i]=true;
        }
        bool flag = true;
        for(int i = 1 ; i < m - 1 ; i++)
        {
            if (!pagar[i])
            {
                flag = false;
                ans++;
            }
        }
        if (flag)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    else if (n > 2 && m == 2)
    {
        bool pagar[n];
        long long int ans = 0;
        for(int i = 1 ; i < n - 1 ; i++)
        {
            if (grid[i][0] == '#') pagar[i]=true;
            if (grid[i][1] == '#') pagar[i]=true;
        }
        bool flag = true;
        for(int i = 1 ; i < n - 1 ; i++)
        {
            if (!pagar[i])
            {
                flag = false;
                ans++;
            }
        }
        if (flag)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    else if (n == 1 && m > 2)
    {
        long long int pagar = 0;
        long long int ans = 0;
        for(int i = 1 ; i < m - 1 ; i++)
        {
            if (grid[0][i] == '#') pagar++;
            ans++;
        }
        ans = ans - pagar;
        cout<<ans<<endl;
    }
    else if (n > 2 && m == 1)
    {
        long long int pagar = 0;
        long long int ans = 0;
        for(int i = 1 ; i < n - 1 ; i++)
        {
            if (grid[i][0] == '#') pagar++;
            ans++;
        }
        ans = ans - pagar;
        cout<<ans<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        //bool kondisi=false; //ambil nilai x
        //if (x*2 > y) kondisi=true; //ambil nilai y
        char grid[n+5][m+5];
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin>>grid[i][j];
            }
        }
        int ans=0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if (j + 1 < m)
                {
                    if (grid[i][j] == '.' && grid[i][j+1] == '.')
                    {
                        if (x * 2 > y){
                            ans+=y;
                        }
                        else{
                            ans+=x*2;
                        }
                        j++;
                    }
                    else if (grid[i][j] == '.')
                    {
                        ans+=x;
                    }
                }
                else if(grid[i][j] == '.')
                {
                   // cout<<i<<" "<<j<<endl;
                    ans+=x;
                }
            }
        }
        cout<<ans<<endl;
    }
}

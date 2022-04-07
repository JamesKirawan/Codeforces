#include <bits/stdc++.h>
using namespace std;
string grid[8];
vector <pair <int , int>> statue;
bool isSafe(int i , int j)
{
    if (i < 0 || j < 0 || i > 7 || j > 7) return false;
    return true;
}
bool dfs(int i , int j)
{

}

int main()
{
    string grid[8];
    for(int i = 0 ; i < 7 ; i++)
    {
        cin>>grid[i];
    }
    for(int i = 0 ; i < 7 ; i++)
    {
        for(int j = 0 ; j < 7 ; j++)
        {
            if(grid[i][j] == 'S'){
                statue.push_back({i,j});
            }
        }
    }
    for(auto x : statue)
    {
        cout<<x<<endl;
    }

}

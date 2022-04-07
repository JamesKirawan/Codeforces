#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <pair<int , int>> data;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            data.push_back(make_pair(n/i,i));
        }
        i++;
    }
    int mn=2e9;
    int cek;
    for(int i = 0 ; i < data.size();i++)
    {
        cek=(data[i].first*2)+(data[i].second*2);
        if (cek < mn) mn=cek;
    }
    cout<<mn<<endl;
}

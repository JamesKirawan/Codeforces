#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cek=0;
    int cek1=-1,cek2=-1;
    while (n >= 0)
    {
        if (n % 4 == 0)
        {
            cek1=n/4;
            cek2=cek;
        }
        n-=7;
        cek++;
    }
    if (cek1 == -1 && cek2 == -1)
    {
        cout<<-1;
    }
    else{
        for(int i = 0 ; i < cek1 ; i++)
        {
            cout<<4;
        }
        for(int i = 0 ; i < cek2 ; i++)
        {
            cout<<7;
        }
    }
}

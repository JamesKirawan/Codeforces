#include <bits/stdc++.h>
using namespace std;
const long long int mxN = 1e9+5;
int main()
{
    int n;
    cin>>n;
    long long int a,b;
    for(int i = 4 ; i <= mxN ; i+=2)
    {
        int d = 0;
        long long int bantu = i + n;
        for(int j = 2 ; j * j <= bantu ; j++)
        {
            if (bantu % j == 0)
            {
                d++;
                break;
            }
        }
        if (d > 0)
        {
            a = bantu;
            b = i;
            break;
        }
    }
    cout<<a<<" "<<b<<endl;
}

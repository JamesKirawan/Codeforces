#include <bits/stdc++.h>
using namespace std;
string inttostr(int x)
{
    stringstream ss;
    ss >> x;
    return ss.str();
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string a=inttostr(n);
        int arr[a.size()];
        int d=0;
        int k=0;
        while (n > 0)
        {
            arr[d]=n%10;
            if (n % 10 != 0)
            {
                k++;
            }
            n/=10;
            d++;
        }
        cout<<k<<endl;
        for(int i = 0 ; i < d ; i++)
        {
            if (arr[i] == 0) continue;
            else
            {
                cout<<arr[i];
                for(int j = 0 ; j < i ; j++)
                {
                    cout<<0;
                }
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        vector <long long int> x;
        vector <long long int> y;
        for(int i = 0 ; i < n ; i++)
        {
            long long int a;
            cin>>a;
            x.push_back(a);
        }
        for(int j = 0 ; j < n ; j++)
        {
            long long int a;
            cin>>a;
            y.push_back(a);
        }
        sort(x.begin(),x.end());
        long long int j=n-1;
        long long int l[n],r[n];
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            while(x[j] - x[i] > k)
            {
                j--;
            }
            r[i] = j - i + 1;
            if (i + 1 < n) r[i] = max(r[i] , r[i+1]);
            cout<<r[i]<<" right "<<endl;
        }
        j = 0;
        for(int i = 0 ; i < n ; i++)
        {
            while (x[i] - x[j] > k)
            {
                j++;
            }
            l[i] = i - j + 1;
            if (i > 0) l[i]=max(l[i] , l[i-1]);
            cout<<l[i]<<" left "<<endl;
        }
        /*
        for(int i = 0 ; i < n -1  ; i++)
        {
            cout<<"Posisi Dot : "<<x[i]<<endl;
            cout<<l[i]<<" Banyaknya "<<r[i]<<endl;
        }
        */

        long long int ans=1;
        for(int i = 0 ; i < n - 1 ; i++)
        {
            ans=max(ans,r[i+1]+l[i]);
        }
        cout<<ans<<endl;


    }
}

#include <bits/stdc++.h>
using namespace std;
long long int prime(long long int n)
{
    int cnt = 0;
	for(long long int i = 2 ; i * i <= n ; i++)
    {
		if(n % i == 0)
        {
            cnt++;
        }
	}
	return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        cin>>n;
        if (prime(n) < 1)
        {
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else
        {
            vector <pair<long long int , long long int>> factor;
            long long int cnt;
            long long int mx = -1e9;
            factor.push_back({1,n});
            long long int temp = n;
            cnt = 0;
            while (!(temp % 2))
            {
                cnt++;
                temp/=2;
            }
            factor.push_back({cnt,2});
            mx=max(cnt,mx);
            for(int it = 3 ; it <= sqrt(n) ; it += 2)
            {
                temp=n;
                cnt = 0;
                while (!(temp % it))
                {
                    cnt++;
                    temp/=it;
                    //cout<<temp<<endl;
                }
                if (cnt >= 1)
                {
                        factor.push_back({cnt,it});
                        mx = max(cnt,mx);
                }
            }
            long long bagi = 1;
            long long int temps = n;
            for (auto it : factor)
            {
                if (it.first == mx)
                {
                    cout<<mx<<endl;
                    for(int i = 0 ; i < mx - 1 ; i++)
                    {
                        cout<<it.second<<" ";
                        temps/=it.second;
                    }
                    bagi = it.second;
                    break;
                }
            }
            cout<<temps<<endl;
        }
    }
}

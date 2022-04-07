#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[15];
    memset(arr,0,sizeof(arr));
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0 ; i < n ; i++)
    {
        if (s[i] == 'L')
        {
            for(int i = 0 ; i < 10 ; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i]=1;
                    break;
                }
            }
        }
        else if (s[i] == 'R')
        {
            for(int i = 9 ; i >=0 ; i--)
            {
                if(arr[i] == 0)
                {
                    arr[i] = 1;
                    break;
                }
            }
        }
        else
        {
            arr[s[i]-'0']=0;
        }
    }
    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<arr[i];
    }

}

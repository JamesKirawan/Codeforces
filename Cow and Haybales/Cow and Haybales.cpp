#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,d;
        cin>>n>>d;
        vector <int> arr;
        for(int i = 0 ; i < n ; i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        for(int i = 0 ; i < d ; i++)
        {
            for(int j = 1 ; j < n ; j++)
            {
                if (arr[j] > 0)
                {
                    arr[j]--;
                    arr[j-1]++;
                    break;
                }
            }
        }
        cout<<arr[0]<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[505];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    long long int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            for(int k = j + 1 ; k < n ; k++)
            {
                if (arr[i] + arr[j] > arr[k] && arr[j] + arr[k] > arr[i] && arr[k] + arr[i] > arr[j])
                {
                    sum++;
                }
            }
        }
    }
    cout<<sum<<endl;

}

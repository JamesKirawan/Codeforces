#include<bits/stdc++.h>
using namespace std;

int main(){
    long int buildings;
    cin >> buildings;

    double a,b;
    double max2 = 0, temp = 0;
    double wx = 0, lx = 0;
    double c,d;
    cin >> c >> d;
    double max1 = c/2 * d;
    double w = c;
    double l = d;

    long int tc = buildings - 1;
    while(tc--){
        cin >> a >> b;
            temp = a/2 * b;
            if (temp > max1){
                max1 = temp;
                wx = w;
                lx = l;
                w = a;
                l = b;
                max2 = max1;

            }
            else{
                max2 = temp;
                wx = a ;
                lx = b ;
            }
    }
    int max3 = min(w,wx)* min(l,lx);
    int max4 = min(w,lx) * min(l,wx);
    int max6 = min(wx,l) * min(lx,w);
    double ans = max(max1, max(double(max3),double(max4)));
    double ans1 = max(ans, double(max6));

    if (ans1 != 0) cout << fixed << setprecision(1) << ans1;
    else cout << fixed << setprecision(1) << max(double((w * lx)/2) ,double((l * wx)/2));
    //cout << w << ' ' << l << " " << wx << " " << lx;





}

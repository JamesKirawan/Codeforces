#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    while(tc--)
    {
        int n;
        cin >> n;
        long long int arr[3] = {};
        arr[1] = 0;
        arr[0] = 0;
        arr[2] = 0;
        switch(n)
        {
            case 0:
                break;
            case 1:
                arr[2] = 1;
                break;
            case 2:
                arr[1] = arr[2] = 1;
                break;
            case 3 :
                arr[1] = arr[0] = arr[2] = 1;
                break;
            case 6 :
                arr[0] = -1;
                arr[1] = -1;
                arr[2] = 2;
                break;
            case 7 :
                arr[0] = 0;
                arr[1] = -1;
                arr[2] = 2;
                break;
            case 8 :
                arr[0] = 0;
                arr[1] = 0;
                arr[2] = 2;
                break;
            case 9 :
                arr[0] = 0;
                arr[1] = 1;
                arr[2] = 2;
                break;
            case 10 :
                arr[0] = 1;
                arr[1] = 1;
                arr[2] = 2;
                break;
            case 11 :
                arr[0] = -2;
                arr[1] = -2;
                arr[2] = 3;
                break;
            case 12 :
                arr[0] = 7;
                arr[1] = 10;
                arr[2] = -11;
                break;
            case 15 :
                arr[0] = -1;
                arr[1] = 2;
                arr[2] = 2;
                break;
            case 16 :
                arr[0] = -511;
                arr[1] = -1609;
                arr[2] = 1626;
                break;
            case 17 :
                arr[0] = 1;
                arr[1] = 2;
                arr[2] = 2;
                break;
            case 18 :
                arr[0] = -1;
                arr[1] = -2;
                arr[2] = 3;
                break;
            case 19 :
                arr[0] = 0;
                arr[1] = -2;
                arr[2] = 3;
                break;
            case 20 :
                arr[0] = 1;
                arr[1] = -2;
                arr[2] = 3;
                break;
            case 21 :
                arr[0] = -11;
                arr[1] = -14;
                arr[2] = 16;
                break;
            case 24 :
                arr[0] = -2901096694;
                arr[1] = -15550555555;
                arr[2] = 15584139827;
                break;
            case 25 :
                arr[0] = -1;
                arr[1] = -1;
                arr[2] = 3;
                break;
            case 26 :
                arr[0] = 0;
                arr[1] = -1;
                arr[2] = 3;
                break;
            case 27 :
                arr[0] = 0;
                arr[1] = 0;
                arr[2] = 3;
                break;
            case 28 :
                arr[0] = 0;
                arr[1] = 1;
                arr[2] = 3;
                break;
            case 29 :
                arr[0] = 1;
                arr[1] = 1;
                arr[2] = 3;
                break;
            case 30 :
                arr[0] = -283059965;
                arr[1] = -2218888517;
                arr[2] = 2220422932;
                break;
            case 33 :
                arr[0] = 8866128975287528;
                arr[1] = -8778405442862239;
                arr[2] = -2736111468807040;
                break;
            case 34 :
                arr[0] = -1;
                arr[1] = 2;
                arr[2] = 3;
                break;
            case 35 :
                arr[0] = 0;
                arr[1] = 2;
                arr[2] = 3;
                break;
            case 36 :
                arr[0] = 1;
                arr[1] = 2;
                arr[2] = 3;
                break;
            case 37 :
                arr[0] = 0;
                arr[1] = -3;
                arr[2] = 4;
                break;
            case 38 :
                arr[0] = 1;
                arr[1] = -3;
                arr[2] = 4;
                break;
            case 39 :
                arr[0] = 117367;
                arr[1] = 134476;
                arr[2] = -159380;
                break;
            case 42 :
                arr[0] = -80538738812075974;
                arr[1] = 80435758145817515;
                arr[2] = 12602123297335631;
                break;
            case 43 :
                arr[0] = 2;
                arr[1] = 2;
                arr[2] = 3;
                break;
            case 44 :
                arr[0] = -5;
                arr[1] = -7;
                arr[2] = 8;
                break;
            case 45 :
                arr[0] = 2;
                arr[1] = -3;
                arr[2] = 4;
                break;
            case 46 :
                arr[0] = -2;
                arr[1] = 3;
                arr[2] = 3;
                break;
            case 47 :
                arr[0] = 6;
                arr[1] = 7;
                arr[2] = -8;
                break;
            case 48 :
                arr[0] = -23;
                arr[1] = -26;
                arr[2] = 31;
                break;
            default:
                cout << "0" << '\n';
                return 0;


        }
        cout << arr[0] << " " << arr[1] << " " << arr[2] << '\n';
    }

}

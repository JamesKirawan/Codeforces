#include<bits/stdc++.h>
using namespace std;
void add(int a[], int x[], int q);
void complement(int a[], int n) {
   int i;
   int x[15] = { NULL };
   x[0] = 1;
   for (i = 0; i < n; i++) {
      a[i] = (a[i] + 1) % 2;
   }
   add(a, x, n);
}
void add(int ac[], int x[], int q) {
   int i, c = 0;
   for (i = 0; i < q; i++) {
      ac[i] = ac[i] + x[i] + c;
      if (ac[i] > 1) {
         ac[i] = ac[i] % 2;
         c = 1;
      }else
         c = 0;
      }
   }
   void ashr(int ac[], int qr[], int &qn, int q) {
      int temp, i;
      temp = ac[0];
      qn = qr[0];
      cout << "\t\t Shift Right \t\t";
      for (i = 0; i < q - 1; i++) {
         ac[i] = ac[i + 1];
         qr[i] = qr[i + 1];
      }
      qr[q - 1] = temp;
   }
   void display(int ac[], int qr[], int qrn) {
      int i;
      for (i = qrn - 1; i >= 0; i--)
         cout << ac[i];
      cout << " \t ";
      for (i = qrn - 1; i >= 0; i--)
         cout << qr[i];
   }
   int main(int argc, char **argv) {
      int mt[15], br[15], qr[15], sc, ac[15] = { 0 };
      int brn, qrn, i, qn, temp;
      cout << "Booth Algorithm Redesign By : "<<endl;
      cout << "Number Of Multiplicand (M) bit = ";
      cin >> brn;
      cout << "Multiplicand (M) = ";
      for (i = brn - 1; i >= 0; i--)
         cin >> br[i]; //multiplicand
      for (i = brn - 1; i >= 0; i--)
         mt[i] = br[i];
      complement(mt, brn);
      cout << "No. Of Multiplier (Q) bit = ";
      cin >> qrn;
      sc = qrn;
      cout << "Multiplier (Q) = ";
      for (i = qrn - 1; i >= 0; i--)
         cin >> qr[i];
         qn = 0;
         temp = 0;
         cout << "Q1 \t LastQ \t \t M \t \t \t \t A \t \t Q \t Number Shift Right"<<endl;
         cout << "\t\t\t Initial \t \t";
         display(ac, qr, qrn);
         cout << "\t \t" << sc << "\n";
         while (sc != 0) {
            cout << qr[0] << "\t" << qn;
            if ((qn + qr[0]) == 1) {
               if (temp == 0) {
                  add(ac, mt, qrn);
                  cout << "\t\t Substract M \t \t";
                  for (i = qrn - 1; i >= 0; i--)
                     cout << ac[i];
                  temp = 1;
               }
            else if (temp == 1) {
               add(ac, br, qrn);
               cout << "\t \t Add M \t \t \t";
               for (i = qrn - 1; i >= 0; i--)
                  cout << ac[i];
                  temp = 0;
            }
            cout << "\n \t";
            ashr(ac, qr, qn, qrn);
         }
         else if (qn - qr[0] == 0)
            ashr(ac, qr, qn, qrn);
            display(ac, qr, qrn);
            cout << "\t";
            sc--;
            cout << "\t" << sc << "\n";
   }
   cout << "Result = ";
   display(ac, qr, qrn);
}

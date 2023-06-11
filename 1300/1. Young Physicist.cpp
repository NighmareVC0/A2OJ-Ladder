#include <iostream>
using namespace std;
// 69A
// Implementation, Maths, *1000
int main()
{
   int n, x, y, z, sumX = 0, sumY = 0, sumZ = 0, sumTotal;
   ;
   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> x >> y >> z;
      sumX += x;
      sumY += y;
      sumZ += z;
   }

   sumTotal = sumX + sumY + sumZ;

   sumTotal > 0 ? cout << "YES" : cout << "NO";
   if (sumTotal == 0)
      cout << "YES";
   else
      cout << "NO";

   return 0;
}

/*
La suma de las X, Y y Z deben ser 0, no funciona simplemente sumar todos los valores de la matriz
*/
// tarde porqué lo hice con matrices pero no funciona simplemente sumar todos los valores de la matriz.
#include <iostream>
#include <math.h>
using namespace std;
// 80A
bool esPrimo(int numero)
{
   int fact, topeFact = (int)sqrt(numero); // Raíz
   if (numero == 1)
      return false;
   for (fact = 2; fact <= topeFact; fact++)
      if (numero % fact == 0)
         return false;
   return true;
}

int main()
{
   int number, nextNumber;
   cin >> number >> nextNumber;
   if (!esPrimo(nextNumber))
   {
      cout << "NO";
      return 0;
   }
   for (int i = number + 1; i < nextNumber; i++)
      if (esPrimo(i))
      {
         cout << "NO";
         return 0;
      }
   cout << "YES";
   return 0;
}
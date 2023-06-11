#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
// 271A
bool differentNumbers(int number)
{
   string digitos = to_string(number);
   unordered_set<char> digitosUnicos;

   for (char digito : digitos)
   {
      if (digitosUnicos.count(digito) > 0)
         return false;

      digitosUnicos.insert(digito);
   }
   return true;
}
/*
Verificación
*/
int main()
{
   int year;
   cin >> year;
   int nextYear = year + 1;

   while (!differentNumbers(nextYear))
      nextYear++;

   cout << nextYear;
   return 0;
}
/*
Encontrar el siguiente numero distinto en todos su digitos a partir del numero dado.
*/
// Original
/*
int main()
{
   int year;
   cin >> year;
   int init = year;
   bool find = false;

   while (!find)
   {
      if (!differentNumbers(year) || init == year)
         year++;
      else
         find = true;
   }
   cout << year;
   return 0;
}
*/
#include <iostream>
using namespace std;
// 61A
/*
Verificación
*/
int main()
{
   string num1, num2;
   cin >> num1 >> num2;

   string answer;

   for (int i = 0; i < num1.length(); i++)
      if (num1[i] != num2[i]) // si son diferentes siempre habrá un 1
         cout << '1';
      else // si son iguales o son dos ceros que dan 0 o dos 1 que también dan cero
         cout << '0';

   return 0;
}
/*
   1 1 0 0
   1 0 0 1
   --------
   0 1 0 1
*/
// Original
/*
int main()
{
   string firstRow, secondRow;
   cin >> firstRow >> secondRow;

   for (int i = 0; i < firstRow.length(); i++)
      if ((firstRow[i] == '1' && secondRow[i] == '0') || (secondRow[i] == '1' && firstRow[i] == '0'))
         cout << '1';
      else
         cout << '0';

   return 0;
}
*/
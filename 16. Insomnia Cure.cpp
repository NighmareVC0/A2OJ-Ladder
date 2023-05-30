#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// 148A
#define LAST 1
/*
Verificación
*/
int main()
{
   int pan, tail, paws, mom, lastDragon;
   cin >> pan >> tail >> paws >> mom >> lastDragon;

   int totalDragons = 0;

   for (int i = 1; i <= lastDragon; i++)
      if (i % pan == 0 || i % tail == 0 || i % paws == 0 || i % mom == 0)
         totalDragons++;

   cout << totalDragons << endl;

   return 0;
}
/*
Los múltiplos de los numero dados.
*/

// Original (no funciona del todo)
/*
int main()
{
   vector<int> dragons;
   int number;
   int totalDragons = 0;

   for (int i = 0; i < 5; i++)
   {
      cin >> number;
      dragons.push_back(number);
   }

   if (dragons.front() == 1)
   {
      cout << dragons.back();
      return 0;
   }
   else if (dragons.back() < dragons.front())
   {
      cout << "0";
      return 0;
   }
   else
   {
      for (int i : dragons)
         for (int j = 1; j < dragons.back(); j++)
         {
            if (i % j == 0)
               totalDragons++;
            if (j % i == 0 && i > j)
               totalDragons++;
         }
   }

   cout << totalDragons + LAST;
   return 0;
}
*/
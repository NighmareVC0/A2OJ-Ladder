#include <iostream>
#include <array>
using namespace std;
// 266A
#define RED 0
#define GREEN 1
#define BLUE 2
/*
Verificación
*/
int main()
{
   int cant;
   cin >> cant;

   string stones;
   cin >> stones;

   int minRemovals = 0;

   for (char i : stones)
      if (stones[i] == stones[i - 1])
         minRemovals++;
   // si son iguales que el anterior pues ha

   cout << minRemovals << endl;

   return 0;
}

/*
Si hay dos piedras iguales seguidas, sumar la cantidad y devolver la suma.
*/
// Original
/*
int main()
{
   int cant;
   int cants[3] = {0, 0, 0};
   string stones;

   cin >> cant;
   cin >> stones;

   for (char i : stones)
      if (stones[i] == 'R' && stones[i + 1] == 'R')
         cants[RED]++;

      else if (stones[i] == 'G' && stones[i + 1] == 'G')
         cants[GREEN]++;

      else if (stones[i] == 'B' && stones[i + 1] == 'B')
         cants[BLUE]++;

   cout << cants[RED] + cants[GREEN] + cants[BLUE];
   return 0;
}
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 248A
#define DOORS 2
/*
Verificación #1
*/
int main()
{
   int cupboards, leftDoorOpen = 0, rightDoorOpen = 0;
   int right, left;

   for (int i = 0; i < cupboards; i++)
   {
      cin >> left >> right;
   }
}
/*
int sumColumnas(int matris[][DOORS], int colum, int cant)
{
   int sum = 0;
   for (int i = 0; i < cant; i++)
      sum += matris[i][colum];

   return sum;
}

int main()
{
   int cupboards;
   int oneColumnOnes, secondColumnOnes, mov = 0;
   int oneColumnCeros, secondColumnCeros;
   cin >> cupboards;

   int cupboardsDoors[cupboards][DOORS];

   for (int i = 0; i < cupboards; i++)
      for (int j = 0; j < DOORS; j++)
         cin >> cupboardsDoors[i][j];
   // Suma de 1 de las matrices
   oneColumnOnes = sumColumnas(cupboardsDoors, 0, cupboards);
   secondColumnOnes = sumColumnas(cupboardsDoors, 1, cupboards);
   // teniendo cuantos 1 hay, la resta del tot
   oneColumnCeros = cupboards - oneColumnOnes;
   secondColumnCeros = cupboards - secondColumnOnes;

   // si hay mas 0 que 1 en la primera...
   if (oneColumnCeros > oneColumnOnes)
      mov += cupboards - oneColumnCeros;
   else
      mov += cupboards - oneColumnOnes;
   // si hay mas 0 que 1 en la primera...
   if (secondColumnCeros > secondColumnOnes)
      mov += cupboards - secondColumnCeros;
   else
      mov += cupboards - secondColumnOnes;

   cout << mov;
   return 0;
}
*/

/*
5
0 1
1 0
0 1
1 1
0 1

Lograr que cada COLUMNA tenga el mismo numero, analizar si cerrando o abriendo se hace más rápido.
Para eso cuento cuantos 0 y 1 hay en cada una y hago la relación dependiendo la cantidad de puertas que sean.
*/
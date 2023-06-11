#include <iostream>
#include <math.h>
using namespace std;
// 263A
// Implementationm, *800

#define CENTER 2 // centro de una matriz 5x5.
#define ORDEN 5  // Orden de la matriz dada por el problema.

void findNumber(int matrix[ORDEN][ORDEN], int number, int *row, int *col)
{
   for (int i = 0; i < ORDEN; i++)
      for (int j = 0; j < ORDEN; j++)
         if (matrix[i][j] == number)
         {
            *row = i;
            *col = j;
            break;
         }
   return;
}

int main()
{
   int matrix[ORDEN][ORDEN];
   int row = 0, col = 0;

   for (int i = 0; i < ORDEN; i++)
      for (int j = 0; j < ORDEN; j++)
         cin >> matrix[i][j];

   findNumber(matrix, 1, &row, &col);

   cout << fabs((row - CENTER)) + fabs((col - CENTER));
   return 0;
}
/*
   Los movimiento necesarios para que el 1, este en el centro.
*/
// Tarde porque no puse los + 1 para arreglar las posiciones.
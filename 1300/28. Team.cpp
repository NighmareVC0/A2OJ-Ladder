#include <iostream>
#include <vector>
using namespace std;
// 231a
#define FIRST_MEMBER 0
#define SECOND_MEMBER 1
#define THIRD_MEMBER 2
#define MIN_SOLUTION 2

int main()
{
   int cant, sum = 0;
   int solves[cant][3];
   cin >> cant;

   for (int i = 0; i < cant; i++)
      for (int j = 0; j < 3; j++)
         cin >> solves[i][j];

   for (int i = 0; i < cant; i++)
      if (solves[i][FIRST_MEMBER] + solves[i][SECOND_MEMBER] + solves[i][THIRD_MEMBER] >= MIN_SOLUTION)
         sum++;

   cout << sum;
   return 0;
}

/*
Por lo menos dos de los integrantes debe estar seguro de su respuesta (No puede ser la suma solamente)
*/
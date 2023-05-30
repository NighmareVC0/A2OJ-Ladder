#include <iostream>
using namespace std;
// 200B
int main()
{
   int cantJuices, sum = 0;
   cin >> cantJuices;

   float juices[cantJuices];
   for (int i = 0; i < cantJuices; i++)
      cin >> juices[i];

   for (int i = 0; i < cantJuices; i++)
      sum += juices[i];

   cout << (float)sum / cantJuices << endl;
   return 0;
}

/*
   Promedio de sumas de porcentajes de cada bebida.
*/
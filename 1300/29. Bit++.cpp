#include <iostream>
using namespace std;
// 282A
#define X_INITIAL 0
int main()
{

   int entradas, x = X_INITIAL;
   cin >> entradas;
   string entrada;

   for (int i = 0; i < entradas; i++)
   {
      cin >> entrada;
      auto posicion = entrada.find("++");
      if (posicion != string::npos)
         x++;
      posicion = entrada.find("--");
      if (posicion != string::npos)
         x--;
   }
   cout << x;
   return 0;
}

// aprendí a buscar y hacer cosas si no aparece
/*
Simular ++ y -- daba que recibe en caracters
*/

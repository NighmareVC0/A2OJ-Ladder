#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 133A
int main()
{
   string commands;
   cin >> commands;

   auto posicion = commands.find("H");
   if (posicion == string::npos)
   {
      posicion = commands.find("Q");
      if (posicion == string::npos)
         posicion = commands.find("9");
   }

   if (posicion == string::npos)
      cout << "NO";
   else
      cout << "YES";
   return 0;
}
/*
Simulación de un lenguaje donde solo la HQ9 hacen cosas
*/
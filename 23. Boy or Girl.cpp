#include <iostream>
#include <string.h>
#include <unordered_set>
using namespace std;
// 236A

int differentCaracters(string word)
{
   unordered_set<char> digitosUnicos;

   for (char digito : word)
      digitosUnicos.insert(digito); // no es necesario contarlos ya que se encarga solo de ponerlos si no se repite.

   return digitosUnicos.size();
}

int main()
{
   string word;
   cin >> word;

   if (differentCaracters(word) % 2 == 0)
      cout << "CHAT WITH HER!";
   else
      cout << "IGNORE HIM!";

   return 0;
}

/*
Determinar si la cantidad de caracteres (sin repetición) es par.
*/

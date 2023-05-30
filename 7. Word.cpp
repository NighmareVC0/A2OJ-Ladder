#include <iostream>
#include <cctype>
using namespace std;
// 59A
int main()
{
   string word;
   cin >> word;

   int upper = 0, lower = 0;

   for (char digit : word)
      if (islower(digit))
         lower++;
      else
         upper++;

   if (lower >= upper)
      for (char &c : word)
         c = tolower(c);
   else
      for (char &c : word)
         c = toupper(c);

   cout << word;

   return 0;
}

/*
Si la palabra tiene mas mayúsculas, poner toda la palabra en mayúsculas
Si la palabra tiene mas minúsculas, poner toda la palabra en minúsculas
Si la cantidad es la misma, poner toda la palabra en minúsculas
*/
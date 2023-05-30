#include <iostream>
#include <string>
using namespace std;
// 71A
int main()
{
   int cantWords = 0, len = 0;
   cin >> cantWords;
   string words[cantWords];

   for (int i = 0; i < cantWords; i++)
      cin >> words[i];

   for (int i = 0; i < cantWords; i++)
   {
      len = words[i].length();
      if (len > 10)
         cout << words[i][0] << +(len - 2) << words[i][len - 1] << endl;
      else
         cout << words[i] << endl;
   }
   return 0;
}

/*
Reducir un palabra muy larga
si = AsadhfkdsajhfkadsjhP
entonces A19P
*/
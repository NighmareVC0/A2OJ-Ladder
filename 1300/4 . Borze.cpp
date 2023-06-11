#include <iostream>
using namespace std;
// 32B
int main()
{
   string code;
   cin >> code;

   for (char i : code)
      if (code[i] == '.')
         cout << 0;
      else if (code[i] == '-' && code[i + 1] == '.')
      {
         cout << 1;
         i++;
      }
      else if (code[i] == '-' && code[i + 1] == '-')
      {
         cout << 2;
         i++;
      }
   return 0;
}
/*
   Si encontramos '.', Debemos imprimir 0
                  '-.',                 1
                  '--',                 2
*/
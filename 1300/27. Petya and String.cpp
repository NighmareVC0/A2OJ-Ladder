#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;
// 112A
/*
Aprendi que los string tambien necesitan ser pasados con direccion de memoria para hacer los cambios, no funcionan como los char *
*/
void to_lower(string &word)
{
   for (char &c : word) // como tambien aqui hace falta hacer referencia directa con memoria
      c = tolower(c);
}

int main()
{
   string firts, second;
   cin >> firts >> second;

   to_lower(firts);
   to_lower(second);
   auto result = strcmp(firts.c_str(), second.c_str()); // parece que sirve para usarla como char *;

   cout << result;
   return 0;
}

// primera menor -1
// primera mayor 1

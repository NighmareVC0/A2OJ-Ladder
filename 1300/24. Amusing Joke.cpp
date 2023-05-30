#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// 141A
#define MAX 3
#define SORTED 2
#define GUEST 0
#define HOST 1
#define PILE 2

int main()
{

   string words[MAX];
   string sorted[SORTED];

   for (int i = 0; i < MAX; i++)
      cin >> words[i];

   sorted[0] = words[GUEST] + words[HOST];
   sorted[1] = words[PILE];

   sort(sorted[0].begin(), sorted[0].end());
   sort(sorted[1].begin(), sorted[1].end());

   if (sorted[0] == sorted[1])
      cout << "YES";
   else
      cout << "NO";
   return 0;
}
/*
   Verificar si con el tercer arreglo se puede formar las dos palabras anteriores sin que sobren palabras.
*/
// Se podría verificar si las longitudes son diferentes, si lo son luego hacer las comparaciones
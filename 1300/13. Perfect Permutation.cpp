#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 233A
int main()
{
   int cantNumbers;
   cin >> cantNumbers;
   int permutations[cantNumbers];

   if (cantNumbers % 2 != 0)
   {
      cout << "-1";
      return 0;
   }

   for (int i = 0; i < cantNumbers; i++)
      permutations[i] = i + 1;

   for (int i = 0; i < cantNumbers; i += 2)
      swap(permutations[i], permutations[i + 1]);

   for (int i = 0; i < cantNumbers; i++)
      cout << permutations[i] << ' ';

   return 0;
}

/*
Si tenemos 4 números, hay que moverlos de tal forma que si:

1 2 3 4

p1 != 1 y si p1 = 2
p2 != 2 y p2 = 1
p3 != 3 y si p3 = 4
p4 != 5 y p4 = 3 
*/
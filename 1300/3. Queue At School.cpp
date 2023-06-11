#include <iostream>
using namespace std;
// 266B
int main()
{
   int swapTimes, none;
   cin >> none >> swapTimes;

   string row;
   cin >> row;

   for (int i = 0; i < swapTimes; i++)
      for (int j = 0; j < row.size(); j++)
         if (row[j] == 'B' && row[j + 1] == 'G')
         {
            swap(row[j + 1], row[j]);
            j++;
         }
   cout << row;
   return 0;
}

/*
   En una fila de colegio, lo varones (b) se siente presionados si tienen un hembra (g), y le seden la posición.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 139A
#define DAYS_WEEK 7
int main()
{
   int cantPages, indiceDia = 0;
   cin >> cantPages;
   int cantPagesPerDay[DAYS_WEEK];

   for (int i = 0; i < DAYS_WEEK; i++)
      cin >> cantPagesPerDay[i];

   while (cantPages > 0)
   {
      cantPages -= cantPagesPerDay[indiceDia++];
      if (indiceDia == 7 && cantPages > 0)
         indiceDia = 0;
   }

   cout << indiceDia;
   return 0;
}

/*
100
15 20 20 15 10 30 45

50
10 1 10 1 10 1 10

ver en que dia terminara la persona de leer el libro, no en cuantos Dias.
*/
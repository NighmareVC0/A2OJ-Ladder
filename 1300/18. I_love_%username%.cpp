#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 155A
/*
#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#define MAX(i, j) (((i) > (j)) ? (i) : (j))
*/
int main()
{
   int competitions, amazingPerformance = 0;
   cin >> competitions;

   int perfermances[competitions];
   for (int i = 0; i < competitions; i++)
      cin >> perfermances[i];

   int maxScore = perfermances[0], minScore = perfermances[0];
   // mayor y menor
   for (int i = 0; i < competitions; i++)
      if (perfermances[i] > maxScore)
      {
         maxScore = perfermances[i];
         amazingPerformance++;
      }
      else if (perfermances[i] < minScore)
      {
         minScore = perfermances[i];
         amazingPerformance++;
      }

   cout << amazingPerformance << endl;
   return 0;
}

/*
version que solo revisa el final
int main()
{
   int competitions, amazingPerformance = 0;
   cin >> competitions;

   int perfermances[competitions];
   for (int i = 0; i < competitions; i++)
      cin >> perfermances[i];

   for (int i = 1; i < competitions; i++)
      if (perfermances[i] > perfermances[i - 1])
         amazingPerformance++;

   //cuenta para todas so hay que cambiarlo
   if (amazingPerformance == 0)
   {
      int i = 0;
      while (perfermances[competitions - 1] < perfermances[i])
      {
         i++;
         if (i = competitions - 1)
            amazingPerformance++;
      }
   }

   cout << amazingPerformance << endl;
   return 0;
}
*/

// contar los cambios entre mayor y menos que
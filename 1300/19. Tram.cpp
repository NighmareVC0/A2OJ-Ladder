#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 116A
int main()
{
   int t, capacityPerTravel = 0, minCapacity = 0;
   cin >> t;
   while (t--)
   {
      int in, out;
      cin >> out >> in;
      capacityPerTravel -= out;
      capacityPerTravel += in;
      if (capacityPerTravel > minCapacity)
         minCapacity = capacityPerTravel;
   }
   cout << minCapacity << endl;
   return 0;
}
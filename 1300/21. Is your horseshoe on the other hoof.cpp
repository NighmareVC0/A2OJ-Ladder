#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
// 228A

#define SHOES 4
int main()
{
   unordered_set<int> shoes;
   int number;

   for (int i = 0; i < SHOES; i++)
   {
      cin >> number;
      shoes.insert(number);
   }

   cout << SHOES - shoes.size();
   return 0;
}
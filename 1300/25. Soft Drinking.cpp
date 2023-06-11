#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 151A
int main()
{
   int friends = 0, bottles = 0, mililiters = 0, limes = 0, slices = 0, gramsofsalt = 0, mililitersofdrinksneeded = 0, gramsofsaltneeded = 0, totaldrinks = 0, totallimes = 0, maxtoasts = 0;
   cin >> friends >> bottles >> mililiters >> limes >> slices >> gramsofsalt >> mililitersofdrinksneeded >> gramsofsaltneeded;

   totaldrinks = bottles * mililiters;
   totallimes = limes * slices;

   maxtoasts = min(totaldrinks / (friends * mililitersofdrinksneeded), min(totallimes / friends, gramsofsalt / (friends * gramsofsaltneeded)));
   cout << maxtoasts << endl;

   return 0;
}
/*
Formula Matemática
*/
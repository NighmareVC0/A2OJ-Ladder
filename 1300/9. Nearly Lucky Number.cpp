#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 110A
int main()
{
   string number;
   int i = 0, cantLuckyNumber = 0;
   cin >> number;

   while (i <= number.size())
   {
      if ((number[i] == '7' || number[i] == '4'))
         cantLuckyNumber++;
      i++;
   }

   if ((cantLuckyNumber == 7 || cantLuckyNumber == 4))
   {
      cout << "YES";
      return 0;
   }
   cout
       << "NO";
   return 0;
}
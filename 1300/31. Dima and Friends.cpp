#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 272A
#define FINGER 5
int main()
{
   int friends, fingersSum = 0, dimasNumber = 0;
   cin >> friends;
   int friendsFingers[friends];

   for (int i = 0; i < friends; i++)
      cin >> friendsFingers[i];

   for (int i = 0; i < friends; i++)
      fingersSum += friendsFingers[i];

   for (int i = 1; i <= FINGER; i++)
      if ((fingersSum + i) % (friends + 1) != 1) // friends + dima
         dimasNumber++;

   cout << dimasNumber;
   return 0;
}
/*
Probamos sumando dedos, si es divisible entre todos es porque da la vuelta y con resto 1 le tocaría a el
*/
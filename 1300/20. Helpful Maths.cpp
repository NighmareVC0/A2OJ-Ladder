#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// 339A
int main()
{
   string values;
   cin >> values;
   vector<int> numbers;

   for (char digit : values)
      if (isdigit(digit))
         numbers.push_back(atoi(&digit)); // o digit - '0';

   sort(numbers.begin(), numbers.end());

   for (int i = 0; i < numbers.size(); i++)
   {
      cout << numbers[i];
      if (i < (numbers.size() - 1))
         cout << "+";
   }

   return 0;
}
/*
   Organizar los números dados en un string
*/
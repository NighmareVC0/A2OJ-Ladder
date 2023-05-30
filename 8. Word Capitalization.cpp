#include <iostream>
#include <vector>
using namespace std;
// 281A
int main()
{
   string word;
   cin >> word;

   word[0] = toupper(word[0]);
   cout << word;

   return 0;
}

/*
Poner la prima palabra mayúscula.
*/
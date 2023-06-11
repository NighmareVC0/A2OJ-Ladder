#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
// 224A
int main()
{
   int a, b, c, sideA, sideB, sideC;
   cin >> a >> b >> c;

   sideA = sqrt(a * c / b);
   sideB = sqrt(a * b / c);
   sideC = sqrt(b * c / a);
   cout << round(4 * (sideA + sideB + sideC));
   return 0;
}

/*
formula matemática para la suma de los lados de un paralelepípedo
*/
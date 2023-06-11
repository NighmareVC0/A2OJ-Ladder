#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
// 227B

/*
Verificación #2

int main()
{
   int cant, queries;
   long long vasya = 0, petya = 0;
   cin >> cant;
   vector<int> numbers(cant);

   for (int i = 0; i < cant; i++)
      cin >> numbers[i];

   cin >> queries;
   for (int i = 0; i < queries; i++)
   {
      int query;
      cin >> query;
      for (int j = 0; j < cant; j++)
      {
         if (numbers[j] == query)
         {
            vasya += j + 1;
            petya += cant - j;
            break;
         }
      }
   }
   cout << vasya << " " << petya;

   return 0;
}
*/
/*
Verificación #1
*/
int main()
{
   int cant, queries, vasya = 0, petya = 0;
   cin >> cant;

   vector<int> searchNumbers(queries);
   unordered_map<int, int> indexMap;

   for (int i = 0; i < cant; i++)
   {
      int number;
      cin >> number;
      indexMap[number] = i; // guardamos la posición del numero en mapa. <1, 0>, <2, 1>
   }
   cin >> queries;
   for (int i = 0; i < queries; i++)
   {
      cin >> searchNumbers[i];                // 1
      int index = indexMap[searchNumbers[i]]; // indexMap[searchNumbers[i]] -> 0
      vasya += index + 1;                     // 0 + 1 = 1
      petya += cant - index;                  // cant -> 2 - 0 = 1 (para obtener la verdadera posición)
   }

   cout << vasya << " " << petya;

   // 3, 4, 13

   return 0;
}

/*
bool isSorted(int array[], int size)>
{
   int sorted = 0;
   for (int i = 0; i < size; i++)
   {
      if (array[i] <= array[i + 1])
      {
         sorted++;
         if (sorted == size)
            return true;
      }
   }
   return false;
}

int main()
{
   int cant, queries, sorted;
   int vasya = 0, petya = 0; // inicio, final

   cin >> cant;
   int numbers[cant];
   for (int i = 0; i < cant; i++)
      cin >> numbers[i];

   cin >> queries;
   int searchNumbers[queries];
   for (int i = 0; i < queries; i++)
      cin >> searchNumbers[i];

   // si el arreglo esta ordenado
   if (isSorted(numbers, cant))
   {
      for (int i = 0; i < queries; i++)
         vasya += searchNumbers[i];

      int j = 0;
      for (int i = cant; i >= 0; i--)
         if (i == searchNumbers[j])
         {
            j++;
            petya += cant - i + 1;
            i = cant + 1;
         }

      cout << vasya << " " << petya;
      return 0;
   }
   // iniciando por el principio
   for (int i = 0; i < queries; i++)
      for (int j = 0; j < cant; j++)
      {
         if (!(searchNumbers[i] == numbers[j]))
            vasya++;
         if (searchNumbers[i] == numbers[j])
         {
            vasya++;
            break;
         }
      }

   // iniciando por el final
   for (int i = 0; i < queries; i++)
      for (int j = cant - 1; j >= 0; j--)
      {
         if (!(searchNumbers[i] == numbers[j]))
            petya++;
         if (searchNumbers[i] == numbers[j])
         {
            petya++;
            break;
         }
      }

   cout << vasya << " " << petya;
   return 0;
}
*/

/*
tengo problemas al buscar al inverso cuando esta ordenado.
*/
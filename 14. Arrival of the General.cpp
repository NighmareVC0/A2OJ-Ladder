#include <iostream>
using namespace std;
// 144a
// el diablo y su hermana porque es verdad que cuando moviste uno, el otro ya no esta como al principio, entonces hay que recalcular las posiciones, incluir en el algo de menor, el <= porque la posicion importa.
int indexMenorArreglo(int arg[], int size, int *pos)
{
   int menor = arg[0];

   for (int i = 0; i < size; i++)
      if (arg[i] <= menor)
      {
         menor = arg[i];
         *pos = i;
      }

   return menor;
}

int indexMayorArreglo(int arg[], int size, int *pos)
{
   int mayor = arg[0];

   for (int i = 0; i < size; i++)
      if (arg[i] > mayor)
      {
         mayor = arg[i];
         *pos = i;
      }

   return mayor;
}

void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}

int argSwap(int arg[], int size)
{
   int minPos;
   int maxPos;

   int max = indexMayorArreglo(arg, size, &maxPos);
   int result = 0;

   while (arg[0] != max)
   {
      swap(arg[maxPos], arg[maxPos - 1]);
      maxPos--;
      result++;
   }
   int min = indexMenorArreglo(arg, size, &minPos);
   while (arg[size - 1] != min)
   {
      swap(arg[minPos], arg[minPos + 1]);
      minPos++;
      result++;
   }

   return result;
}

int main()
{
   int size;
   cin >> size;

   int arg[size];

   for (int i = 0; i < size; i++)
      cin >> arg[i];
   int result = argSwap(arg, size);
   cout << result << endl;
   return 0;
}

//Cantidades de veces que hay que mover el valor mayor y menor del arreglo para que el mayor
//este a la izquierda y el menor a la derecha (teniendo en cuenta que una vez movido uno, el otro se mueve)
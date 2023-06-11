#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 165A
int main()
{
   int cantCoordenates, x, y, cantSupercental = 0;
   bool right, left, up, down;
   cin >> cantCoordenates;
   vector<pair<int, int>> coordenates;

   for (int i = 0; i < cantCoordenates; i++)
   {
      cin >> x >> y;
      coordenates.push_back(make_pair(x, y));
   }

   for (int i = 0; i < cantCoordenates; i++)
   {
      right = left = up = down = false;
      for (int j = 0; j < cantCoordenates; j++)
      {
         if (coordenates[i].first > coordenates[j].first && coordenates[i].second == coordenates[j].second)
            right = true;
         else if (coordenates[i].first < coordenates[j].first && coordenates[i].second == coordenates[j].second)
            left = true;

         if (coordenates[i].second > coordenates[j].second && coordenates[i].first == coordenates[j].first)
            up = true;
         else if (coordenates[i].second < coordenates[j].second && coordenates[i].first == coordenates[j].first)
            down = true;
      }
      if (right && left && up && down)
         cantSupercental++;
   }

   cout << cantSupercental;
   return 0;
}
/*
en un plano cartesiano un punto debe tener puntos vecinos en todas las direcciones (arriba, abajo, derecha, izquierda)
*/
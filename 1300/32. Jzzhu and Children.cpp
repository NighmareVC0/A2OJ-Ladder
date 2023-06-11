#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
// 450A
int main()
{
   int childrenCant, givenCadies;
   int childrenRequest;

   cin >> childrenCant >> givenCadies;
   vector<pair<int, int>> childCandyRequest;

   for (int i = 0; i < childrenCant; i++)
   {
      cin >> childrenRequest;
      childCandyRequest.push_back(make_pair(childrenRequest, i + 1));
   }

   while (childCandyRequest.size() > 1)
   {
      childCandyRequest[0].first -= givenCadies;

      if (childCandyRequest[0].first > 0)
      {
         childCandyRequest.push_back(make_pair(childCandyRequest[0].first, childCandyRequest[0].second));
         childCandyRequest.erase(childCandyRequest.begin());
      }
      else
         childCandyRequest.erase(childCandyRequest.begin());
   }
   cout << childCandyRequest[0].second << endl;
   return 0;
}
/*
El de los dulces
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[] = {1, 1, 3, 3, 2, 2, 5};
   int n = sizeof(arr) / sizeof(arr[0]);

   for (int i = 0; i < n; i++)
   {
      if (i == 0)
      {
         if (arr[i] != arr[i + 1])
         {
            cout << arr[i] << " ";
         }
      }
      else if (i == n - 1)
      {
         if (arr[i] != arr[i - 1])
         {
            cout << arr[i] << " ";
         }
      }
      else
      {
         if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
         {
            cout << arr[i] << " ";
         }
      }
   }

   cout << endl;
   return 0;
}

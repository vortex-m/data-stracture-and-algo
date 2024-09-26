#include <bits/stdc++.h>
using namespace std;

int SearchRotatedArray(int arr[], int n, int target)
{
   int low = 0, high = n - 1;
   while (low <= high)
   {
      int mid = (low + high) / 2;
      if (arr[mid] == target)
         return mid;
      else if (arr[mid] >= arr[low])
      {
         // Left
         if (arr[mid] >= target && arr[low] <= target)
         {
            high = mid - 1;
         }
         else
         {
            low = mid + 1;
         }
      }
      else if (arr[mid] <= arr[high])
      {
         // Right
         if (arr[mid] <= target && arr[low] <= target)
         {
            high = mid - 1;
         }
         else
         {
            low = mid + 1;
         }
      }
   }
   return -1;
}

int main()
{
   int arr[] = {7, 8, 9, 1, 2, 3, 4};
   int n = sizeof(arr) / sizeof(int);
   cout << "Position: " << SearchRotatedArray(arr, n, 4);
}
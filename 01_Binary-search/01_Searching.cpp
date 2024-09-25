#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int target)
{
   int low = 0, high = n - 1;
   while (low <= high)
   {
      int mid = (low + high) / 2;
      if (arr[mid] == target)
      {
         return mid;
      }
      else if (arr[mid] < target)
      {
         low = mid + 1;
      }
      else
      {
         high = mid - 1;
      }
   }
   return -1; // Target Not Found
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int n = sizeof(arr) / sizeof(int);
   cout << "The target value is at index: " << BinarySearch(arr, n, 5);
}
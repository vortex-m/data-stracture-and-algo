#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int low, int high, int target)
{
   int ans = high - 1;
   while (low <= high)
   {
      int mid = (low + high) / 2;
      if (arr[mid] >= target)
      {
         ans = mid;
         low = mid + 1;
      }
      else
      {
         high = mid - 1;
      }
   }
   return ans;
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int n = sizeof(arr) / sizeof(int);
   cout << "Element found at: " << BinarySearch(arr, 0, n - 1, 8);
}
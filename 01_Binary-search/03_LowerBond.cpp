#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int low, int high, int target)
{
   int ans = -1;
   while (low <= high)
   {
      int mid = (low + high) / 2;
      if (arr[mid] >= target)
      {
         ans = mid;
         high = mid - 1;
      }
      else
      {
         low = mid + 1;
      }
   }
   return ans;
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   int n = sizeof(arr) / sizeof(int);
   cout << "The number found at index: " << BinarySearch(arr, 0, n - 1, 2);
}

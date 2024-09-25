#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int low, int high, int target)
{
   if (low > high)
      return -1;
   int mid = (low + high) / 2;
   if (arr[mid] == target)
      return mid;
   else if (arr[mid] < target)
      return BinarySearch(arr, mid + 1, high, target);
   else
      return BinarySearch(arr, low, mid - 1, target);
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   int n = sizeof(arr) / sizeof(int);
   cout << "The number found at index: " << BinarySearch(arr, 0, n - 1, 6);
}

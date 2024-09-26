#include <bits/stdc++.h>
using namespace std;

// int Occurance(int arr[],int n,int val){
//    int low = n,high = n-1;
//    int first = -1;

// }

int Lower(int arr[], int n, int val)
{
   int low = 0, high = n - 1;
   int ans = n - 1;
   while (low <= high)
   {
      int mid = (low + high) / 2;
      if (arr[mid] >= val)
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
int Upper(int arr[], int n, int val)
{
   int low = 0, high = n - 1;
   int ans = n - 1;
   while (low <= high)
   {
      int mid = (low + high) / 2;
      if (arr[mid] <= val)
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
   int arr[] = {1, 2, 3, 4, 5, 6, 8, 8};
   int n = sizeof(arr) / sizeof(int);
   cout << "Lower: " << Lower(arr, n, 8) << endl;
   cout << "Upper: " << Upper(arr, n, 8);
}
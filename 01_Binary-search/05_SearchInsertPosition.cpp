#include <bits/stdc++.h>
using namespace std;

int BinaryInsert(vector<int> arr, int value)
{
   int n = arr.size();
   int low = 0, high = n - 1;
   int ans = n;
   while (low <= high)
   {
      int mid = (low + high) / 2;
      if (arr[mid] >= value)
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
   vector<int> arr = {1, 2, 3, 4, 5, 7};
   int val = 6;
   cout << "Your Value is inserted at index: " << BinaryInsert(arr, val);
}
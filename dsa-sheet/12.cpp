#include <bits/stdc++.h>

using namespace std;

long long ans = 0;
void mergeSort(long long *arr, int l, int r);

long long getInversions(long long *arr, int n)
{
  mergeSort(arr, 0, n - 1);
  return ans;
}

void mergeSort(long long *arr, int l, int r)
{
  if (l == r)
    return;
  int m = (l + r) / 2;
  mergeSort(arr, l, m);
  mergeSort(arr, m + 1, r);

  int i = l;
  int j = m + 1;
  while (i <= m && j <= r)
  {
    if (arr[i] > arr[j])
    {
      ans += m - i + 1;
      j++;
    }
    else
    {
      i++;
    }
  }

  vector<long long> mx;

  int p = l;
  int q = m + 1;
  while (p <= m && q <= r)
  {
    if (arr[q] < arr[p])
    {
      mx.push_back(arr[q]);
      q++;
    }
    else
    {
      mx.push_back(arr[p]);
      p++;
    }
  }
  while (p <= m)
  {
    mx.push_back(arr[p]);
    p++;
  }
  while (q <= r)
  {
    mx.push_back(arr[q]);
    q++;
  }
  for (int i = l; i <= r; i++)
  {
    arr[i] = mx[i - l];
  }
}
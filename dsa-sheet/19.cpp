#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int ans = 0;
  void mergeSort(vector<int> &arr, int l, int r)
  {
    if (l == r)
    {
      return;
    }

    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    int p = l;
    int q = m + 1;

    while (p <= m && q <= r)
    {
      if (ceil((arr[p] * 1.0) / 2.0) > arr[q])
      {
        ans += m - p + 1;
        q++;
      }
      else
      {
        p++;
      }
    }

    p = l;
    q = m + 1;
    vector<int> v;
    while (p <= m && q <= r)
    {
      if (arr[p] > arr[q])
      {
        v.push_back(arr[q]);
        q++;
      }
      else
      {
        v.push_back(arr[p]);
        p++;
      }
    }
    while (p <= m)
    {
      v.push_back(arr[p]);
      p++;
    }
    while (q <= r)
    {
      v.push_back(arr[q]);
      q++;
    }

    for (int i = l; i <= r; i++)
    {
      arr[i] = v[i - l];
    }
  }

  int reversePairs(vector<int> &nums)
  {
    mergeSort(nums, 0, nums.size() - 1);
    return ans;
  }
};
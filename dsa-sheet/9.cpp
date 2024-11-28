#include <bits/stdc++.h>

using namespace std;

// Shell sort approach
class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    for (int i = m; i < m + n; i++)
    {
      nums1[i] = nums2[i - m];
    }
    int gap = ceil((1.0 * m + n) / 2);
    while (true)
    {
      cmp(nums1, m + n, gap);
      if (gap == 1)
      {
        break;
      }
      gap = ceil((1.0 * gap) / 2);
    }
  }

  void cmp(vector<int> &arr, int m, int gap)
  {
    int k = 0;
    while (k + gap < m)
    {
      if (arr[k] > arr[k + gap])
      {
        swap(arr[k], arr[k + gap]);
      }
      k++;
    }
  }
};

// My Solution
#include <vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
  int k = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] > b[0])
    {
      swap(a[i], b[0]);
      int k = 0;
      while (k < b.size() - 1 && b[k] > b[k + 1])
      {
        swap(b[k], b[k + 1]);
        k++;
      }
    }
  }
}
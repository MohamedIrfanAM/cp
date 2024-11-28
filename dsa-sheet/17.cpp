#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int findChampion(int n, vector<vector<int>> &edges)
  {
    if (n == 1)
      return 0;
    vector<int> v(n);
    for (auto a : edges)
    {
      v[a[1]]--;
    }

    vector<int> nodes;
    for (int i = 0; i < n; i++)
    {
      cout << i << " " << v[i] << endl;
      if (v[i] > 0)
      {
        nodes.push_back(i);
      }
    }

    if (nodes.size() != 1)
      return -1;

    stack<int> s;
    s.push(nodes[0]);

    vector<int> h(n);
    while (!s.empty())
    {
      int k = s.top();
      h[k]++;
      s.pop();

      for (int i = 0; i < edges.size(); i++)
      {
        if (edges[i][0] == k)
        {
          s.push(edges[i][1]);
        }
      }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (h[i] > 0)
        count++;
    }
    if (count == n - 1)
      return nodes[0];
    return -1;
  }
};
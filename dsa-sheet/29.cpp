#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int solve(vector<int> &A, int B);
};

int Solution::solve(vector<int> &A, int B)
{
  unordered_map<int, int> h;

  h[0] = -1;
  int ans = 0;

  vector<int> d = A;
  int p = 0;
  h[0] = 1;

  for (int i = 1; i < A.size(); i++)
  {
    A[i] ^= A[i - 1];
  }

  for (int i = 0; i < A.size(); i++)
  {

    ans += h[A[i] ^ B];
    h[A[i]]++;
  }

  return ans;
}

// Some rudimentary approach, wrong

// int Solution::solve(vector<int> &A, int B)
// {
//   unordered_map<int, int> h;

//   h[0] = -1;
//   int ans = 0;

//   vector<int> d = A;
//   int p = 0;
//   A[0] ^= B;

//   for (int i = 0; i < A.size(); i++)
//   {
//     if (p != -1)
//     {
//       p = -1;
//     }
//     else
//     {
//       A[i] ^= A[i - 1];
//     }
//     if (h.find(A[i]) != h.end() && h[A[i]] >= p)
//     {
//       p = i + 1;
//       ans++;
//       // cout << i << " ";
//       if (i + 1 < A.size())
//       {
//         A[i + 1] ^= B;
//       }
//     }
//     cout << d[i] << " ";
//     if (d[i] == B)
//     {
//       // ans++;
//     }

//     h[A[i]] = i;
//   }
//   cout << endl;
//   cout << ans << endl;
//   return ans;
// }
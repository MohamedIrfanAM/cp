// time-limit: 4000
// problem-url: https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, q, k;

  // First input line accepting n and q
  cin >> n >> q;

  int c_out[q][2];
  int arr[n][k];

  // Reading input and creating arrays based on that
  for( int i = 0; i < n; i ++ )
  {
    cin >> k;
    cout << " ";

    for(int j = 0; j < k; j++ )
    {
      cin >> arr[i][j];
      cout << " ";
    }
  }

  // Reading queries and storing it in an array "c_out"
  for (int c = 0; c < q; c++)
  {
    cin >> c_out[c][0] >> c_out[c][1];
  }

  // Giving output from "arr" based queries stored in "c_out"
  for (int c = 0; c < q; c++)
  {
    cout << arr[c_out[c][0]][c_out[c][1]]<< "\n";
  }

return 0;
}

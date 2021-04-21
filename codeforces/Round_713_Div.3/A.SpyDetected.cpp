// time-limit: 2000
// problem-url: https://codeforces.com/contest/1512/problem/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
int m;
cin >> t;

for(int i = 1; i <= t; i++)
{
  cin >> m;
  int arr[m];

  for(int j = 1; j <= m; j++ )
  {
    cin >> arr[j];
  }

  for(int j = 1; j <= m; j++ )
  {
    if(j != 1 && j!= m && arr[j] != arr[j-1] && arr[j] != arr[j+1] )
    {
      cout << j << "\n";
    }
    else if( j == 1 && arr[j] != arr[j+1] && arr[j] != arr[j+2] )
    {
      cout << j << "\n";
    }
    else if( j == m && arr[j] != arr[j-1] && arr[j] != arr[j-2] )
    {
      cout << j << "\n";
    }
  }   

}




return 0;
}

// time-limit: 4000
// problem-url: https://codeforces.com/problemset/problem/1598/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n;
  cin >> n;

  
  map<int,int> m;  
  int arr[n][5];
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cin >> arr[i][j];
      if( arr[i][j] == 1)
      {
        m[j]++;
      }
    }
  }


  bool found = false;
  for(int i = 0; i+1 < 5; i++)
  {
    if(m[i] < n/2) continue;

    for(int j = i+1; j < 5; j++)
    {
      if(m[j] < n/2) continue;
      else if(m[i]+m[j] >= n/2)
      {
        int intersection = 0;
        for(int k = 0;k < n;k++)
        {
          if(arr[k][i] && arr[k][j]) intersection++;
        }
        if( m[i]+m[j] - intersection == n)
        {
          found = true;
          break;
        }
      }
    }
    if(found) break;
  }
  if(found) cout << "YES\n";
  else cout << "NO\n";
  
   
  
}



return 0;
}

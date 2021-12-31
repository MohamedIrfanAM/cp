// time-limit: 2000
// problem-url: https://codeforces.com/contest/1602/problem/B
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
  map <int,int> count;
  int v[n+1][n];

  for(int i = 0; i < n ; i++)
  {
    int x;
    cin >> x;
    v[0][i] = x;
    count[x]++;
  }

  
  map<int,int> update_count = count ;

  int pos = n;
for(int i = 1; i <= n; i++)
{
    count = update_count;
    int c = 0;
    for(int j = 0; j < n; j++)
    {
      int a = v[i-1][j];
      if(a != count[a])
      {
        update_count[a]--;
        update_count[count[a]]++;
        v[i][j] = count[a];
      }
      else
      {
        v[i][j] = a;
        c++;
      }
    }
    if(c == n)
    {
      pos = i;
      break;
    }
}

  int q;
  cin >> q;

  while(q--)
  {
    int a,b;
    cin >> a >> b;
    if( b > pos)
    {
      b = pos;
    }
    cout << v[b][a-1] << "\n";
  }
}



return 0;
}

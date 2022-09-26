// time-limit: 3000
// problem-url: https://codeforces.com/contest/1702/problem/C
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
  int n,k;
  cin >> n >> k;
  map<int,int> hash_max;
  map<int,int> hash_min;
  for(int i = 1; i <= n; i++)
  {
    int inp;
    cin >> inp;
    if(hash_max[inp] == 0)
    {
      hash_max[inp] = i;
      hash_min[inp] = i;
    }
    else if( i >= hash_max[inp])
    {
      hash_max[inp] = i;
    }
    else
    {
      hash_min[inp] = i;
    }
  }

  for(int i = 0; i < k; i++)
  {
    int a,b;
    cin >> a >> b;
    if(hash_max[a] == 0 || hash_max[b] == 0)
    {
      cout << "NO\n";
    }
    else if( hash_max[b] >= hash_min[a])
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
}

return 0;
}

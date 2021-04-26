// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1511/C
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n,q;
cin >> n >> q;

vector <int> ns (n);
vector <int> qs (q);

for(int i = 0; i < n; i ++)
{
  cin >> ns[i];  
}

for(int i = 0; i < q; i ++)
{
  cin >> qs[i];  
  for(int j = 0; j < n; j++)
  {
    if(qs[i] == ns[j])
    {
      cout << j+1; 
      if(j != n-1)
      {
        cout << " ";
      }
      ns.insert(ns.begin(),ns[j]);
      ns.erase(ns.begin()+j+1);
      break;
    }
  }
}

return 0;
}

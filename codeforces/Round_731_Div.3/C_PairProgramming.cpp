// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1547/C
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
  int k,n,m;
  cin >> k >> n >> m;
  vector<int> a(n);
  vector<int> b(m);

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++)
  {
    cin >> b[i];
  }


  vector<int> ans;
  int L1 = 0,L2 = 0;

  int C = m+n;
  while(C--)
  {

    for(int i = L1; i < n; i++)
    {

      if(a[i] == 0)
      {
        k++;
      }
      else if(a[i] > k)
      {
        L1 = i;
        break;
      }
      ans.push_back(a[i]);
      L1 = i+1;
    }
   
    for(int i = L2; i < m; i++)
    {

      if(b[i] == 0)
      {
        k++;
      }
      else if(b[i] > k)
      {
        L2 = i;
        break;
      }
      ans.push_back(b[i]);
      L2 = i+1;
    }
  }

  if( ans.size() < m+n)
  {
    cout << "-1\n" ;
  }
  else
  {
    for(auto &i : ans)
    {
      cout<< i << " ";
    }
    cout << "\n";
  }


}

return 0;
}

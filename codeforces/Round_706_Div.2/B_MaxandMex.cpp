// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1496/B
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
  set<int> s;

  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }
  
  int k1 = k;
  bool recurring = false;
  auto it = s.begin();
  
  for(int i = 0; i< n; i++)
  {
    if( *(it) != i && k1 > 0 ) 
    {
      int num = ceil( (i+(*s.rbegin()))/2.0);
      s.insert(num);
      if( num != i)
      {
        recurring = true;
        break;
      }
      k1--;
    }
    it++;
  }

  if(recurring || k1 <= 0)
  {
    cout << s.size() << "\n";
  }
  else
  {
    cout << s.size() + k << "\n";
  }
}

return 0;
}

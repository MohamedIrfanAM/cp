// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1772/C
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
  int k,n;
  cin >> k >> n;
  
  vector<int> v;
  v.push_back(1);
  
  int c = 1;

  for(int i = 1; i <= n; i++)
  {
    if((c+1+i) <= n && (n-c-i-1) >= (k-(v.size()+1)))
    {
      v.push_back(c+i+1);
      i += c;
      c++;
    }
    else if(v.size() < k && v.back() != i)
    {
      v.push_back(i);
    }
  }

  for(int a : v)
  {
    cout << a << " ";
  }

  cout << "\n";
}

return 0;
}

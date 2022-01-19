// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1506/B
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
  string s;
  cin >> s;
  vector<int> pos;

  for(int i = 0; i < n; i++)
  {
    if( s[i] == '*')
    {
      pos.push_back(i);
    }
  }

  if( pos.size() <= 2)
  {
    cout << pos.size() << "\n";
    continue;
  }
  
  int last = pos.front();
  int count = 1;
  s[last] = 'x';

  for(int i = 1; i < pos.size() ; i++)
  {
    if(pos[i]-last > k)
    {
      count++;
      last = pos[i-1];
      s[last] = 'x';
    }
  }
  if( pos.back() != 'x') count++;
  cout << count <<  "\n";

}

return 0;
}

// time-limit: 2000
// problem-url: https://codeforces.com/contest/1615/problem/B
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
  int l,r;
  cin >> l >> r;

  vector<int> count;

  int last = l;
  for(int i = 0; i < 30;i++)
  {
    int num = 1<<i;
    if(num < l)
    {
      continue;
    }
    else if( num >= l && num <= r)
    {
      count.push_back(num-last);
      last = num;
    }
    else if( num > r)
    {
      count.push_back(r-last);
      break;
    }
  }
  cout << (r-l+1) - *max_element(count.begin(),count.end()) << "\n";
}



return 0;
}

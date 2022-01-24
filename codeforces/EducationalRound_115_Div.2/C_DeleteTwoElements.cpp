// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1598/C
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
  vector<int> v(n);
  map<int,int> count;
  long long int sum = 0;

  for(auto &x : v)
  {
    cin >> x;
    sum += x;
    count[x]++;
  }

  if((2*sum) % n != 0)
  {
    cout << "0\n";
    continue;
  }
  int mean = (2*sum)/n;
  
  unsigned long long ans = 0;
  for( auto &p : count)
  {
    unsigned long long int num;
    if(p.first != mean-p.first)
    {
      num = (1LL*p.second)*count[mean-p.first];
      ans+= num;
    }
    else
    {
      num = p.second;
      ans += (num*(num-1)); 
    }
  }
  cout << ans/2 << "\n";

}

return 0;
}

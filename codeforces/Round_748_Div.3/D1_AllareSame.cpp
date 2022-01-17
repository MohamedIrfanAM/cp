// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1593/D1
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
  for(int i = 0; i < n;i++)
  {
    cin >> v[i];
  }
  int M = *min_element(v.begin(),v.end());

  vector<int> diff;

  for(int i = 0; i < n; i++)
  {
    if(v[i]-M != 0)
    {
      diff.push_back(v[i]-M);
    }
  }
  if(diff.size() == 0)
  {
    cout << -1 << "\n";
    continue;
  }
  
  int MDiff = *min_element(diff.begin(),diff.end());
  int GCD = MDiff;

  bool no = false;

  for(int i = 0; i < diff.size(); i++)
  {
    if((diff[i])%MDiff != 0)
    {
      no = true;
    }
    GCD = __gcd(GCD,diff[i]);  
  }


  if(no)
  {
    cout << GCD << "\n";
  }
  else
  {
    cout << MDiff << "\n";
  }
  
  
}

return 0;
}

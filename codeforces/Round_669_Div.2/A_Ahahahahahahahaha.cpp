// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1407/A
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
  int onecount= 0;
  int oddsum = 0;
  int evensum = 0;
  
  for(int i = 0; i < n ; i++)
  {
    cin >> v[i]; 
    if(v[i] == 1) onecount++;
    if((i+1)%2)
    {
      oddsum += v[i];
    }
    else
    {
      evensum += v[i];
    }
  }
  
  if(oddsum == evensum)
  {
    cout << v.size() << "\n";
    for(auto &i: v)
    {
      cout << i << " ";
    }
    cout << "\n";
  }
  else if(onecount <= n/2)
  {
    cout << n-onecount << "\n";
    for( auto &x : v)
    {
      if(x != 1) cout << x << " ";
    }
    cout<< "\n";
  }
  else
  {
    bool noprintone = true;
    if((n-onecount)%2 == 0 )
    {
      cout << onecount << "\n";
      noprintone = false;
    }
    else
    {
      cout << onecount-1 << '\n';
    }
    for(int i = 0; i < n; i++)
    {
      if(v[i] == 1 && !noprintone)
      {
        cout << 1 << " ";
      }
      else if( v[i] == 1)
        noprintone = false;
    }
      cout << "\n";
  }

}
return 0;
}

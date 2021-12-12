// time-limit: 1000
// problem-url: https://codeforces.com/contest/1607/problem/A
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  string k,s;
  cin >> k;
  cin >> s;

  long int sum = 0;
  for(int i = 0; i < s.length()-1; i++)
  {
    long int diff = abs(int(k.find(s[i]) - k.find(s[i+1])));
    sum += diff;
  }
  cout << sum << "\n";

}


return 0;
}

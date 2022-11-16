// time-limit: 1000
// problem-url: https://codeforces.com/contest/1742/problem/A
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
  int a,b,c;
  cin >> a >> b >> c;
  vector<int> v;
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);
  sort(v.begin(),v.end());
  if(v[1] + v[0] == v[2]){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
}

return 0;
}

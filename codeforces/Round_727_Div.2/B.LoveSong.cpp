// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1539/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int n,q;
cin >> n >> q;
string s;
cin >> s;
vector<int>v(n+1);

for(int i = 1; i <= n; i++)
{
  v[i] += v[i-1] + s[i-1] - 'a' + 1;
}
int l,r;
while(q--)
{
  cin >> l >> r; 

  cout << v[r] - v[l-1] << "\n";
}



return 0;
}

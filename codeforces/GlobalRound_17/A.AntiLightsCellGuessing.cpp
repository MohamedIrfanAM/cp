// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1610/A
#include<bits/stdc++.h>

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
int n,m;
cin >> n >> m;

if(n == 1 && m == 1)
{
  cout << "0\n";
}
else if(n == 1 || m == 1)
{
  cout << 1 << "\n";
}
else
{
  cout << "2\n";
}


}



return 0;
}
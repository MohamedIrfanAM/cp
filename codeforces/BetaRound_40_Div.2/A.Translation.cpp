// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/41/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string word;
string rev;
cin >> word;
cin >> rev;

int n = rev.length();

reverse(rev.begin(), rev.end());
if(rev == word)
{
  cout << "YES";
}
else
{
  cout << "NO";
}
return 0;
}

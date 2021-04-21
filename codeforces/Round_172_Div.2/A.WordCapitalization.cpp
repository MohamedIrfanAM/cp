// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/281/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string word;
cin >> word;

if(!isupper(word[0]))
{
  word[0] = toupper(word[0]);
}
cout << word;

return 0;
}

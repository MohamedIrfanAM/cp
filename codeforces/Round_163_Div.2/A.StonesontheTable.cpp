// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/266/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int num;
string color;
cin >> num;
cin >> color;
int same = 0;

for(int i = 0; i < num; i ++)
{
  if(color[i] == color[i+1])
  {
    same++;
  }
}

cout << same;
return 0;
}

// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/112/A
#include<bits/stdc++.h>
#include<cstdio>
#include<string>
using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string word1,word2;

cin >> word1;
cin >> word2;

for(int i = 0; i < word1.length(); i++)
{
  word1[i] = tolower(word1[i]);
  word2[i] = tolower(word2[i]);
}

if(word1 == word2)
{
  cout << 0;
}
else if(word1 > word2)
{
  cout << 1;
}
else
{
  cout << -1;
}



return 0;
}

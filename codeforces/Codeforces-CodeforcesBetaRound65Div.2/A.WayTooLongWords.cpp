// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int num;
cin >> num;
string word[num];

for( int i =0; i < num; i++ )
{
  cin >> word[i];
}

for( int i = 0; i < num; i++ )
{
  if(word[i].length() > 10)
  {
  cout << word[i][0] << word[i].length()-2<< word[i][word[i].length() -1] << "\n";
  } 
  else
  {
    cout << word[i] << "\n";
  }
}

return 0;
}

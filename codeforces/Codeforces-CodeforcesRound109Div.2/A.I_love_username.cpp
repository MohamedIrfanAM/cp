// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/155/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int amazing = 0;
int num;
int max = 0;
int min = 0;
cin >> num;

int marks[num];


for( int i =0; i < num; i++ )
{
  cin >> marks[i];
  if ( i == 0 )
  {
    min = marks[0];
    max = 0;
  }
  for ( int j =0; j < i ; j++ )
  {
    if(marks[j] > max)
    {
      max = marks[j];
    }
    if( marks[j] < min)
    {
      min = marks[j];
    }
  }
  if(marks[i] > max || marks[i] < min )
  {
    if ( i != 0 )
    {
    amazing++;
    }
  }
}
cout << amazing;

return 0;
}

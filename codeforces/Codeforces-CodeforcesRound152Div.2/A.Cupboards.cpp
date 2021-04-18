// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/248/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int num;
int zerol = 0;
int zeror = 0;
int time = 0;
int timer =0;

cin >> num;
int right[num],left[num];
for ( int i = 0; i < num; i++)
{
  cin >> left[i] >> right[i];
}

for (int i = 0; i < num; i++)
{
 if(left[i] == 0)
 {
   zerol++;
 }
 if(right[i] == 0)
 {
   zeror++;
 }

}


if(zerol == 0)
{
  time = 0;
}
else if( zerol >= float(num)/2 )
{
 time = num - zerol; 
}
else
{
  time = zerol;
}

if(zeror == 0)
{
  timer = 0;
}
else if( zeror >= float(num)/2)
{
  timer = num - zeror;
}
else
{
  timer = zeror;
}
cout << timer + time;

return 0;
}

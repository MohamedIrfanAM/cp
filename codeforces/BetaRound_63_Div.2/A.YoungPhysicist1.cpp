// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);


int x = 0;
int y = 0;
int z = 0;

int num;
int result = 0;

cin >> num;
int vect[num][3];

for(int i = 0; i < num ; i++)
{
  cin >> vect[i][0] >> vect[i][1] >> vect[i][2];
}


for(int i = 0; i < 3; i ++)
{
  x += vect[i][0];
}

for(int i = 0; i < 3; i ++)
{
  y += vect[i][1];
}

for(int i = 0; i < 3; i ++)
{
  z += vect[i][2];
}

result = x + y + z;

if(result == 0)
{
  cout << "YES\n";
}
else
{
  cout << "NO\n";
}

return 0;
}

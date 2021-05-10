// time-limit: 4000
// problem-url: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?h_r=next-challenge&h_v=zen
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int a,b;
cin >> a;
cin >> b;

string represent[9] = {"one","two","three","four","five","six","seven","eight","nine"};

for(int i = a; i <=b; i++)
{
  if(i>9)
  {
    if(i%2 == 0)
    {
      cout << "even\n";
    }
    else
    {
      cout << "odd\n";
    }
  }
  else
  {
    cout << represent[i-1] << "\n";
  }
}

return 0;
}

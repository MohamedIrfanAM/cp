// time-limit: 1000
// problem-url: https://codeforces.com/contest/1560/problem/A
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

  int k;
  cin >> k;

  long int count = 0;
  long int element = 1;

  for (long long int i = 1; i <= 1000000; i++)
  {
    string s = to_string(i);

    if(i%3 != 0 && s[s.length()-1] != '3')
    {
      element = i;
      count++; 
      if(count == k)
      {
        break;
      }
    }
  }
  cout << element<< '\n'; 
}



return 0;
}

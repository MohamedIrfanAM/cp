// time-limit: 2000
// problem-url: https://codeforces.com/contest/1626/problem/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  string s;
  cin >> s;
  int a = *s.rbegin();
  int b = *(s.rbegin()+1);
  a -= 48;
  b -= 48;

  auto it = s.rbegin();
  if(s.length() <= 2)
  {
    cout << a+b << "\n";
  }
  else if(a+b >= 10)
  {
    cout << s.substr(0,s.length()-2) << a+b << "\n";
  }
  else 
  {
    bool found = false;
    for(int i = s.length()-1; i >= 1; i--)
    {
      int first_char = s[i]-48;
      int second_char = s[i-1]-48;
      if(first_char+second_char >= 10)
      {
        s[i] = ((first_char+second_char)%10)+48;
        s[i-1] = (((first_char+second_char)/10)+48);
        cout << s << "\n";
        found = true;
        break;
      }
    }
    if(found) continue;

      int first_char = s[1]-48;
      int second_char = s[0]-48;

    cout << first_char+second_char << s.substr(2,s.length()) << "\n";

  }



}

return 0;
}

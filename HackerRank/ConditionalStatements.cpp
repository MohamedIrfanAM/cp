// time-limit: 4000
// problem-url: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include<bits/stdc++.h>
using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
cin.ignore(numeric_limits<streamsize>::max(),'\n');

  if (n == 1)
  {
    cout << "one" << endl;

  }
  else if(n == 2) 
  {
    cout << "two" << endl;
  }
  else if (n == 3)
  {
    cout <<"three"<< endl;
  }
  else if (n == 4)
  {
    cout <<"four"<< endl;
  }
  else if (n == 5)
  {
    cout <<"five"<< endl;
  }
  else if (n == 6)
  {
    cout <<"six"<< endl;
  }
  else if (n == 7)
  {
    cout <<"seven"<< endl;
  }
  else if (n == 8)
  {
    cout <<"eight";
  }
  else if (n == 9)
  {
    cout <<"nine";
  }
  else
  {
    cout << "Greater than 9\n";
  }

  return 0;
  }

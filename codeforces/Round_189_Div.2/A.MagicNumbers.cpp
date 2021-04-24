// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/320/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string n;
cin >> n;

for (int i = 0; i < n.length(); i+=0) {
 if(n[i] == '1' && n[i+1] == '4'&& n[i+2] == '4' && i < n.length()-2) 
 {
   i+=3;
 }
 else if(n[i] == '1' && n[i+1] == '4' && i < n.length()-1) 
 {
   i+=2;
 }
 else if(n[i] == '1' && i < n.length()) 
 {
   i++;
 }
 else
 {
   cout << "NO";
   exit(0);
 }
}
cout << "YES";
return 0;
}

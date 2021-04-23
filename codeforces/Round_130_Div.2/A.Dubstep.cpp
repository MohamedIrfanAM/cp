// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/208/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string s;
cin >> s;

/* if(s[0] == 'W'&& s[1] == 'U' && s[2] == 'B') */
/* { */
/*     while(true) */
/*     { */
/*         if(s.substr(0,3) == "WUB") */
/*             { */
/*             s.erase(s.begin(),s.begin() + 3); */
/*             } */
/*         else */
/*         { */
/*             break; */
/*         } */
/*     } */
/* } */

/* if(s[s.length()-3]== 'W'&& s[s.length()-2] == 'U' && s[s.length()-1] == 'B') */
/* { */
/*     while(true) */
/*     { */
/*         if(s.substr(s.length()-3,s.length()-1) == "WUB") */
/*             { */
/*             s.erase(s.begin() + s.length() - 3,s.begin()+ s.length()); */
/*             } */
/*         else */
/*         { */
/*             break; */
/*         } */
/*     } */
/* } */

for(int i = 0; i < s.length(); i++)
{
    if(i != s.length()-1 && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'  )
    {
        s.replace(i,3," ");
    }
}

cout << s  ;


return 0;
}

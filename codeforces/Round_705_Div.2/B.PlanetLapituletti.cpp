// time-limit: 2000
// problem-url: https://codeforces.com/contest/1493/problem/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


std::array<int,5> mirror(string s)
{
    std::array<int,5> mirr;
    bool defect = false;
    for(int i = 0; i < 5; i++)
    {
        if(s[i] == '3' ||s[i] == '4' ||s[i] == '6' ||s[i] == '7' ||s[i] == '9' )
        {
            defect = true;
        }
        if(s[i] == '2' )
        {
            mirr[5-i-1] = 5;
        }
        else if(s[i] == '5')
        {
            mirr[5-i-1] = 2;
        }
        else if(i != 2)
        {
           mirr[5-i-1] = (int(s[i]) - 48);
        }
        else if(i == 2)
        {
            mirr[5-i-1] = 0;    
        }
    }
    return mirr;
}


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);



int t;
cin >> t;
while(t--)
{
    int m,h;
    cin >> h >> m;
    string s;
    cin >> s; 

    
    std::array<int,5> mirr ;
      mirr = mirror(s);

    for(int i = 0; i < 5; i++)
    {
        if(i != 2)
        {
        cout << mirr[i] ;
        }
        else
        {
            cout << ":";
        }
    }
    cout << "\n";

}

return 0;
}

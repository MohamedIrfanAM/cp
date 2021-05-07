#include <iostream>
using namespace std;

int main()
{
  int months[12];

  months[0] = 31;
  months[2] = 31;
  months[3]= 30;
  months[4]= 31;
  months[5] = 30;
  months[6] = 31;
  months[7] = 31;
  months[8] = 30;
  months[9] = 31;
  months[10] = 30;
  months[11] = 31;


  int c = 0;
  long long sunday = 6;
  long long month = 1;

  for (int i = 1901; i <= 2000 ; i++)
  {
    if(i%4 == 0)
    {
      months[1] = 29;
    }
    else
    {
      months[1] = 28;
    }

    for(int j = 0; j < 12; j++)
    {
      while(true)
      {
        if(month == sunday)
        {
          c++;
          month += months[j];
          break;
        }
        else if( sunday > month )
        {
          month += months[j];
          break;
        }
        else
        {
          sunday += 7;
        }
      }
    }
  }
  cout << c;


}

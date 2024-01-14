#include <iostream>

using namespace std;


int main()
{
    int hour, minute;
    int timer;
    int sumMinute = 0;

    cin >> hour >> minute;
    cin >> timer;

    sumMinute += hour*60 + minute + timer;

    int out_hour,out_minute=0;

    out_hour = (sumMinute/60)%24;
    out_minute = sumMinute%60;

    if(out_hour < 10) cout << "0";
    cout << out_hour << " ";

    if(out_minute < 10) cout << "0";
    cout << out_minute;
    return 0;
}

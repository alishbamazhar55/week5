#include <iostream>
using namespace std;
main()
{
int time ;
int workers;
int days;
int worker;
int calculate;
int percent;
int totaltime;
int result;
cout << "neended hours are: ";
cin >> time;
cout << " firm has days: ";
cin >> days;
cout << " number of all workers are: ";
cin >> workers;
worker=days*10;
calculate=workers*worker;
percent=(calculate*10)/100;
totaltime=calculate-percent;
if (totaltime > time)
{
result=totaltime-time;
cout << "yes"<<result<<"hours left";
}
if(totaltime < time)
{
result=time-totaltime;
cout <<" not enough time"<<result<<"hours needed" ;
}
}
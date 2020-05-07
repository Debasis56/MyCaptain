#include <bits/stdc++.h>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
    int total_seconds;
public:
    getData()
    {
        cout<<" Hours? ";
        cin>>hours;
        cout<<" Minutes? ";
        cin>>minutes;
        cout<<" Seconds? ";
        cin>>seconds;
    }
    calculateSeconds()
    {
        total_seconds = (hours*60*60)+(minutes*60)+seconds;
    }
    display()
    {
        cout<<" The time is = "<<setw(2)<<setfill('0')<<hours<<":"<<setw(2)<<setfill('0')<<minutes<<":"<<setw(2)<<setfill('0')<<seconds<<endl;
        cout<<" Time in total seconds : "<<total_seconds<<endl;
    }
};
int main()
{
    Time ob1;
    ob1.getData();
    ob1.calculateSeconds();
    ob1.display();
    return 0;
}
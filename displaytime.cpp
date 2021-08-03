#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;


int main(){

    time_t t = time(NULL);
    tm* tPtr = localtime(&t);

    cout<<"Display Time and Date of Current date";
    cout<<"Seconds: "<<(tPtr->tm_sec)<<endl;
    cout<<"Minutes: "<<(tPtr->tm_min)<<endl;
    cout<<"Hours: "<<(tPtr->tm_hour)<<endl;
    cout<<"days of month: "<<(tPtr->tm_mday)<<endl;
    cout<<"month of year: "<<(tPtr->tm_mon)+1 <<endl;
    cout<<"Year: "<<(tPtr->tm_year)+1900 <<endl;
    cout<<"Weekday: "<<(tPtr->tm_wday)<<endl;
    cout<<"day of year: "<<(tPtr->tm_yday)<<endl;
    cout<<"daylight saving: "<<(tPtr->tm_isdst)<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"Current Date" <<tPtr->tm_mday<<"/"<<tPtr->tm_mon+1<<"/"<<tPtr->tm_year+1900<<endl<<endl;
    
    cout<<"Current Time" <<(tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;


    return 0;
}
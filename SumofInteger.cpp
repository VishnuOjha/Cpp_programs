#include<iostream>
using namespace std;


int main(){

    int start, sum=0,temp,digit;

    cout<<"Enter the number for Sum : ";
    cin>>start;

    temp = start;

    while(start>0){

        digit = start%10;
        sum = sum + digit;
        start = start/10;
    }
    // for (int i = 0; i < start; i++)
    // {
    //     sum = sum+i;
    // }
    
    cout<<"Given number : "<<temp<<endl;
    cout<<"Sum of digit "<<temp<<" = "<<sum<<endl;

    return 0;
}
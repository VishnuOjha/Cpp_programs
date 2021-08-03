#include<iostream>
using namespace std;


int main(){

    int num;

    cout<<"Enter the number to check :  ";
    cin>>num;

    if(num>0){

        cout<<"Number is positive : "<<num;
    }
    else if(num<0){
        cout<<"Number is Negativ : "<<num;
    }
    else{
        cout<<"Number is Zero";
    }

    return 0;
}
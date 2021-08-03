#include<iostream>
#include<math.h>
using namespace std;


int main(){
    float a,b,c;
    float s,area;

    cout<<"Enter the value of A: ";
    cin>>a;
     cout<<"Enter the value of B: ";
     cin>>b;
      cout<<"Enter the value of C: ";
    cin>>c;
    
    //Heron's formula for triangle    
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Answer : "<<area;

    return 0;

}
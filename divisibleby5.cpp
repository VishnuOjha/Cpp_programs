#include<iostream>
using namespace std;




int main(){

    int start,end,count=0,sum=0;

    cout<<"Enter the strating and ending number : ";
    cin>>start>>end;

    for (int i = start; i <= end; i++)
    {
        if(i % 5 == 0){
            cout<<i<< " ";
            count++ ;
            sum = sum +i;
        }
    }

    cout<<"Sum is" << sum;
    


    return 0;
}
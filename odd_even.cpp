#include<iostream>
using namespace std;



// code for printing usm of Even and Odd number 
int main(){

    int num, sum_even = 0, sum_odd=0;

    cout<<"Enter the number to get sum : ";
    cin>>num;


    for (int i = 0; i <= num; i++)
    {
        // adding even number
        if(i%2==0){
            sum_even = sum_even +i;
        }

        // adding odd numbers
        else{
            sum_odd = sum_odd +i;
        }
    }


    // printing final results
    cout<<"Even sum :"<<sum_even<<endl;
    cout<<"Odd sum  :"<<sum_odd<<endl;
    
return 0;

}
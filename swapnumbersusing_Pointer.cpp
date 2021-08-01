#include<iostream>
using namespace std;


void Swap(int *a, int *b){

    // logic for swapping 2 number using third variable and pointer
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(){

    int x = 4, y =5;
    // passiing address of the x&y to swap their value
    Swap(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}
#include<iostream>
using namespace std;


class Base1 {
    int a;
    public:
     void greet(){
         cout<<"Hello"<<endl;
     }
};

class Base2 {
    int a;
    public:
     void greet(){
         cout<<"Namaste"<<endl;
     }
};

class Derived : public Base1 , public Base2{
    public:
     void greet(){
         // for removing ambiguitiy from class
        // Base1 ::greet();
        Base2 :: greet();
     }
};


int main(){

    Derived d;
    d.greet();
}
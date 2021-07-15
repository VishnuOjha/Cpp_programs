#include<iostream>
using namespace std;


class Student{

    int id;
    
    //creating Static Variable and the value of counter is intially is 0
    static int count;

    public:

    void setData();
    void displayData();

    // Declaring Static member function
    void static getCount();

};


void Student :: setData(){

    cout<<"Enter the Student ID: "<<endl;
    cin>>id;
    count++;
}

void Student :: displayData(){
    
    cout<<"the id  of Student is : "<<id<<" and count is :"<<count<<endl;
    
}

// Defining  Static Variable
int Student :: count;

//Defining stattic membe function
void Student :: getCount(){

    cout<<"The count is : "<<count<<endl;
}



int main(){

    // creating object of student class and calling all the methods
    Student s1,s2,s3;

    s1.setData();
    s1.displayData();
    // calling static member function using class
    Student :: getCount();

    s2.setData();
    s2.displayData();
    Student :: getCount();

    s3.setData();
    s3.displayData();
    Student::getCount();

    return 0;
}


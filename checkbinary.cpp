// Nesting of Member Functions


#include<iostream>
#include<string>
using namespace std;


class Binary{

    string s;
    // declaring public scope
    public:

    void read();
    void check_binary();
    void onescompliment(); 
    void display();

};

// defining read using scope resolution operator
void Binary :: read(){

    cout<<"Enter any Binary Number : "<<endl;
    cin>>s;
}

// defining check_binary using scope resolution operator
void Binary :: check_binary(){

    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            
            cout<<"Incorrect Binary Formate"<<endl;
            exit(0);
        }
    }
}

// defining onesCompliment using scope resolution operator
void Binary :: onescompliment(){

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
        
    }
    
}


// defining display using scope resolution operator
void Binary :: display(){

    cout<<"The binary number is :"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
         cout<<s.at(i);
    }
    
   cout<<endl;
}

int main(){
    // Creating an object of Binary Class ,
    // and calling the binary class methods/functions
    Binary b;
    b.read();
    b.check_binary();
    b.onescompliment();
    b.display();



    return 0;

}